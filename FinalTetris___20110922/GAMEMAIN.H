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
	
	void SceneShow();//���������Ȱ������������ƶ���
					 //	glTranslatef(xtra,ytra,ztra-10.0f);
		             //glRotatef(xrot,1.0f,0.0f,0.0f);
		             //glRotatef(yrot,0.0f,1.0f,0.0f);
		             //glRotatef(zrot,0.0f,0.0f,1.0f);
					 //glTranslatef(-8.0f,-6.0f,-12.0f);
	                 //��һ����������һ������


	                 //��������arr��loop1����loop2����loop2��ֵ
	                 //if(arr[12][loop2][loop3]),gameover
					 //�����һ������ֵ��Ϊ0������ȥ��һ�㣬������ķ��鶼����һ��
					 //eg:
	                 //  if(!(arr[][][]-1))���������Ϊ�������һ����ɫ����
					 //  if(!(arr[][][]-2))���������Ϊ�������һ����ɫ����
	                 //arr[loop1][loop2][loop3]
	                 //��ǵ�Ϊ��(2*loop1-16.5,2*loop2+20,2*loop3-19)��ֵ



	                 //�ٽ����������ƽ��
	                 //	glTranslatef(xx+16.0,-1.0f,zz+19);
	                 //��һ����ɫ���ı��Σ������һ����������λ��
	                 //�ټ���ƽ�������ᣬ
	                 //glTranslatef(0.0f,cout,0.0f);
	                 //ÿ�����������һ����ʾ�б���һ��ģ��
					 //	if(cout==25.0f)	
			         //   	cudetemp=cude+rand()%4;
	                 //����cout==25.0f����������鲻�����ƶ���
	                 //����£������������һ�����飬һ������
	                 //ֱ��������鲻�������µ���cudetempֵ����
	
                                  //xxx==cudetemp
	                              //����cudetemp��ֵ�������������ж�
	                              //���ܱ߸��Ӹ�ֵ��arr��arry����arrx����arrz�����
							      // arrx=int((xx+16.5)/2);
								  //arrz=int((zz+19)/2);	
								  //arry=int(cout-2.0)/2;


};
#endif