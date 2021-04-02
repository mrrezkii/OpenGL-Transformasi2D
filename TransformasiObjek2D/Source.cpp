#include <glut.h>
void garisblekang() {
	glColor3f(1, 1, 1);
	for (int i = -400; i <= 400; i += 50)//ukuran 50 pixel
	{
		glBegin(GL_LINES);//garis vertikal
		glVertex2f(i, -300);
		glVertex2f(i, 300);
		glEnd();
	}
	for (int j = -300; j <= 300; j += 50)//ukuran 50 pixel
	{
		glBegin(GL_LINES);
		glVertex2f(-400, j);
		glVertex2f(400, j);
		glEnd();
	}
	glColor3f(0, 1, 1);
	glLineWidth(5);
	glBegin(GL_LINES);
	glVertex2f(0, 300);
	glVertex2f(0, -300);
	glVertex2f(-400, 0);
	glVertex2f(400, 0);
	glEnd();
}



void segitiga(void) {
	glBegin(GL_TRIANGLES);
	glVertex2f(100., 100.);
	glVertex2f(100., 200.0);
	glVertex2f(200.0, 200.0);
	glVertex2f(200.0, 100.);
	glEnd();
}

void segiempat(void) {
	glBegin(GL_QUADS);
	glVertex2f(100., 100.);
	glVertex2f(100., 200.0);
	glVertex2f(200.0, 200.0);
	glVertex2f(200.0, 100.);
	glEnd();
}

void render(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();  //	Awalan
	glColor3f(1, 1, 0);
	glTranslatef(-200., 200., 0.);
	glRotatef(-90,0,0,1);
	segitiga();
	glPopMatrix(); // Pembatas

	glPushMatrix();  //	Awalan
	glColor3f(1, 1, 0); 
	glTranslatef(-300., 300., 0.);
	glRotatef(-90, 0, 0, 1);
	segitiga();
	glPopMatrix(); // Pembatas

	glPushMatrix(); // Awalan
	glColor3f(1, 0, 1); 
	glTranslatef(-100., -100., 0.);
	segitiga();
	glPopMatrix(); // Pembatas

	glPushMatrix(); // Awalan
	glColor3f(1, 0, 1);
	glScalef(2, 2, 0);
	glTranslatef(-150., -200., 0.);
	segitiga();
	glPopMatrix(); // Pembatas

	glPushMatrix(); // Awalan
	glColor3f(1, 0, 1);
	glScalef(2, 2, 0);
	glRotatef(-180., 0, 0, 1);
	glTranslatef(-150., -100., 0.);
	segitiga();
	glPopMatrix(); // Pembatas

	/* glPushMatrix(); // Awalan
	glColor3f(1, 0, 1);
	glScalef(2, 2, 0);
	glTranslatef(-150., -200., 0.);
	segiempat();
	glPopMatrix(); // Pembatas
	*/

	
	segitiga();
	garisblekang();
	glFlush();
}

void main(int argc, char**argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowPosition(300, 100);
	glutInitWindowSize(640, 480);
	glutCreateWindow(" Alfin Rezki");
	gluOrtho2D(-400., 400., -300., 300.);
	glutDisplayFunc(render);
	glutMainLoop();
}