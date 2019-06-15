#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(0.1, 0.1);
		glVertex2f(0.6, 0.1);
		glVertex2f(0.8, 0.3);
		glVertex2f(0.6, 0.6);
		glVertex2f(0.1, 0.6);
		glVertex2f(0.0, 0.3);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - GL_TRIANGLE_FAN Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
