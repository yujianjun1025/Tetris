// Sprite.cpp: implementation of the Sprite class.
//
//////////////////////////////////////////////////////////////////////

#include "Sprite.h"
#include "global.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Sprite::Sprite()
{

}

Sprite::~Sprite()
{

}

void Sprite::Init()
{

	cude=glGenLists(20);

	glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);

	glNewList(cude,GL_COMPILE);//黄绿色
	glColor3f(0.5f,1.0f,0.3f);
	glBegin(GL_QUADS);							//Draw White cude
			// 底面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			// 前面
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	

	
	        // 后面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			// 右面
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			// 左面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
		glEnd();	
		glEndList();

		glNewList(cude+5,GL_COMPILE);        //Draw Blue cude
			glColor3f(0.0f,0.0f,0.80f);
    	glBegin(GL_QUADS);						
			// 底面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			// 前面
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	

	
	        // 后面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			// 右面
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			// 左面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
		glEnd();	
		glEndList();
		
		glNewList(cude+10,GL_COMPILE);     //Draw Read cude
			glColor3f(1.0f,0.0f,0.0f);
    	glBegin(GL_QUADS);						
			// 底面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			// 前面
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	

	
	        // 后面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			// 右面
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			// 左面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
		glEnd();	
		glEndList();

		glNewList(cude+15,GL_COMPILE);//Draw Yellow cude
			glColor3f(1.0f,0.50f,0.0f);
	    glBegin(GL_QUADS);							
			// 底面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			// 前面
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	

	        // 后面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			// 右面
			glVertex3f( 1.0f, 0.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f, -1.0f);	
			glVertex3f( 1.0f,  2.0f,  1.0f);	
			glVertex3f( 1.0f, 0.0f,  1.0f);	
			// 左面
			glVertex3f(-1.0f, 0.0f, -1.0f);	
			glVertex3f(-1.0f, 0.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f,  1.0f);	
			glVertex3f(-1.0f,  2.0f, -1.0f);	
		glEnd();	

		glEndList();
		



		glNewList(cude+1,GL_COMPILE);
		glColor3f(0.0f,0.0f,0.8f);
		glBegin(GL_QUADS);
		
		//底面
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		//上面
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
		//前面
	
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
	
		//后面
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		//左面
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		//右面
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glEnd();
		glEndList();


		glNewList(cude+6,GL_COMPILE);
		glColor3f(0.0f,0.0f,0.80f);
		glBegin(GL_QUADS);
		//前面
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//后面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);
		
		//上面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);

		//下面
		glVertex3f(-3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//左面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);

		//右面
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);

		glEnd();
		glEndList();

		glNewList(cude+11,GL_COMPILE);
		glColor3f(0.0f,0.0f,0.8f);
		glBegin(GL_QUADS);

		//前面
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);

		//后面
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		
		//上面
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,4.0f,3.0f);

		//下面
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);

		//左面
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);

		//右面
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(1.0f,2.0f,3.0f);

		glEnd();
		glEndList();

		glNewList(cude+2,GL_COMPILE);
		glColor3f(1.0f,0.0f,0.0f);
		glBegin(GL_QUADS);
		//底面
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		//上面
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
		//前面
	
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
	
		//后面
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		//左面
		glVertex3f(-1.0f,6.0f,-1.0f);
		glVertex3f(-1.0f,6.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		//右面
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
        
		
		//  extern another cude
		
		//top
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		//right 
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		//font
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		//back
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		//bottom
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glEnd();
		glEndList();


		glNewList(cude+7,GL_COMPILE);
		glColor3f(1.0f,0.0f,0.0f);
		glBegin(GL_QUADS);
		//前面
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//后面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);
		
		//上面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);

		//下面
		glVertex3f(-3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//左面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);

		//右面
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);

			//extern cude
		//left
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		//right
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,1.0f);
		//bottom
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		//font
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		//back
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);


		glEnd();
		glEndList();

		glNewList(cude+12,GL_COMPILE);
		glColor3f(1.0f,0.0f,0.0f);
		glBegin(GL_QUADS);

		//前面
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);

		//后面
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		
		//上面
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,4.0f,3.0f);

		//下面
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);

		//左面
		glVertex3f(-1.0f,4.0f,-3.0f);
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,-3.0f);

		//右面
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
      
		//extern cude
		//top
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		//bottom
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		//font
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		//back
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		//left
		glVertex3f(3.0f,4.0f,-1.0f);
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
	
		glEnd();
		glEndList();


		glNewList(cude+3,GL_COMPILE);
			glColor3f(1.0f,0.50f,0.0f);
		glBegin(GL_QUADS);
		
		//底面
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		//上面
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(-1.0f,4.0f,1.0f);
		//前面
	
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(1.0f,0.0f,1.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(-1.0f,4.0f,1.0f);
	
		//后面
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		//左面
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,4.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		//右面
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,0.0f,-1.0f);
		glVertex3f(1.0f,0.0f,1.0f);


		//another cube
		//bottom
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		//top
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		//font
	
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
	
		//back
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		//right
		glVertex3f(1.0f,6.0f,-1.0f);
		glVertex3f(1.0f,6.0f,1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		//left
		glVertex3f(3.0f,6.0f,1.0f);
		glVertex3f(3.0f,6.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glEnd();

		glEndList();


		glNewList(cude+8,GL_COMPILE);
		glColor3f(1.0f,0.50f,0.0f);
		glBegin(GL_QUADS);
		//前面
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//后面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);
		
		//上面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);

		//下面
		glVertex3f(-3.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);

		//左面
		glVertex3f(-3.0f,4.0f,-1.0f);
		glVertex3f(-3.0f,4.0f,1.0f);
		glVertex3f(-3.0f,2.0f,1.0f);
		glVertex3f(-3.0f,2.0f,-1.0f);

		//右面
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
       
		// another cube
		//前面
		glVertex3f(-1.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);

		//后面
		glVertex3f(-1.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);
		
		//上面
		glVertex3f(-1.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(-1.0f,2.0f,1.0f);

		//下面
		glVertex3f(-1.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);

		//左面
		glVertex3f(-1.0f,2.0f,-1.0f);
		glVertex3f(-1.0f,2.0f,1.0f);
		glVertex3f(-1.0f,0.0f,1.0f);
		glVertex3f(-1.0f,0.0f,-1.0f);

		//右面
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,-1.0f);
		glVertex3f(3.0f,0.0f,-1.0f);
		glVertex3f(3.0f,0.0f,1.0f);

		glEnd();
		glEndList();

		glNewList(cude+13,GL_COMPILE);
			glColor3f(1.0f,0.50f,0.0f);
		glBegin(GL_QUADS);

		//前面
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);

		//后面
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		
		//上面
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,4.0f,3.0f);

		//下面
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,3.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(-1.0f,2.0f,-1.0f);

		//左面
		glVertex3f(-1.0f,4.0f,-1.0f);
		glVertex3f(-1.0f,4.0f,3.0f);
		glVertex3f(-1.0f,2.0f,3.0f);
		glVertex3f(-1.0f,2.0f,-1.0f);

		//右面
		glVertex3f(1.0f,4.0f,3.0f);
		glVertex3f(1.0f,4.0f,-1.0f);
		glVertex3f(1.0f,2.0f,-1.0f);
		glVertex3f(1.0f,2.0f,3.0f);

		//another one cube

		//前面
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(1.0f,2.0f,1.0f);

		//后面
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		
		//上面
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(1.0f,4.0f,1.0f);

		//下面
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,1.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		glVertex3f(1.0f,2.0f,-3.0f);

		//左面
		glVertex3f(1.0f,4.0f,-3.0f);
		glVertex3f(1.0f,4.0f,1.0f);
		glVertex3f(1.0f,2.0f,1.0f);
		glVertex3f(1.0f,2.0f,-3.0f);

		//右面
		glVertex3f(3.0f,4.0f,1.0f);
		glVertex3f(3.0f,4.0f,-3.0f);
		glVertex3f(3.0f,2.0f,-3.0f);
		glVertex3f(3.0f,2.0f,1.0f);


		glEnd();
		glEndList();

		glNewList(cude+4,GL_COMPILE);// big cude mode
		glColor3f(0.8f,0.0f,0.0f);
		glBegin(GL_QUADS);
		//前面
		glVertex3f(-2.0f,4.0f,2.0f);
		glVertex3f(2.0f,4.0f,2.0f);
		glVertex3f(2.0f,0.0f,2.0f);
		glVertex3f(-2.0f,0.0f,2.0f);
							

		//后面
		glVertex3f(2.0f,4.0f,-2.0f);
		glVertex3f(-2.0f,4.0f,-2.0f);
		glVertex3f(-2.0f,0.0f,-2.0f);
		glVertex3f(2.0f,0.0f,-2.0f);	
		//上面
		glVertex3f(-2.0f,4.0f,-2.0f);
		glVertex3f(2.0f,4.0f,-2.0f);
		glVertex3f(2.0f,4.0f,2.0f);
		glVertex3f(-2.0f,4.0f,2.0f);
		//下面
		glVertex3f(-2.0f,0.0f,2.0f);
		glVertex3f(2.0f,0.0f,2.0f);
		glVertex3f(2.0f,0.0f,-2.0f);
		glVertex3f(-2.0f,0.0f,-2.0f);

		//左面
		glVertex3f(-2.0f,4.0f,-2.0f);
		glVertex3f(-2.0f,4.0f,2.0f);
		glVertex3f(-2.0f,0.0f,2.0f);
		glVertex3f(-2.0f,0.0f,-2.0f);

		//右面
		glVertex3f(2.0f,4.0f,2.0f);
		glVertex3f(2.0f,4.0f,-2.0f);
		glVertex3f(2.0f,0.0f,-2.0f);
		glVertex3f(2.0f,0.0f,2.0f);
		glEnd();
		glEndList();

	

}

