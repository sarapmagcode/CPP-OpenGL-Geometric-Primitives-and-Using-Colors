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
	
	// glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_TRIANGLES);
	
	glColor3ub(255, 82, 32);
	glVertex2f(-.5f,-.5f);
	glColor3ub(255, 201, 32);
	glVertex2f(.5f,-.5f);
	glColor3ub(32, 255, 109);
	glVertex2f(0.0f,.5f);

	glEnd();	
	glFlush();
}