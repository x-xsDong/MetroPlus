#define _CRT_SECURE_NO_WARNINGS 1

#define MAXVEX 1000
#define INF 32767
#define DIST_NUM 285

#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include "routeplan.h"

using namespace std;

class Vex
{
public:
    string station_name;
    int istransfer; // if the station is a transfer station
    Vex()
    {
        station_name = "";
        istransfer = 0;
    }
};

class Edge
{
public:
    int overlap; // if this edge is used by two lines
    int line; // line of the edge
    double weight; // used for algorithm
    double distance;
    Edge()
    {
        overlap = 0;
        line = 0;
        weight = INF;
        distance = 0.0;
    }
};

Vex v[MAXVEX];            // vertex of station
int vnum = 0;             // number of station
Edge mat[MAXVEX][MAXVEX]; // edge matrix

double sweight[MAXVEX];   // to record the shortest len between i and v0
int spath[MAXVEX];        // to record the shortest path
int final_path[MAXVEX];   // to record the route
int path_cnt = 0;         // to record the station number of the route

int add_vex(Vex p)
{ // return index of p in v[]
    if (!p.istransfer)
    { // if p is not a transfer station
        v[vnum++] = p;
        return vnum - 1; // add p into v and return index
    }
    else
    {
        for (int i = 0; i < vnum; i++)
        { // if p is already in v[], don't add and return its index
            if (p.station_name == v[i].station_name)
                return i;
        }
        v[vnum++] = p; // if p is not in v[],add p into v
        return vnum - 1;
    }
}

void create_graph(int mode)
{
    ifstream file("./map_addDist.txt");
    int v1, v2; // v1 is the index of last station, v2 is the index of present station
    int line_cnt = 0;
    int type = 0; // used to find overlap situation
    double dist;
    Vex tmp_vex = Vex();
    Edge tmp_edge = Edge();
    string tmp_s;
    int tmp_i;

    // read how many lines to read
    getline(file, tmp_s);
    line_cnt = stoi(tmp_s);
    for (int i = 0; i < line_cnt; i++)
    {
        // read line number and how many stations to read
        int lineID, staion_cnt;
        getline(file, tmp_s); // need to split
        tmp_i = tmp_s.find(" ");
        lineID = stoi(tmp_s.substr(0, tmp_i));
        staion_cnt = stoi(tmp_s.substr(tmp_i + 1));
        v1 = v2 = -1;
        // read the first station
        getline(file, tmp_s); // need to split
        tmp_i = tmp_s.find(" ");
        tmp_vex.station_name = tmp_s.substr(0, tmp_i);
        tmp_vex.istransfer = stoi(tmp_s.substr(tmp_i + 1));
        v1 = add_vex(tmp_vex);
        if (tmp_vex.station_name == "中南路" || tmp_vex.station_name == "洪山广场" ||
            tmp_vex.station_name == "老关村" || tmp_vex.station_name == "国博中心南")
        {
            type = 1;
        }
        for (int j = 0; j < staion_cnt-1; j++)
        {
            // read distance
            getline(file, tmp_s);
            dist = stod(tmp_s);
            // read station
            getline(file, tmp_s); // need to split
            tmp_i = tmp_s.find(" ");
            tmp_vex.station_name = tmp_s.substr(0, tmp_i);
            tmp_vex.istransfer = stoi(tmp_s.substr(tmp_i + 1));
            v2 = add_vex(tmp_vex);
            if (tmp_vex.station_name == "中南路" || tmp_vex.station_name == "洪山广场" ||
                tmp_vex.station_name == "老关村" || tmp_vex.station_name == "国博中心南")
            {
                if (type == 1)
                { // overlap
                    mat[v1][v2].distance = mat[v2][v1].overlap = 1;
                    type = 0;
                }
                else
                {
                    type = 1;
                }
            }
            if (mode == 0)
            {
                mat[v1][v2].weight = mat[v2][v1].weight = 1;
            }
            else
            {
                mat[v1][v2].weight = mat[v2][v1].weight = dist;
            }
            mat[v1][v2].distance = mat[v2][v1].distance = dist;
            mat[v1][v2].line = mat[v2][v1].line = lineID;
            v1 = v2;
        }
    }
    file.close();

    // need to initialize route and station number
    for (int i = 0; i < vnum; i++)
    {
        final_path[i] = 0;
    }
    path_cnt = 0;
}