void Sprite::Draw(int cudetemp)
{
	for(loop1=0;loop1<17;loop1++)
		{
			for(loop2=0;loop2<17;loop2++)
				arr[0][loop1][loop2]=1;
		}
		//Left And Right   Inity
 		for(loop3=0;loop3<15;loop3++)
			for(loop2=0;loop2<11;loop2++)
			{
				arr[loop3][0][loop2]=1;
				arr[loop3][10][loop2]=1;
			}
			
		//Back And Font Inity
		for(loop3=0;loop3<15;loop3++)
			for(loop1=0;loop1<11;loop1++)
			{
				arr[loop3][loop1][0]=1;
				arr[loop3][loop1][10]=1;
			}
	

		glColor3f(0.0f,0.5f,1.0f);
		flag=1;
		for(loop3=1;loop3<12;loop3++)
		{
			for(loop1=1;loop1<10;loop1++)
			{
				for(loop2=1;loop2<10;loop2++)
				{
					if(!arr[loop3][loop1][loop2])
						flag=0;


				}
			}
			if(flag)
			{
				for(loop1=1;loop1<10;loop1++)
				{
					for(loop2=1;loop2<10;loop2++)
					{
						arr[loop3][loop1][loop2]=0;
						 i=1;
						while((loop3+i<12) && arr[loop3+i][loop1][loop2])
						{
							arr[loop3+i-1][loop1][loop2]=1;
							if(arr[loop3+i+1][loop1][loop2])
								arr[loop3+i][loop1][loop2]=1;
							else if(!arr[loop3+i+1][loop1][loop2])
								arr[loop3+i][loop1][loop2]=0;
							i++;

						}
					
					}
				}
			}
		}


		for(loop3=1;loop3<12;loop3++)
		{
			for(loop1=1;loop1<10;loop1++)
			{
				for(loop2=1;loop2<10;loop2++)
				{
					if(arr[loop3][loop1][loop2]==1)
					{
						glTranslatef(loop1*2.0f+1,loop3*2.0f+1.0f,loop2*2.0f+1);
						glCallList(cude);												//黄绿色
						glTranslatef(-loop1*2.0f-1,-loop3*2.0f-1.0f,-loop2*2.0f-1);
					}
					else if(arr[loop3][loop1][loop2]==2)
					{
						glTranslatef(loop1*2.0f+1,loop3*2.0f+1.0f,loop2*2.0f+1);
						glCallList(cude+5);												//Blue
						glTranslatef(-loop1*2.0f-1,-loop3*2.0f-1.0f,-loop2*2.0f-1);
					}
					else if(arr[loop3][loop1][loop2]==3)
					{
						glTranslatef(loop1*2.0f+1,loop3*2.0f+1.0f,loop2*2.0f+1);
						glCallList(cude+10);											//Red
						glTranslatef(-loop1*2.0f-1,-loop3*2.0f-1.0f,-loop2*2.0f-1);
					}
					else if(arr[loop3][loop1][loop2]==4)
					{
						glTranslatef(loop1*2.0f+1,loop3*2.0f+1.0f,loop2*2.0f+1);
						glCallList(cude+15);
						glTranslatef(-loop1*2.0f-1,-loop3*2.0f-1.0f,-loop2*2.0f-1);
					}


				}
			}
		
		}


}
void Sprite::DrawFallCude()
{
		glColor3f(0.0f,0.0f,1.0f);	
		glTranslatef(0.0f,cout,0.0f);
		if(cout==25.0f)
			cudetemp=cude+rand()%4;
	    glCallList(cudetemp);	
}

