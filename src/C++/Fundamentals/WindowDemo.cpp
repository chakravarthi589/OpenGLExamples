#include <stdio.h>
#include "include/GL/freeglut.h"

void display()
{
 glFlush();
}

int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE);
 glutCreateWindow("OpenGL - Window Demo");
 glutDisplayFunc(display);
 glutMainLoop();
 return 0;
}
