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
	
	glBegin(GL_TRIANGLES);
	
	glVertex2f(-.5f,-.5f);
	glVertex2f(.5f,-.5f);
	glVertex2f(0.0f,.5f);

	glEnd();	
	glFlush();
}