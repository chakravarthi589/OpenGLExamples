#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glutWireCone(0.5,0.5,10,10);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - Solid Cone Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
