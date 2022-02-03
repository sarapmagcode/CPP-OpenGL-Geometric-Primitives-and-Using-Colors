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
	
	glEnable(GL_LINE_STIPPLE);
	glLineWidth(2.0f);
	glLineStipple(4, 0xAAAA);
	glBegin(GL_LINE_LOOP);
	
	glVertex2f(-0.5, -0.5);
	glVertex2f(-0.5, 0.5);
	glVertex2f(0.5, 0.5);
	glVertex2f(0.5, -0.5);

	glEnd();
	glFlush();
	glDisable(GL_LINE_STIPPLE);
}