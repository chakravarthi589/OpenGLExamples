#include <stdio.h>
#include <math.h>
#include "include/GL/freeglut.h"

#define PI 3.1415926535898 
GLint No_of_Points = 100;
GLfloat angle;

void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_LINE_LOOP);
		for (int i = 0; i < No_of_Points; i++)
		{
			angle = 2 * PI*i / No_of_Points;
			glVertex2f(cos(angle), sin(angle));
		}
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - Circle Using GL_LINE_LOOP Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
