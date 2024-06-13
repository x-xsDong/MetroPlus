# __武汉地铁出行规划 需求说明书__

## 1 引言

### 1\.1 编写目的

随着经济的发展，人口流动速度加快，地铁出行也成为大中城市的热门出行选择。在这种情况下越来越复杂的地铁线路也导致出行方案的增多。本软件需求规格说明书旨在设计一个地铁出行规划系统，满足武汉市民的出行需求。预期读者是：编写详细设计人员及程序开发人员。

### 1\.2 背景

将要开发的软件名为MetroPlus武汉市地铁出行规划系统。

### 1\.3 定义

SOA架构：面向服务的体系结构

出行规划服务（Travel Planing Service）

个性偏好（Personalization Preference）

保存路线（Route Save）

地铁实时运营情况（Metro Real\-time Operation）

情报提醒（Information Recommend）

## 2 任务概述

### 2\.1 目标

该软件开发的目的是满足武汉市民地铁出行导航及线路规划的需要，初步的适用范围是武汉地铁1\-6号线，后续迭代会拓宽更多线路。本软件产品独立于其他系统，自成一个完整的系统，应用方便。

### 2\.2 用户的特点

本软件最终用户应覆盖各个年龄段及教育程度，要求至少掌握基本的搜索及地理识图技能。预期使用频度为1万人次/天。

## 3 需求规定

### 3\.1 对功能的规定

<div align=center>
<img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/Requirement.png" width="900px">
</div><br>

主要模块包括：

\(1\) 用户登录：用户可以注册账号，并根据自己的账号和密码登录，系统判断输入是否合法，若输入正确则登录成功，否则提示登录失败。

这一模块需求储存用户账号和密码数据，在登陆时进行判断。同时也允许用户在忘记密码时重新设计新的密码。

\(2\) 出行规划：用户输入起点和终点地铁站，选择系统提供的出行规划路线。

这一模块需要读入用户选择的起点和终点并进行路线计算，完成后显示路线。

\(3\) 个性偏好：用户可以选择系统预设的标签，或创建自定义方案设置持久的出行偏好。

这一模块需求储存用户选择的出行路线偏好，并在用户选择时采用相同偏好规划路线并显示。

\(4\) 保存路线：用户可以保存系统生成的常用路线，也可以自定义创建路线。

这一模块需求储存用户的常用路线，并在需要时快速读入。

\(5\) 地铁实时运营情况：用户选择地铁线路，查看当前线路的车次情况；也可以选择车站不选择线路，查看当前车站有哪些线路可乘。

这一模块需求读取外界地铁运行数据并在应用中显示。

### 3\.2 对性能的规定

#### 3\.2\.1 精度

MetroPlus对数据精度无强要求，只需要用户选择出发地与目的地后处理即可，过程中不涉及高精度数据。

#### 3\.2\.2 时间特性要求

MetroPlus的一些具体时间特性要求如下：

响应时间 <= 3000ms

更新处理时间 <= 2000ms

数据传送时间 <= 1000ms

数据计算时间 <= 20000ms

#### 3\.2\.3 灵活性

当需求发生某些变化时，MetroPlus的灵活性要求如下：

操作方式：当用户想重新规划路线时可以快速选择常用路线或使用历史路线，减少冗余信息及不必要操作。

运行环境：通过专门的设计，只更改部分代码即可实现程序的跨平台运行。

接口：将使用API部分单独处理，可以方便地更换使用的地图API。

有效时限：当时间限制超标时，如响应时间超时、更新时间延迟，界面会出现“重新刷新”等选项，从而重新发出请求，等待响应。

### 3\.3 其他要求

#### 3\.3\.1 输入输出要求

MetroPlus需求用户选择起始地点与目标地点，这些输入不需要特地管理，通过已经确定的程序系统处理即可；MetroPlus会根据选择的起始与目的地，生成路径规划，包括文字描述与图形显示，涉及字符串与图形界面输出。

#### 3\.3\.2 数据管理能力要求

MetroPlus需要记录用户的出行偏好，作为规划路线时的重要参考；还需要记录用户的常用出行路线，以便快速访问。这些数据存储与管理不需要花费大量空间并且便于解决。

## 4 运行环境规定

### 4\.1 设备

MetroPlus对设备无强要求，在现代正常计算机设备下均可正常运行。

### 4\.2 支持软件

MetroPlus在Windows操作系统下开发与使用，源代码开发使用Qt版本: 6.6.3 Make: MSVC2019_64bit-Debug。

### 4\.3 接口

MetroPlus使用路线规划算法，实现路线运算。