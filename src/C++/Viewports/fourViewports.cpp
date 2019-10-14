#include <stdlib.h>
#include "include/GL/freeglut.h"


static int width;
static int height;

void bottomLeftViewport()
{
	glColor3f(1.0f, 0.0f, 0.0f);
	glutSolidTeapot(1);
}

void bottomRightViewport()
{
	glColor3f(0.0f, 1.0f, 0.0f);
	glutSolidTeapot(1);
}

void topLeftViewport()
{
	glColor3f(0.0f, 0.0f, 1.0f);
	glutSolidTeapot(1);
}

void topRightViewport()
{
	glColor3f(1.0f, 1.0f, 0.0f);
	glutSolidTeapot(1);
}


static void renderViewports(void)
{

	//bottomLeftViewport
	glViewport(0, 0, width / 2, height/2);
	glScissor(0, 0, width / 2, height/2);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(0.9, 0.9, 0.9, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	bottomLeftViewport();

	//bottomRightViewport
	glViewport(width / 2, 0, width / 2, height/2);
	glScissor(width / 2, 0, width / 2, height/2);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(0.7, 0.7, 0.7, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	bottomRightViewport();


	//topLeftViewport
	glViewport(0, height/2, width/2, height/2);
	glScissor(0, height / 2, width/2, height / 2);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(0.5, 0.5, 0.5, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	topLeftViewport();

	//topRightViewport
	glViewport(width/2, height / 2, width / 2, height / 2);
	glScissor(width / 2, height / 2, width / 2, height / 2);
	glEnable(GL_SCISSOR_TEST);
	glClearDepth(1.0);
	glClearColor(0.3, 0.3, 0.3, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	topRightViewport();


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
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("OpenGL Four Viewports Example");
	glShadeModel(GL_FLAT);
	glutDisplayFunc(renderViewports);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return EXIT_SUCCESS;
}
