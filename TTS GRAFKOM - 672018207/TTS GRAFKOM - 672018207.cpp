#include <iostream>
#include <GL/glut.h>

void merah(void) {
	// garis dalam kotak A
	glBegin(GL_LINES);
	glColor3f(1, 0, 0);
	glVertex2f(4, 1);
	glVertex2f(16, 1);
	glVertex2f(3, 2);
	glVertex2f(17, 2);
	glVertex2f(3, 3);
	glVertex2f(17, 3);
	glVertex2f(4, 4);
	glVertex2f(16, 4);
	glVertex2f(5, 5);
	glVertex2f(15, 5);
	glVertex2f(6, 6);
	glVertex2f(14, 6);
	glVertex2f(7, 7);
	glVertex2f(13, 7);
	glVertex2f(8, 8);
	glVertex2f(12, 8);

	// garis dalam kotak B
	glVertex2f(8, 12);
	glVertex2f(12, 12);
	glVertex2f(7, 13);
	glVertex2f(13, 13);
	glVertex2f(6, 14);
	glVertex2f(14, 14);
	glVertex2f(5, 15);
	glVertex2f(15, 15);
	glVertex2f(4, 16);
	glVertex2f(16, 16);
	glVertex2f(3, 17);
	glVertex2f(17, 17);
	glVertex2f(3, 18);
	glVertex2f(17, 18);
	glVertex2f(4, 19);
	glVertex2f(16, 19);
	glVertex2f(5, 20);
	glVertex2f(15, 20);
	glVertex2f(6, 21);
	glVertex2f(14, 21);
	glVertex2f(7, 22);
	glVertex2f(13, 22);
	glVertex2f(8, 23);
	glVertex2f(12, 23);

	// garis dalam kotak C
	glVertex2f(8, 27);
	glVertex2f(12, 27);
	glVertex2f(7, 28);
	glVertex2f(13, 28);
	glVertex2f(6, 29);
	glVertex2f(14, 29);
	glVertex2f(5, 30);
	glVertex2f(15, 30);
	glVertex2f(4, 31);
	glVertex2f(16, 31);
	glVertex2f(3, 32);
	glVertex2f(17, 32);
	glVertex2f(3, 33);
	glVertex2f(17, 33);
	glVertex2f(4, 34);
	glVertex2f(16, 34);
	glVertex2f(5, 35);
	glVertex2f(15, 35);
	glVertex2f(6, 36);
	glVertex2f(14, 36);
	glVertex2f(7, 37);
	glVertex2f(13, 37);
	glVertex2f(8, 38);
	glVertex2f(12, 38);

	// garis dalam kotak D
	glVertex2f(8, 42);
	glVertex2f(12, 42);
	glVertex2f(7, 43);
	glVertex2f(13, 43);
	glVertex2f(6, 44);
	glVertex2f(14, 44);
	glVertex2f(5, 45);
	glVertex2f(15, 45);
	glVertex2f(4, 46);
	glVertex2f(16, 46);
	glVertex2f(3, 47);
	glVertex2f(17, 47);
	glVertex2f(3, 48);
	glVertex2f(17, 48);
	glVertex2f(4, 49);
	glVertex2f(16, 49);

	// garis dalam kotak E
	glColor3f(1, 0, 0);
	glVertex2f(19, 1);
	glVertex2f(31, 1);
	glVertex2f(18, 2);
	glVertex2f(32, 2);
	glVertex2f(18, 3);
	glVertex2f(32, 3);
	glVertex2f(19, 4);
	glVertex2f(31, 4);
	glVertex2f(20, 5);
	glVertex2f(30, 5);
	glVertex2f(21, 6);
	glVertex2f(29, 6);
	glVertex2f(22, 7);
	glVertex2f(28, 7);
	glVertex2f(23, 8);
	glVertex2f(27, 8);

	// garis dalam kotak F
	glVertex2f(23, 12);
	glVertex2f(27, 12);
	glVertex2f(22, 13);
	glVertex2f(28, 13);
	glVertex2f(21, 14);
	glVertex2f(29, 14);
	glVertex2f(20, 15);
	glVertex2f(30, 15);
	glVertex2f(19, 16);
	glVertex2f(31, 16);
	glVertex2f(18, 17);
	glVertex2f(32, 17);
	glVertex2f(18, 18);
	glVertex2f(32, 18);
	glVertex2f(19, 19);
	glVertex2f(31, 19);
	glVertex2f(20, 20);
	glVertex2f(30, 20);
	glVertex2f(21, 21);
	glVertex2f(29, 21);
	glVertex2f(22, 22);
	glVertex2f(28, 22);
	glVertex2f(27, 23);
	glVertex2f(23, 23);

	// garis dalam kotak G
	glVertex2f(23, 27);
	glVertex2f(27, 27);
	glVertex2f(22, 28);
	glVertex2f(28, 28);
	glVertex2f(21, 29);
	glVertex2f(29, 29);
	glVertex2f(20, 30);
	glVertex2f(30, 30);
	glVertex2f(19, 31);
	glVertex2f(31, 31);
	glVertex2f(18, 32);
	glVertex2f(32, 32);
	glVertex2f(18, 33);
	glVertex2f(32, 33);
	glVertex2f(19, 34);
	glVertex2f(31, 34);
	glVertex2f(20, 35);
	glVertex2f(30, 35);
	glVertex2f(21, 36);
	glVertex2f(29, 36);
	glVertex2f(22, 37);
	glVertex2f(28, 37);
	glVertex2f(23, 38);
	glVertex2f(27, 38);

	// garis dalam kotak H
	glVertex2f(23, 42);
	glVertex2f(27, 42);
	glVertex2f(22, 43);
	glVertex2f(28, 43);
	glVertex2f(21, 44);
	glVertex2f(29, 44);
	glVertex2f(20, 45);
	glVertex2f(30, 45);
	glVertex2f(19, 46);
	glVertex2f(31, 46);
	glVertex2f(18, 47);
	glVertex2f(32, 47);
	glVertex2f(18, 48);
	glVertex2f(32, 48);
	glVertex2f(19, 49);
	glVertex2f(31, 49);

	// garis dalam kotak I
	glColor3f(1, 0, 0);
	glVertex2f(34, 1);
	glVertex2f(46, 1);
	glVertex2f(33, 2);
	glVertex2f(47, 2);
	glVertex2f(33, 3);
	glVertex2f(47, 3);
	glVertex2f(34, 4);
	glVertex2f(46, 4);
	glVertex2f(35, 5);
	glVertex2f(45, 5);
	glVertex2f(36, 6);
	glVertex2f(44, 6);
	glVertex2f(37, 7);
	glVertex2f(43, 7);
	glVertex2f(38, 8);
	glVertex2f(42, 8);

	// garis dalam kotak J
	glVertex2f(38, 12);
	glVertex2f(42, 12);
	glVertex2f(37, 13);
	glVertex2f(43, 13);
	glVertex2f(36, 14);
	glVertex2f(44, 14);
	glVertex2f(35, 15);
	glVertex2f(45, 15);
	glVertex2f(34, 16);
	glVertex2f(46, 16);
	glVertex2f(33, 17);
	glVertex2f(47, 17);
	glVertex2f(33, 18);
	glVertex2f(47, 18);
	glVertex2f(34, 19);
	glVertex2f(46, 19);
	glVertex2f(35, 20);
	glVertex2f(45, 20);
	glVertex2f(36, 21);
	glVertex2f(44, 21);
	glVertex2f(37, 22);
	glVertex2f(43, 22);
	glVertex2f(38, 23);
	glVertex2f(42, 23);

	// garis dalam kotak K
	glVertex2f(38, 27);
	glVertex2f(42, 27);
	glVertex2f(37, 28);
	glVertex2f(43, 28);
	glVertex2f(36, 29);
	glVertex2f(44, 29);
	glVertex2f(35, 30);
	glVertex2f(45, 30);
	glVertex2f(34, 31);
	glVertex2f(46, 31);
	glVertex2f(33, 32);
	glVertex2f(47, 32);
	glVertex2f(33, 33);
	glVertex2f(47, 33);
	glVertex2f(34, 34);
	glVertex2f(46, 34);
	glVertex2f(35, 35);
	glVertex2f(45, 35);
	glVertex2f(36, 36);
	glVertex2f(44, 36);
	glVertex2f(37, 37);
	glVertex2f(43, 37);
	glVertex2f(38, 38);
	glVertex2f(42, 38);

	// garis dalam kotak L
	glVertex2f(38, 42);
	glVertex2f(42, 42);
	glVertex2f(37, 43);
	glVertex2f(43, 43);
	glVertex2f(36, 44);
	glVertex2f(44, 44);
	glVertex2f(35, 45);
	glVertex2f(45, 45);
	glVertex2f(34, 46);
	glVertex2f(46, 46);
	glVertex2f(33, 47);
	glVertex2f(47, 47);
	glVertex2f(33, 48);
	glVertex2f(47, 48);
	glVertex2f(34, 49);
	glVertex2f(46, 49);

	// garis tegak kotak A
	glVertex2f(1, 4);
	glVertex2f(1, 16);
	glVertex2f(2, 3);
	glVertex2f(2, 17);
	glVertex2f(3, 3);
	glVertex2f(3, 17);
	glVertex2f(4, 4);
	glVertex2f(4, 16);
	glVertex2f(5, 5);
	glVertex2f(5, 15);
	glVertex2f(6, 6);
	glVertex2f(6, 14);
	glVertex2f(7, 7);
	glVertex2f(7, 13);
	glVertex2f(8, 8);
	glVertex2f(8, 12);


	// garis tegak kotak B
	glVertex2f(12, 8);
	glVertex2f(12, 12);
	glVertex2f(13, 7);
	glVertex2f(13, 13);
	glVertex2f(14, 6);
	glVertex2f(14, 14);
	glVertex2f(15, 5);
	glVertex2f(15, 15);
	glVertex2f(16, 4);
	glVertex2f(16, 16);
	glVertex2f(17, 3);
	glVertex2f(17, 17);
	glVertex2f(18, 3);
	glVertex2f(18, 17);
	glVertex2f(19, 4);
	glVertex2f(19, 16);
	glVertex2f(20, 5);
	glVertex2f(20, 15);
	glVertex2f(21, 6);
	glVertex2f(21, 14);
	glVertex2f(22, 7);
	glVertex2f(22, 13);
	glVertex2f(23, 8);
	glVertex2f(23, 12);

	// garis tegak kotak C
	glVertex2f(27, 8);
	glVertex2f(27, 12);
	glVertex2f(28, 7);
	glVertex2f(28, 13);
	glVertex2f(29, 6);
	glVertex2f(29, 14);
	glVertex2f(30, 5);
	glVertex2f(30, 15);
	glVertex2f(31, 4);
	glVertex2f(31, 16);
	glVertex2f(32, 3);
	glVertex2f(32, 17);
	glVertex2f(33, 3);
	glVertex2f(33, 17);
	glVertex2f(34, 4);
	glVertex2f(34, 16);
	glVertex2f(35, 5);
	glVertex2f(35, 15);
	glVertex2f(36, 6);
	glVertex2f(36, 14);
	glVertex2f(37, 7);
	glVertex2f(37, 13);
	glVertex2f(38, 8);
	glVertex2f(38, 12);

	// garis tegak kotak D
	glVertex2f(42, 8);
	glVertex2f(42, 12);
	glVertex2f(43, 7);
	glVertex2f(43, 13);
	glVertex2f(44, 6);
	glVertex2f(44, 14);
	glVertex2f(45, 5);
	glVertex2f(45, 15);
	glVertex2f(46, 4);
	glVertex2f(46, 16);
	glVertex2f(47, 3);
	glVertex2f(47, 17);
	glVertex2f(48, 3);
	glVertex2f(48, 17);
	glVertex2f(49, 4);
	glVertex2f(49, 16);

	// garis tegak kotak E
	glColor3f(1, 0, 0);
	glVertex2f(1, 19);
	glVertex2f(1, 31);
	glVertex2f(2, 18);
	glVertex2f(2, 32);
	glVertex2f(3, 18);
	glVertex2f(3, 32);
	glVertex2f(4, 19);
	glVertex2f(4, 31);
	glVertex2f(5, 20);
	glVertex2f(5, 30);
	glVertex2f(6, 21);
	glVertex2f(6, 29);
	glVertex2f(7, 22);
	glVertex2f(7, 28);
	glVertex2f(8, 23);
	glVertex2f(8, 27);

	// garis tegak kotak F
	glVertex2f(12, 23);
	glVertex2f(12, 27);
	glVertex2f(13, 22);
	glVertex2f(13, 28);
	glVertex2f(14, 21);
	glVertex2f(14, 29);
	glVertex2f(15, 20);
	glVertex2f(15, 30);
	glVertex2f(16, 19);
	glVertex2f(16, 31);
	glVertex2f(17, 18);
	glVertex2f(17, 32);
	glVertex2f(18, 18);
	glVertex2f(18, 32);
	glVertex2f(19, 19);
	glVertex2f(19, 31);
	glVertex2f(20, 20);
	glVertex2f(20, 30);
	glVertex2f(21, 21);
	glVertex2f(21, 29);
	glVertex2f(22, 22);
	glVertex2f(22, 28);
	glVertex2f(23, 27);
	glVertex2f(23, 23);

	// garis tegak kotak G
	glVertex2f(27, 23);
	glVertex2f(27, 27);
	glVertex2f(28, 22);
	glVertex2f(28, 28);
	glVertex2f(29, 21);
	glVertex2f(29, 29);
	glVertex2f(30, 20);
	glVertex2f(30, 30);
	glVertex2f(31, 19);
	glVertex2f(31, 31);
	glVertex2f(32, 18);
	glVertex2f(32, 32);
	glVertex2f(33, 18);
	glVertex2f(33, 32);
	glVertex2f(34, 19);
	glVertex2f(34, 31);
	glVertex2f(35, 20);
	glVertex2f(35, 30);
	glVertex2f(36, 21);
	glVertex2f(36, 29);
	glVertex2f(37, 22);
	glVertex2f(37, 28);
	glVertex2f(38, 23);
	glVertex2f(38, 27);

	// garis tegak kotak H
	glVertex2f(42, 23);
	glVertex2f(42, 27);
	glVertex2f(43, 22);
	glVertex2f(43, 28);
	glVertex2f(44, 21);
	glVertex2f(44, 29);
	glVertex2f(45, 20);
	glVertex2f(45, 30);
	glVertex2f(46, 19);
	glVertex2f(46, 31);
	glVertex2f(47, 18);
	glVertex2f(47, 32);
	glVertex2f(48, 18);
	glVertex2f(48, 32);
	glVertex2f(49, 19);
	glVertex2f(49, 31);

	// garis tegak kotak I
	glColor3f(1, 0, 0);
	glVertex2f(1, 34);
	glVertex2f(1, 46);
	glVertex2f(2, 33);
	glVertex2f(2, 47);
	glVertex2f(3, 33);
	glVertex2f(3, 47);
	glVertex2f(4, 34);
	glVertex2f(4, 46);
	glVertex2f(5, 35);
	glVertex2f(5, 45);
	glVertex2f(6, 36);
	glVertex2f(6, 44);
	glVertex2f(7, 37);
	glVertex2f(7, 43);
	glVertex2f(8, 38);
	glVertex2f(8, 42);

	// garis tegak kotak J
	glVertex2f(12, 38);
	glVertex2f(12, 42);
	glVertex2f(13, 37);
	glVertex2f(13, 43);
	glVertex2f(14, 36);
	glVertex2f(14, 44);
	glVertex2f(15, 35);
	glVertex2f(15, 45);
	glVertex2f(16, 34);
	glVertex2f(16, 46);
	glVertex2f(17, 33);
	glVertex2f(17, 47);
	glVertex2f(18, 33);
	glVertex2f(18, 47);
	glVertex2f(19, 34);
	glVertex2f(19, 46);
	glVertex2f(20, 35);
	glVertex2f(20, 45);
	glVertex2f(21, 36);
	glVertex2f(21, 44);
	glVertex2f(22, 37);
	glVertex2f(22, 43);
	glVertex2f(23, 38);
	glVertex2f(23, 42);

	// garis tegak kotak K
	glVertex2f(27, 38);
	glVertex2f(27, 42);
	glVertex2f(28, 37);
	glVertex2f(28, 43);
	glVertex2f(29, 36);
	glVertex2f(29, 44);
	glVertex2f(30, 35);
	glVertex2f(30, 45);
	glVertex2f(31, 34);
	glVertex2f(31, 46);
	glVertex2f(32, 33);
	glVertex2f(32, 47);
	glVertex2f(33, 33);
	glVertex2f(33, 47);
	glVertex2f(34, 34);
	glVertex2f(34, 46);
	glVertex2f(35, 35);
	glVertex2f(35, 45);
	glVertex2f(36, 36);
	glVertex2f(36, 44);
	glVertex2f(37, 37);
	glVertex2f(37, 43);
	glVertex2f(38, 38);
	glVertex2f(38, 42);

	// garis tegak kotak L
	glVertex2f(42, 38);
	glVertex2f(42, 42);
	glVertex2f(43, 37);
	glVertex2f(43, 43);
	glVertex2f(44, 36);
	glVertex2f(44, 44);
	glVertex2f(45, 35);
	glVertex2f(45, 45);
	glVertex2f(46, 34);
	glVertex2f(46, 46);
	glVertex2f(47, 33);
	glVertex2f(47, 47);
	glVertex2f(48, 33);
	glVertex2f(48, 47);
	glVertex2f(49, 34);
	glVertex2f(49, 46);
	glEnd();
	glFlush();
}

