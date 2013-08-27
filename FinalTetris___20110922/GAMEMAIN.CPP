#include"GAMEMAIN.h"
#include"Map.h"
#include"Sprite.h"
#include"ARRMARK.h"

DWORD
void Game::EnableOpenGL()
{
		PIXELFORMATDESCRIPTOR pfd;
        int iFormat;

        ghDC = GetDC( ghWnd );


        ZeroMemory( &pfd, sizeof( pfd ) );
        pfd.nSize = sizeof( pfd );  
        pfd.nVersion = 1;      //�汾��һ����Ϊ1
        pfd.dwFlags =   PFD_DRAW_TO_WINDOW | //һ��������ػ������Եı�־λ
                PFD_SUPPORT_OPENGL;
        pfd.iPixelType = PFD_TYPE_RGBA;   //����������������RGBA������ɫ����;
        pfd.cColorBits = 32;     //ÿ����ɫ����������ɫλƽ�����Ŀ������ɫ������ʽ�ǻ�������С
        pfd.iLayerType = PFD_MAIN_PLANE; //�����ԣ�Ϊ��һ���Զ�������

        iFormat = ChoosePixelFormat( ghDC, &pfd );//ѡ��һ�����ظ�ʽ

        SetPixelFormat( ghDC, iFormat, &pfd ); //���õ�DC��

        ghRC = wglCreateContext( ghDC );    //������ͼ������
   
		wglMakeCurrent( ghDC, ghRC );     //ʹ֮��Ϊ��ǰ��ͼ������
} 
void Game::SceneInit(int w,int h)
{
	    glClearColor(0.0f, 0.0f, 0.0f, 0.5f);      // ��ɫ���� 
		glClearDepth(1.0f);
	//	glEnable(GL_DEPTH_TEST);	
        glViewport(0,0,w,h);
	

        glShadeModel(GL_SMOOTH);//ѡ��λ��ƽ����Ӱ
        glMatrixMode(GL_PROJECTION);			//ѡ����Ӱ����
        glLoadIdentity();

		gluPerspective(45.0f,(GLfloat)w/(GLfloat)h,0.1f,100.0f);

		glMatrixMode(GL_MODELVIEW);				//ѡ��ģ����ͼ���� Select The Modelview Matrix
	    glLoadIdentity();						// Reset The Modelview Matrix

		glEnable(GL_LINE_SMOOTH);


}
void Game::SceneShow()
{
	
	    Map_draw.KeyMessage(sprite.arry,sprite.arrx,sprite.arrz);   //������ͼ�ļ��̴����¼�

		Map_draw.DrawGrid();     //��ͼ����������Grid��Aex
        
		sprite.Draw(cudetemp);//�����䷽��

		Map_draw.DrawDiamond(Map_draw.m_fX_cudetra,Map_draw.m_fZ_cudetra); //��ͼ���������ƶ���ǵ��Ǹ�����

	
		sprite.DrawFallCude();//����������Ǹ�����
		 
		sprite.ArrMarkFlag(cudetemp,Map_draw.m_fX_cudetra,Map_draw.m_fZ_cudetra);//������������������������ʱ�Ա��������и�ֵ���
    
}

void Game::DisableOpenGL()
{
	 wglMakeCurrent( NULL, NULL );
     wglDeleteContext( ghRC );
     ReleaseDC( ghWnd, ghDC );

}