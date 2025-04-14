#include <glut.h>;
#include <windows.h>;

void init(){
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glColor3f(1,0,0);
}
void display01(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POLYGON);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(-0.5,-0.5);
	glEnd();

	glFlush();
}
void display02(){
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(10);
	glBegin(GL_POINTS);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(-0.5,-0.5);
	glEnd();

	glFlush();
}
void display03(){
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(5.0f);
	glBegin(GL_LINE_LOOP);
		glVertex2f(-0.5,0.5);
		glVertex2f(0.5,0.5);
		glVertex2f(0.5,-0.5);
		glVertex2f(-0.5,-0.5);
	glEnd();

	glFlush();
}

int main(int C, char** V){
	glutInit(&C, V);
	glutInitWindowSize(600,500);
	glutInitWindowPosition(250, 150);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutCreateWindow("Basic OpenGL program");
	glutDisplayFunc(display03);
	init();
	glutMainLoop();
}