void Sprite::ArrMarkFlag(int xxx,float xx,float zz)
{
	 arrx=int((xx+16.5)/2);
	 arrz=int((zz+19)/2);	
	 arry=int(cout-2.0)/2;

	if(cout>2.0 )	
	{
		cout-=0.10f;
	}
	count1+=1;
    if(!(count1-250) )
	{
		arr[0][arrx][arrz]=1;	
		cout=25.0f;
		count1=0;
	
	}


    if(xxx==cude )
	{
		if(arr[arry][arrx][arrz])
		{
			arr[arry+1][arrx][arrz]=1;
			cout=25.0f;
			count1=0;			
		}
	
	}
	else if(xxx==cude+1)
	{
		if(arr[arry][arrx][arrz] )
		{
			arr[arry+1][arrx][arrz]=2;
			arr[arry+2][arrx][arrz]=2;
			arr[arry+3][arrx][arrz]=2;
			cout=25.0f;
			count1=0;
		
		}
		
	}
	else if(xxx==cude+6)
	{   

		
	

		if(arr[arry][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=2;
			arr[arry+1][arrx-1][arrz]=2;
			arr[arry+1][arrx+1][arrz]=2;
			cout=25.0f;
			count1=0;
		}
	


	}
	else if(xxx==cude+11)
	{
		
	
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz-1] || arr[arry][arrx][arrz+1])
		{
			arr[arry+1][arrx][arrz-1]=2;
			arr[arry+1][arrx][arrz+1]=2;
			arr[arry+1][arrx][arrz]=2;
			cout=25.0f;
			count1=0;
		}
	
	}
	else if(xxx==cude+2)
	{
		if(arr[arry][arrx][arrz] || arr[arry+2][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+2][arrx][arrz]=3;
			arr[arry+3][arrx][arrz]=3;
			arr[arry+3][arrx+1][arrz]=3;
			cout=25.0f;
			count1=0;
		}
	}
	else if(xxx==cude+7)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry-1][arrx+1][arrz]  )
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+1][arrx-1][arrz]=3;
			arr[arry+1][arrx+1][arrz]=3;
			arr[arry][arrx+1][arrz]=3;
			cout=25.0f;
			count1=0;
		}

	}
	else if(xxx==cude+12)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz+1] || arr[arry][arrx][arrz-1] || arr[arry][arrx+1][arrz-1])
		{
			arr[arry+1][arrx][arrz]=3;
			arr[arry+1][arrx][arrz+1]=3;
			arr[arry+1][arrx][arrz-1]=3;
			arr[arry+1][arrx+1][arrz-1]=3;
			cout=25.0f;
			count1=0;

		}
	}
	else if(xxx==cude+3)
	{
		if(arr[arry][arrx][arrz] || arr[arry+1][arrx+1][arrz])
		{
			arr[arry+1][arrx][arrz]=4;
			arr[arry+2][arrx][arrz]=4;
			arr[arry+2][arrx+1][arrz]=4;
			arr[arry+3][arrx+1][arrz]=4;
			cout=25.0f;
			count1=0;

		}
	}
	else if(xxx==cude+8)
	{
		if(arr[arry-1][arrx][arrz] || arr[arry][arrx-1][arrz] || arr[arry-1][arrx+1][arrz])
		{
			arr[arry][arrx][arrz]=4;
			arr[arry+1][arrx][arrz]=4;
			arr[arry][arrx+1][arrz]=4;
			arr[arry+1][arrx-1][arrz]=4;
			cout=25.0f;
			count1=0;
		}
	}
	else if(xxx==cude+13)
	{
		if(arr[arry][arrx][arrz] || arr[arry][arrx][arrz+1] || arr[arry][arrx+1][arrz] || arr[arry][arrx+1][arrz-1])
		{
			arr[arry+1][arrx][arrz]=4;
			arr[arry+1][arrx][arrz+1]=4;
			arr[arry+1][arrx+1][arrz]=4;
			arr[arry+1][arrx+1][arrz-1]=4;
			cout=25.0f;
			count1=0;
		}

	}

}