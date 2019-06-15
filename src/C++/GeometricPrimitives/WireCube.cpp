#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 0.0, 0.0);
	glutWireCube(1.0);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(640, 640);
	glutCreateWindow("OpenGL - Wire Cube Demo");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
