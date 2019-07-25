#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.0);
		glVertex2f(0.0, 3.0);
		glVertex2f(3.0, 3.0);
		glVertex2f(3.0, 0.0);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - GL_POLYGON Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
