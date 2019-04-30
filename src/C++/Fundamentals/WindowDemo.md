### Description

**glutInit**
* Used to initialize the GLUT library.
* Process any command line arguments.
* argc - The ARGument Count - the number of arguments passed into the program from the command line.
* argv - The array of character pointers tp list all the arguments.


**glutInitDisplayMode**
* Sets the initial display mode.
* *GLUT_SINGLE* -  To select a single buffered window

**glutCreateWindow**
* Creates a top-level window.
* The name will be provided to the window system as the window's name. For Example, "OpenGL - Window Demo" will be the name of the window.

**glutDisplayFunc**
* Sets the display callback for the current window.

**glutMainLoop**
* Enters the GLUT event processing loop.
* This routine should be called at most once in a GLUT program. Once called, this routine will never return.

**glFlush**
* Forces execution of GL commands in finite time.
