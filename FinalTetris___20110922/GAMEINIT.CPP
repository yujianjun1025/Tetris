#include"MAIN.h"
#include"GAMEINIT.h"

void game_init::EnableOpenGL()
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

void game_init::SceneInit(int w,int h)
{
        glClearColor(0.0f, 0.0f, 0.0f, 0.5f);      // ��ɫ���� 
		glClearDepth(1.0f);
		glEnable(GL_DEPTH_TEST);
	
        glViewport(0,0,w,h);
	

        glShadeModel(GL_SMOOTH);//ѡ��λ��ƽ����Ӱ
        glMatrixMode(GL_PROJECTION);			//ѡ����Ӱ����
        glLoadIdentity();

		gluPerspective(45.0f,(GLfloat)w/(GLfloat)h,0.1f,100.0f);

		glMatrixMode(GL_MODELVIEW);				//ѡ��ģ����ͼ���� Select The Modelview Matrix
	    glLoadIdentity();						// Reset The Modelview Matrix

		glEnable(GL_LINE_SMOOTH);
}