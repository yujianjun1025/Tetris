// Map.cpp: implementation of the Map class.
//
//////////////////////////////////////////////////////////////////////

#include "Map.h"
#include"Main.h"
#include "global.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Map::Map()
{

}

Map::~Map()
{

}

void Map::Init()
{

}

void Map::DrawGrid()
{

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glLoadIdentity();
     
	
		
		glTranslatef(m_fXtra,m_fYtra,m_fZtra-10.0f);
		glRotatef(m_fXrot,1.0f,0.0f,0.0f);
		glRotatef(m_fYrot,0.0f,1.0f,0.0f);
		glRotatef(m_fZrot,0.0f,0.0f,1.0f);
	    

		glTranslatef(-8.0f,-6.0f,-12.0f);
		
		glColor3f(1.0f,1.0f,1.0f);

		glLineWidth(3.0f);
		glBegin(GL_LINES);
		glVertex3f(-5.0f,3.0f,0.0f);
		glVertex3f(27.0f,3.0f,0.0f);
		glEnd();
		glBegin(GL_TRIANGLES);
		glVertex3f(27.0f,3.80f,0.0f);
		glVertex3f(28.0f,3.0f,0.0f);
		glVertex3f(27.0f,2.20f,0.0f);
		glEnd();


		glLineWidth(1.0f);


		for(loop1=1;loop1<11;loop1++)
			for(loop2=1;loop2<11;loop2++)
			{
			
					
				    	if(loop1<10)   //xAex  direction
						{

							glBegin(GL_LINES);

							glVertex3f(2.0f*loop1,3.0f,2.0f*loop2);
							glVertex3f(2.0f*(loop1+1),3.0f,2.0f*loop2);

							glEnd();

						}

						if(loop2<10)  //yAex  direction
						{

							glBegin(GL_LINES);

							glVertex3f(2.0f*loop1,3.0f,2.0f*loop2);
							glVertex3f(2.0f*loop1,3.0f,2.0f*(loop2+1));
							glEnd();
						}
		
			}

}
void Map::DrawDiamond(float m_fX_cudetra,float m_fZ_cudetra)
{
		glColor3f(1.0f,0.0f,0.0f);
		glTranslatef(m_fX_cudetra+16.0f,-1.0f,m_fZ_cudetra+19);

		glBegin(GL_LINES);

		glVertex3f(0.0f,4.0f,-0.3f);
		glVertex3f(0.3f,4.0f,0.0f);

		glVertex3f(0.3f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,0.30f);

		glVertex3f(0.0f,4.0f,0.30f);
		glVertex3f(-0.3f,4.0f,0.0f);

		glVertex3f(-0.3f,4.0f,0.0f);
		glVertex3f(0.0f,4.0f,-0.3f);
		glEnd();
      
}
