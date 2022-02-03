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
	
	glBegin(GL_QUADS);
	
	glVertex2f(-0.25f, 0.25f); // vertex 1
	glVertex2f(-0.5f, -0.25f); // vertex 2
	glVertex2f(0.5f, -0.25f); // vertex 3
	glVertex2f(0.25f, 0.25f); // vertex 4
	
	glVertex2f(.7f, 0.5f); // vertex 1
	glVertex2f(0.0f,0.5f); // vertex 2
	glVertex2f(0.0f, 0.7f); // vertex 3
	glVertex2f(0.7f, 0.7f); // vertex 4
	
	glEnd();	
	glFlush();
}