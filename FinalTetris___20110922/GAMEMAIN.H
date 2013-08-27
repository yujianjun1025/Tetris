#ifndef GGAAMM
#define GGAAMM
#include"MAIN.h"
#include"GLOBAL.h"
#include "Sprite.h"
#include"Map.h"
#include"ARRMARK.h"
class Game
{
private:
	arr_mark ArrMark;
    
	Map Map_draw;


public:
	Sprite sprite;
	Game()
	{
	
	
	}
	~Game()
	{
	}
	void EnableOpenGL();
	void SceneInit(int w,int h);
	void DisableOpenGL();
	
	void SceneShow();//在这里首先把坐标轴这样移动，
					 //	glTranslatef(xtra,ytra,ztra-10.0f);
		             //glRotatef(xrot,1.0f,0.0f,0.0f);
		             //glRotatef(yrot,0.0f,1.0f,0.0f);
		             //glRotatef(zrot,0.0f,0.0f,1.0f);
					 //glTranslatef(-8.0f,-6.0f,-12.0f);
	                 //画一个坐标轴与一个表格


	                 //遍历搜索arr【loop1】【loop2】【loop2】值
	                 //if(arr[12][loop2][loop3]),gameover
					 //如果有一层所有值不为0，则消去这一层，它上面的方块都下落一个
					 //eg:
	                 //  if(!(arr[][][]-1))就以这个点为中心填充一个红色方块
					 //  if(!(arr[][][]-2))就以这个点为中心填充一个蓝色方块
	                 //arr[loop1][loop2][loop3]
	                 //标记的为点(2*loop1-16.5,2*loop2+20,2*loop3-19)的值



	                 //再将坐标轴继续平移
	                 //	glTranslatef(xx+16.0,-1.0f,zz+19);
	                 //画一个红色的四边形，标记下一个方块下落位置
	                 //再继续平移坐标轴，
	                 //glTranslatef(0.0f,cout,0.0f);
	                 //每次在这里调用一个显示列表中一个模型
					 //	if(cout==25.0f)	
			         //   	cudetemp=cude+rand()%4;
	                 //这里cout==25.0f是在这个方块不能再移动的
	                 //情况下，重新随机生成一个方块，一旦生成
	                 //直到这个方块不能再往下掉，cudetemp值不变
	
                                  //xxx==cudetemp
	                              //根据cudetemp的值，即方块种类判断
	                              //对周边格子赋值用arr【arry】【arrx】【arrz】标记
							      // arrx=int((xx+16.5)/2);
								  //arrz=int((zz+19)/2);	
								  //arry=int(cout-2.0)/2;


};
#endif