void kotak(void) {
	glBegin(GL_POLYGON);
	glColor3f(1, 0, 0);
	glVertex2f(9, 9);
	glVertex2f(11, 9); //ATAS
	glVertex2f(9, 11);
	glVertex2f(11, 11); //BAWAH
	glEnd();
	glFlush();

}

void kotakMini(float y1, float y2) {
	glColor3f(1.0, 0.0, 0.0);

	float k = 0.0;

	for (int j = 0; j < 4; ++j, k += 15.0) {
		glBegin(GL_QUADS);
		glVertex2f(1.5 + k, y1);
		glVertex2f(1.5 + k, y2);
		glVertex2f(3.5 + k, y2);
		glVertex2f(3.5 + k, y1);
		glEnd();
	}
}

void utama(void) {
	glClearColor(1, 1, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(4);
	glBegin(GL_LINES);
	glColor3f(0, 0, 0);
	//garis tengah kanan
	glVertex2f(0, 0);
	glVertex2f(50, 50);
	//garis 1 bawah kanan
	glVertex2f(0, 15);
	glVertex2f(35, 50);
	//garis 2 bawah kanan
	glVertex2f(0, 30);
	glVertex2f(20, 50);
	//garis 3 bawah kanan
	glVertex2f(0, 45);
	glVertex2f(5, 50);
	//garis 1 atas kanan
	glVertex2f(15, 0);
	glVertex2f(50, 35);
	//garis 2 atas kanan
	glVertex2f(30, 0);
	glVertex2f(50, 20);
	//garis 3 atas kanan
	glVertex2f(45, 0);
	glVertex2f(50, 5);
	//garis tengah kiri
	glVertex2f(50, 0);
	glVertex2f(0, 50);
	//garis 1 bawah kiri
	glVertex2f(50, 15);
	glVertex2f(15, 50);
	//garis 2 bawah kiri
	glVertex2f(50, 30);
	glVertex2f(30, 50);
	//garis 3 bawah kiri
	glVertex2f(50, 45);
	glVertex2f(45, 50);
	//garis 1 atas kiri
	glVertex2f(35, 0);
	glVertex2f(0, 35);
	//garis 2 atas kiri
	glVertex2f(20, 0);
	glVertex2f(0, 20);
	// garis 3 atas kiri
	glVertex2f(5, 0);
	glVertex2f(0, 5);

	merah();
	kotakMini(1.5, 3.5);
	kotakMini(16.5, 18.5);
	kotakMini(31.5, 33.5);
	kotakMini(46.5, 48.5);
	glEnd();
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(600, 150);
	glutInitWindowSize(500, 500);
	glutCreateWindow(argv[0]);
	gluOrtho2D(0, 50, 50, 0);
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glutDisplayFunc(utama);
	glutMainLoop();

	return(0);
}