#ifndef ROUTEPLAN_H
#define ROUTEPLAN_H

#include <string>
#include <vector>

using namespace std;

class routeplan
{

public:
    routeplan();
    static vector<string> getroute(string b, string e,int mode);
};

#endif // ROUTEPLAN_H
