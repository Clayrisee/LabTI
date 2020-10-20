#include <iostream>
#include <gl/glut.h>
/*
Author : Haikal Ardikatama
Date   : 20/10/2020
Title  : Final Report 1
*/


void draw(){
	static int thick = 10;
	glColor3f(1.0f, 0.5f, 0.0f);//Orange
	glPointSize(10);
	
	//Define vertex sesuai posisi yang diinginkan
	glBegin(GL_POINTS);
	glVertex2i(0, 0);
	glVertex2i(0, 50);
	glVertex2i(0, -50);
	glVertex2i(50, 0);
	glVertex2i(-50, 0);
	glEnd();
	
	//Menggambar persegi yang paling besar
	glBegin(GL_LINES); 
	glVertex2i(-200, -200);
	glVertex2i(-200,  200);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(200, -200);
	glVertex2i(200,  200);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(-200, 200);
	glVertex2i(200,  200);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(-200, -200);
	glVertex2i(200,  -200);
	glEnd();
	
	//Menggambar garis-garis horizontal di dalam persegi
	glBegin(GL_LINES);
	glVertex2i(-200, 25);
	glVertex2i(200,  25);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(-200, -25);
	glVertex2i(200,  -25);
	glEnd();
	
	//Menggambar garis-garis vertical di dalam persegi
	glBegin(GL_LINES);
	glVertex2i(-25, -200);
	glVertex2i(-25,  200);
	glEnd();
	
	glBegin(GL_LINES);
	glVertex2i(25, -200);
	glVertex2i(25,  200);
	glEnd();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	draw();
	glutSwapBuffers();
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Final Report 1");
	glClearColor(1.0, 1.0, 1.0 ,0.0);
	gluOrtho2D(-320, 320, -240, 240);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
