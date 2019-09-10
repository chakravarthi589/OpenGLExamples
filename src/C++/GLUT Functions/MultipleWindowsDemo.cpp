#include "include/GL/freeglut.h"

void Reshape(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200);
}


void SecondWindow_Scene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glColor3f(1.0, 0.0, 1.0);
	glBegin(GL_QUADS);
		glVertex3f(0.0f, 0.0f, -5.0f);
		glVertex3f(0.0f, 1.0f, -5.0f);
		glVertex3f(1.0f, 1.0f, -5.0f);
		glVertex3f(1.0f, 0.0f, -5.0f);
	glEnd();
	glutSwapBuffers();


}


void FirstWindow_Scene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
		glVertex3f(0.0f, 0.0f, -5.0f);
		glVertex3f(0.0f, 1.0f, -5.0f);
		glVertex3f(1.0f, 1.0f, -5.0f);
		glVertex3f(1.0f, 0.0f, -5.0f);
	glEnd();
	glutSwapBuffers();
}


int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glEnable(GL_DEPTH_TEST);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(500, 500);


	// First Window
	glutCreateWindow("OpenGL Multiple Windows Demo - 1st Window ");
	glutDisplayFunc(FirstWindow_Scene);
	glutReshapeFunc(Reshape);


	// Second  window
	glutCreateWindow("OpenGL Multiple Windows Demo - 2nd Window");
	glutPositionWindow(540, 40);
	glutReshapeFunc(Reshape);
	glutDisplayFunc(SecondWindow_Scene);
	glutMainLoop();

	return 0;

}
