// Key.cpp: implementation of the Key class.
//
//////////////////////////////////////////////////////////////////////

#include "Key.h"

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

Key::Key()
{
	m_fXrot=0.0f;
	m_fYrot=0.0f;
	m_fZrot=0.0f;
	m_fXtra=0.0f;
	m_fYtra=0.0f;
	m_fZtra=0.0f;

	m_fX_cudetra=-7.50f;
	m_fZ_cudetra=-12.0f;
	cout=25.0f;
	count1=0.0;

}

Key::~Key()
{

}
void Key::KeyMessage(int arry,int arrx,int arrz)
{
				if(keys['S'])
				{  
					m_fZtra-=TRANSLATEF;

				}
				else if(keys['L'])
				{
					m_fZtra+=TRANSLATEF;
				}
				else if(keys['A'])
				{
					m_fXtra-=TRANSLATEF;
				}
				else if(keys['D'])
				{
					m_fXtra+=TRANSLATEF;
				}
				else if(keys['W'])
				{
					m_fYtra+=TRANSLATEF;
				}
				else if(keys['Z'])
				{
					m_fYtra-=TRANSLATEF;
				}
				else if(keys[VK_PRIOR])
				{
					m_fZrot+=ROTATEF;
				}

				else if(keys[VK_NEXT])
				{   
					m_fZrot-=ROTATEF;
				}
				else if(keys[VK_LEFT])
				{
					m_fYrot-=ROTATEF;
				
				}
				else if(keys[VK_RIGHT])
				{
					m_fYrot+=ROTATEF;
				}
				else if(keys[VK_UP])
				{
					m_fXrot-=ROTATEF;
				}
				else if(keys[VK_DOWN])
				{
					m_fXrot+=ROTATEF;
				}
				if(keys['B'] && b_key)
				{ 
					 if(cudetemp==cude && !arr[arry][arrx][arrz+1])
						 	m_fZ_cudetra+=2.0f;
					 
					 else if(cudetemp==cude+1 && !arr[arry][arrx][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry+1][arrx][arrz+1])
							m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+6 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx-1][arrz+1] && !arr[arry][arrx+1][arrz+1])
						    m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+11 && !arr[arry][arrx][arrz+1])
							m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+2 && !arr[arry][arrx][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry+1][arrx][arrz+1] && !arr[arry+1][arrx+1][arrz+1] )
							m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+7 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx-1][arrz+1] && !arr[arry][arrx+1][arrz+1] && !arr[arry-1][arrx+1][arrz+1])
							m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+12 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx+1][arrz-1])
							m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+3 && !arr[arry][arrx][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry][arrx+1][arrz+1] && !arr[arry+1][arrx+1][arrz+1])
						    m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+8 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx-1][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry-1][arrx+1][arrz+1])
						    m_fZ_cudetra+=2.0f;
					 else if(cudetemp==cude+13 && !arr[arry+1][arrx][arrz+2] && !arr[arry+1][arrx+1][arrz+1])
		            	    m_fZ_cudetra+=2.0f;
					 b_key=0;
				
				}
				if(!keys['B'])
				{
					b_key=1;
				}
				 if(keys['Y'] && y_key )
				{
					 if(cudetemp==cude && !arr[arry][arrx][arrz-1])
						 m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+1 && !arr[arry][arrx][arrz-1] && !arr[arry-1][arrx][arrz-1] && !arr[arry+1][arrx][arrz-1])
						 m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+6 && !arr[arry][arrx][arrz-1] && !arr[arry][arrx-1][arrz-1] && !arr[arry][arrx+1][arrz-1])
						 m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+11 && !arr[arry][arrx][arrz-1])
						 m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+2 && !arr[arry][arrx][arrz-1] && !arr[arry-1][arrx][arrz-1] && !arr[arry+1][arrx][arrz-1] && !arr[arry+1][arrx+1][arrz-1] )
							m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+7 && !arr[arry][arrx][arrz-1] && !arr[arry][arrx-1][arrz-1] && !arr[arry][arrx+1][arrz-1] && !arr[arry-1][arrx+1][arrz-1])
							m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+12 && !arr[arry][arrx][arrz-1] && !arr[arry][arrx+1][arrz-1])
							m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+3 && !arr[arry][arrx][arrz-1] && !arr[arry-1][arrx][arrz-1] && !arr[arry][arrx+1][arrz-1] && !arr[arry+1][arrx+1][arrz-1])
						    m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+8 && !arr[arry][arrx][arrz-1] && !arr[arry][arrx-1][arrz-1] && !arr[arry-1][arrx][arrz-1] && !arr[arry-1][arrx+1][arrz-1])
						   m_fZ_cudetra-=2.0f;
					 else if(cudetemp==cude+13 && !arr[arry+1][arrx][arrz-1] && !arr[arry+1][arrx+1][arrz-2])
		            	   m_fZ_cudetra-=2.0f;
					
					 y_key=0;
				}
				if(!keys['Y'])
				 {
					 y_key=1;
				 }
				 if(keys['J'] && j_key)
				{
					if(cudetemp==cude && !arr[arry][arrx+1][arrz])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+1 && !arr[arry][arrx+1][arrz] && !arr[arry-1][arrx+1][arrz] && !arr[arry+1][arrx+1][arrz])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+6 && !arr[arry][arrx+2][arrz])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+11 && !arr[arry][arrx+1][arrz] && !arr[arry][arrx+1][arrz-1] && !arr[arry][arrx+1][arrz+1])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+2 && !arr[arry+1][arrx+1][arrz] && !arr[arry][arrx+1][arrz] && !arr[arry+2][arrx+2][arrz])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+7 && !arr[arry][arrx+2][arrz] && !arr[arry-1][arrx+2][arrz])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+12 && !arr[arry][arrx+1][arrz] && !arr[arry][arrx+1][arrz+1] && !arr[arry][arrx+2][arrz-1])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+3 && !arr[arry][arrx][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry][arrx+1][arrz+1] && !arr[arry+1][arrx+1][arrz+1])
						m_fX_cudetra+=2.0f;
					else if(cudetemp==cude+8 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx-1][arrz+1] && !arr[arry-1][arrx][arrz+1] && !arr[arry-1][arrx+1][arrz+1])
				   	     m_fX_cudetra+=2.0f;
				    else if(cudetemp==cude+13 && !arr[arry][arrx+2][arrz] && !arr[arry][arrx+2][arrz-1] && !arr[arry][arrx+1][arrz+1])
						 m_fX_cudetra+=2.0f;
						j_key=0;
				}
				 if(!keys['J'])
				 {
					 j_key=1;
				 }
				 if(keys['G'] && g_key)
				 {
					 if(cudetemp==cude && !arr[arry][arrx-1][arrz])
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+1 && !arr[arry-1][arrx-1][arrz] && !arr[arry][arrx-1][arrz] && !arr[arry+1][arrx-1][arrz])
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+6 && !arr[arry][arrx-2][arrz])//May be have fault
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+11 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx-1][arrz-1] && !arr[arry][arrx-1][arrz+1])
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+2 && !arr[arry-1][arrx-1][arrz] && !arr[arry][arrx-1][arrz] && !arr[arry+1][arrx-1][arrz])
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+7 && !arr[arry][arrx-2][arrz] && !arr[arry-1][arrx][arrz])
						m_fX_cudetra-=2.0f;
				     else if(cudetemp==cude+12 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx-1][arrz-1] && !arr[arry][arrx-1][arrz+1])
						m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+3 && !arr[arry][arrx-1][arrz] && !arr[arry+1][arrx-1][arrz] && !arr[arry+1][arrx-2][arrz] && !arr[arry+2][arrx][arrz] )
							m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+8 && !arr[arry][arrx-1][arrz] && !arr[arry+1][arrx-2][arrz])
							m_fX_cudetra-=2.0f;
					 else if(cudetemp==cude+13 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx-1][arrz+1] && !arr[arry][arrx][arrz-1])
							m_fX_cudetra-=2.0f;
				
					g_key=0;
				}
				 if(!keys['G'])
				 {
					 g_key=1;

				 }
			    if(keys[' '] && null_key && cudetemp!=cude)
				 {

						 if(cudetemp==cude+1 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx+1][arrz] && !arr[arry+1][arrx-1][arrz] && !arr[arry-1][arrx+1][arrz])
							 cudetemp+=5;
						 else if(cudetemp==cude+6 && !arr[arry+1][arrx-1][arrz-1] && !arr[arry+1][arrx][arrz-1] && !arr[arry+1][arrx+1][arrz+1] && !arr[arry+1][arrx][arrz+1] )						   
							 cudetemp+=5;		
						 else if(cudetemp==cude+11 && !arr[arry+1][arrx][arrz] && !arr[arry-1][arrx][arrz])
							 cudetemp-=10;
						 else if(cudetemp==cude+2 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx+1][arrz] && !arr[arry-1][arrx-1][arrz] && !arr[arry-1][arrx+1][arrz])
							 cudetemp+=5;
						 else if(cudetemp==cude+7 && !arr[arry][arrx-1][arrz+1] && !arr[arry][arrx][arrz+1] && !arr[arry][arrx][arrz-1] && !arr[arry][arrx+1][arrz-1])
							 cudetemp+=5;
						 else if(cudetemp==cude+12 && !arr[arry][arrx][arrz+1] && !arr[arry][arrx][arrz] && !arr[arry+2][arrx][arrz] && !arr[arry+2][arrx][arrz-1] && !arr[arry+2][arrx+1][arrz-1] && !arr[arry+2][arrx+1][arrz])
							 cudetemp-=10;
						 else if(cudetemp==cude+3 && !arr[arry][arrx-1][arrz] && !arr[arry][arrx+1][arrz] && !arr[arry][arrx+2][arrz] && !arr[arry+1][arrx-1][arrz] && !arr[arry+1][arrx+2][arrz] && !arr[arry+2][arrx+2][arrz])
							 cudetemp+=5;
						 else if(cudetemp==cude+8 && !arr[arry][arrx-1][arrz+1] && !arr[arry][arrx][arrz+1] && !arr[arry][arrx+1][arrz-1] && !arr[arry+1][arrx+1][arrz] )
							 cudetemp+=5;
						 else if(cudetemp==cude+13 && !arr[arry+1][arrx+1][arrz-1] && !arr[arry+1][arrx+1][arrz] && !arr[arry][arrx][arrz+1] && !arr[arry][arrx][arrz])
							 cudetemp-=10;
						     
						 null_key=0; 
				 }
				 if(!keys[' '])
				 {
					 null_key=1;
				 }
				



}
