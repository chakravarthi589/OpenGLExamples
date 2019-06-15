#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POINTS);
		glVertex2f(0.0, 0.0);
		glVertex2f(0.5, 0.0);
		glVertex2f(0.0, 0.5);
		glVertex2f(0.5, 0.5);
		glVertex2f(0.25, 0.25);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - GL_POINTS Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
