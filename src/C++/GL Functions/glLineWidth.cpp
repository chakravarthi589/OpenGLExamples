#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	
	glLineWidth(2);
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.0);
	glVertex2f(0.5, 0.0);
	glEnd();

	glLineWidth(4);
	glBegin(GL_LINES);
	glVertex2f(0.0, 0.25);
	glVertex2f(0.5, 0.25);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - glLineWidth Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
