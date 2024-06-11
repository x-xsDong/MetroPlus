<h1 align = "center">界面设计文档</h1>

## 一、概述

本文档是针对地铁出行规划桌面端应用程序的界面设计文档。该程序的主要功能包括路线规划、实时地铁、历史行程和运营时间，设计旨在提供用户友好的界面和流畅的交互体验。

## 二、主要界面

1. **主页**
2. **路线规划页**
3. **实时地铁页**
4. **历史行程页**
5. **运营时间页**
6. **热门地点页**

   <div align = "center">
       <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui2.png" width="400px" />
       <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui3.png" width="400px" />
       <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui4.png" width="400px" />
       <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui5.png" width="400px" />

   </div>
   
   


### 1 主页

#### 简介

主页是该程序的入口，主要是应用的LOGO标志及登录部分。页面包含两个模块，分别是登录帐号和注册帐号。

<div align = "center">
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui1.png" width="400px" />
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui10.png" width="400px" />
</div>

#### 交互细节

1. 用户点击用户名和密码的文本框输入，正确无误后点击登录按钮进入程序其他功能界面。
2. 新用户可以点击“去注册”的提示文本，跳转到注册帐号的界面。
3. 如果误点进入到注册界面，也可以点击“已有帐号？去登录”的文本跳转到登录界面。

### 2 路线规划页

#### 简介

路线规划页提供用户两种导航模式。用户可以输入任意两个地铁站点，结果生成后系统会自动保存最近搜索过的线路。

<div align = "center">
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui2.png" width="800px" />
</div>

#### 交互细节

1. 用户可以输入起、终点，再选择下方的导航模式。图标变蓝表示选中。如果不选，默认为“站点最少”。

2. 选择完毕后，点击右侧的放大镜符号后程序会自动搜索站点。若输入有误，则提示“地点输入错误”。

3. 界面右侧的地铁线路图能以鼠标位置为中心缩放。
   
4. 地铁线路图上方的推荐卡片可以显示实时时间，点击后跳转到“热门地点”页。

5. 用户按下右上角“退出登录”按钮回到上级界面，点击其左侧的换肤按钮切换到“个性化主题”页。

6. 左侧菜单包含该系统的五个主要功能，用户可以来回切换。

### 3 实时地铁页

#### 简介

用户进入实时地铁页后，可以查看地铁线路的各项信息，如线路起终点、总长度、站点个数、票价范围和发车间隔等。

<div align = "center">
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui3.png" width="800px" />
</div>

#### 交互细节

1. 用户可以左右拖动页面下方的滚动条，共有武汉的12条地铁线路信息。

2. 部分长线路（如1、2号线）右侧有滚动条，上下滑动显示更多站点。

### 4 历史行程页

#### 简介

历史行程页保存用户之前的路径规划记录。

<div align = "center">
     <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui4.png" width="800px" />
</div>

 #### 交互细节

1. 用户可以拖动滚动条查看所有的本地导航记录。

2. 用户按下右上角“退出登录”按钮回到上级界面，点击其左侧的换肤按钮切换到“个性化主题”页。

### 5 运营时间页

#### 简介

可以查看不同线路、不同站点的运营时间。

<div align = "center">
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui5.png" width="800px" />
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui6.png" width="800px" />
</div>

#### 交互细节

1. 进入界面后是12条地铁线路的简略信息。

2. 点击任意一条线路的交互卡片后，弹出该线路的运营时间表，包含不同站点的首末班发车时间。

### 6 热门地点页

#### 简介

向用户展示武汉部分热门景点、商圈附近的地铁信息。

<div align = "center">
    <img src="https://github.com/x-xsDong/MetroPlus/blob/main/image/ui/ui7.png" width="800px" />
</div>

#### 交互细节

1. 热门景点模块包含了武汉市区主要的20个旅游热门地，商圈模块包含了8个主要的热门商圈及商场。

2. 用户可以在此页面查询到符合的地铁站后，在“路线规划”页进一步搜索。
