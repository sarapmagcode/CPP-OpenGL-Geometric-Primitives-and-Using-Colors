#include<GL/glut.h>
#include<iostream>

using namespace std;

void display();

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("OpenGL Setup Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	glBegin(GL_QUAD_STRIP);
	
	glVertex2f(-.5f, -.5f); // vertex 1
	glVertex2f(.5f,-.5f); // vertex 2
	glVertex2f(-.5f, 0.0f); // vertex 3
	glVertex2f(.5f, 0.0f); // vertex 4
	glVertex2f(-.7f, .80f); // vertex 5
	glVertex2f(.7f, 0.80f); // vertex 6
	
	glEnd();	
	glFlush();
}