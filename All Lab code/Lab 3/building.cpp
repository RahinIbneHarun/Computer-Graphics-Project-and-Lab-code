#include <windows.h> #include <GL/glut.h>
void initGL() { glClearColor(1.0f, 1.0f, 1.0f, 1.0f); glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(0.0, 6.0, -0.5, 6.0);
}
void display() { glClear(GL_COLOR_BUFFER_BIT);glColor3ub(255, 255, 0);
glBegin(GL_QUADS);
glVertex2f(1.0f, 0.0f);
glVertex2f(5.0f, 0.0f);
glVertex2f(5.0f, 5.0f);
glVertex2f(1.0f, 5.0f);
glEnd();
glColor3ub(255, 0, 0);
glBegin(GL_QUADS);
glVertex2f(1.5f, 4.0f);
glVertex2f(2.0f, 4.0f);
glVertex2f(2.0f, 4.5f);
glVertex2f(1.5f, 4.5f);
glVertex2f(3.5f, 4.0f);
glVertex2f(4.0f, 4.0f);
glVertex2f(4.0f, 4.5f);
glVertex2f(3.5f, 4.5f);
glVertex2f(1.5f, 3.0f);
glVertex2f(2.0f, 3.0f);
glVertex2f(2.0f, 3.5f);
glVertex2f(1.5f, 3.5f);
glVertex2f(3.5f, 3.0f);
glVertex2f(4.0f, 3.0f);
glVertex2f(4.0f, 3.5f);
glVertex2f(3.5f, 3.5f);
glVertex2f(1.5f, 2.0f);
glVertex2f(2.0f, 2.0f);
glVertex2f(2.0f, 2.5f);
glVertex2f(1.5f, 2.5f);
glVertex2f(3.5f, 2.0f);
glVertex2f(4.0f, 2.0f);
glVertex2f(4.0f, 2.5f);
glVertex2f(3.5f, 2.5f);
glVertex2f(1.5f, 1.0f);
glVertex2f(2.0f, 1.0f);
glVertex2f(2.0f, 1.5f);glVertex2f(1.5f, 1.5f);
glVertex2f(3.5f, 1.0f); glVertex2f(4.0f, 1.0f); glVertex2f(4.0f, 1.5f); glVertex2f(3.5f, 1.5f);
glVertex2f(1.5f, 0.0f); glVertex2f(2.0f, 0.0f); glVertex2f(2.0f, 0.5f); glVertex2f(1.5f, 0.5f);
glEnd();
glColor3ub(0, 0, 255); glBegin(GL_QUADS); glVertex2f(3.5f, 0.0f); glVertex2f(5.0f, 0.0f); glVertex2f(5.0f, 0.655f); glVertex2f(3.4988788197535f, 0.6743596885991f);
glEnd(); glFlush();
}
int main(int argc, char** argv) { glutInit(&argc, argv); glutInitWindowSize(600, 600); glutCreateWindow(" building"); glutDisplayFunc(display); initGL(); glutMainLoop(); return 0;
}