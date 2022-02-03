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
	
	glBegin(GL_POLYGON);
	
	glVertex2f(0.1,0.1);
	glVertex2f(0.6,0.1);
	glVertex2f(0.7,0.3);
	glVertex2f(0.6,0.6);
	glVertex2f(0.1,0.6);
	glVertex2f(0.0,0.3);
	
	glEnd();	
	glFlush();
}