#include <gl/glut.h>

void userdraw(){
 static int tick = 0;
 glColor3f(0, 0, 0);
 glPointSize(3);
 
 glBegin(GL_POINTS);
 glVertex2i(50, 0);
 glVertex2i(-50, 0);
 glVertex2i(0, 50);
 glVertex2i(0, -50);
 glEnd();
 
 glBegin(GL_LINES);
 glVertex2i(-50, -50);
 glVertex2i(50, 50);
 glEnd();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);
	userdraw();
	glutSwapBuffers();
}

int main(int argc, char **argv){
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100,100);
	glutCreateWindow("Membuat titik and garis");
	glClearColor(1.0, 1.0, 1.0, 0.0);
	gluOrtho2D(-320, 320, -240, 240);
	glutIdleFunc(display);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

