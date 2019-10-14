#include <stdlib.h>
#include "include/GL/freeglut.h"


static int width;
static int height;

void leftViewport()
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glutWireTeapot(1);
}

void rightViewport()
{
	glColor3f(0.0f, 0.0f, 1.0f);
	glutWireTeapot(1);
}


static void renderViewports(void)
{

	//leftViewport
	glViewport(0, 0, width / 2, height);
	glScissor(0, 0, width / 2, height);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	leftViewport();

	//rightViewport
	glViewport(width / 2, 0, width / 2, height);
	glScissor(width / 2, 0, width / 2, height);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, 3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	rightViewport();


	glFlush();
}

static void reshape(int w, int h) 
{
	width = w;
	height = h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) 
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1400, 700);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL Two Viewports Example");
	glShadeModel(GL_FLAT);
	glutDisplayFunc(renderViewports);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return EXIT_SUCCESS;
}