void Dijkstra(int v0)
{
    double minweight = 0;
    int minv = 0;
    int wfound[MAXVEX] = { 0 }; // to sign if the shortest path from i to v0 is found
    for (int i = 0; i < vnum; i++)
    {
        sweight[i] = mat[v0][i].weight;
        spath[i] = v0;
        wfound[i] = 0;
    }
    sweight[v0] = 0;
    wfound[v0] = 1;
    for (int i = 0; i < vnum - 1; i++)
    {
        minweight = INF;
        for (int j = 0; j < vnum; j++)
        {
            if (!wfound[j] && sweight[j] < minweight)
            {
                minv = j;
                minweight = sweight[minv];
            }
        }
        wfound[minv] = 1;
        for (int j = 0; j < vnum; j++)
        {
            if (!wfound[j] && (minweight + mat[minv][j].weight) < sweight[j])
            {
                sweight[j] = minweight + mat[minv][j].weight;
                spath[j] = minv;
            }
        }
    }
}

void reverse()
{
    int temple[MAXVEX] = { 0 };
    for (int i = 0; i < path_cnt; i++)
    {
        temple[path_cnt - 1 - i] = final_path[i];
    }
    for (int i = 0; i < path_cnt; i++)
    {
        final_path[i] = temple[i];
    }
}

vector<string> routeplan::getroute(string b, string e, int mode)
{
    create_graph(mode);
    string begin = b;
    string end = e;
    int index_b = 0, index_e = 0;

    bool bright = false;
    bool eright = false;

    for (int i = 0; i < vnum; i++)
    {
        if (begin == v[i].station_name)
        {
            index_b = i;
            bright = true;
        }
        if (end == v[i].station_name)
        {
            index_e = i;
            eright = true;
        }
    }
    if (!bright || !eright)
    {
        return {};
    }

    Dijkstra(index_b);
    int tmp = index_e;
    while (tmp != index_b)
    {
        final_path[path_cnt++] = tmp;
        tmp = spath[tmp];
    }
    final_path[path_cnt++] = tmp;
    reverse();

    // generate route
    vector<string> route;
    int linebuf = 0;
    for (int i = 0; i < path_cnt - 1; i++) {
        route.push_back(v[final_path[i]].station_name);
        if (mat[final_path[i]][final_path[i + 1]].overlap)
        { // overlap situation
            if (linebuf == 0)
            { // first station
                linebuf = mat[final_path[i + 1]][final_path[i + 2]].line;
                route.push_back(to_string(linebuf));
            }
            else
            { // just use last line number
                route.push_back(to_string(linebuf));
            }
        }
        else
        {
            linebuf = mat[final_path[i]][final_path[i + 1]].line;
            route.push_back(to_string(linebuf));
        }
    }
    route.push_back(v[final_path[path_cnt - 1]].station_name);

    // calculate price
    double total_dst = 0;
    for (int i = 0; i < path_cnt; i++) {
        total_dst += mat[final_path[i]][final_path[i + 1]].distance;
    }

    //只保留两位小数
    stringstream ss;
    ss << setiosflags(std::ios::fixed) << std::setprecision(2) << total_dst;
    string total_dst_str = ss.str();

    route.push_back(total_dst_str);
    int price = 0;
    if (total_dst <= 4)
        price = 2;
    else if (total_dst <= 8)
        price = 3;
    else if (total_dst <= 12)
        price = 4;
    else if (total_dst <= 18)
        price = 5;
    else if (total_dst <= 24)
        price = 6;
    else if (total_dst <= 32)
        price = 7;
    else if (total_dst <= 40)
        price = 8;
    else if (total_dst <= 50)
        price = 9;
    else
        price = 10 + (total_dst - 50) / 20;
    route.push_back(to_string(price));
    return route;
}
