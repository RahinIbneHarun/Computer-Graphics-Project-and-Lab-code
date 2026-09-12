Code: 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(0.5f, 0.5f, 0.5f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(0.0, 10.0, 0.0, 10.0); 
} 
 
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
 
    glBegin(GL_QUADS); 
 
        glColor3ub(0, 0, 0);         glVertex2i(7, 1);         glVertex2i(6, 1);         glVertex2i(6, 2);         glVertex2i(7, 2); 
 
        glColor3ub(255, 255, 255);         glVertex2i(6, 1); 

        glVertex2i(5, 1);         glVertex2i(5, 2);         glVertex2i(6, 2); 
 
        glColor3ub(0, 0, 0);         glVertex2i(5, 1);         glVertex2i(4, 1);         glVertex2i(4, 2);         glVertex2i(5, 2); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(4, 1);         glVertex2i(3, 1);         glVertex2i(3, 2);         glVertex2i(4, 2); 
 
        glColor3ub(0, 0, 0);         glVertex2i(4, 2);         glVertex2i(3, 2);         glVertex2i(3, 3);         glVertex2i(4, 3); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(4, 2);         glVertex2i(4, 3);         glVertex2i(5, 3);         glVertex2i(5, 2); 
 
        glColor3ub(0, 0, 0);         glVertex2i(5, 2);         glVertex2i(5, 3);         glVertex2i(6, 3);         glVertex2i(6, 2); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(6, 2);         glVertex2i(6, 3);         glVertex2i(7, 3);         glVertex2i(7, 2); 
 
        glColor3ub(0, 0, 0);         glVertex2i(7, 3);         glVertex2i(6, 3);         glVertex2i(6, 4); 

        glVertex2i(7, 4); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(6, 3);         glVertex2i(5, 3);         glVertex2i(5, 4);         glVertex2i(6, 4); 
 
        glColor3ub(0, 0, 0);         glVertex2i(5, 3);         glVertex2i(4, 3);         glVertex2i(4, 4);         glVertex2i(5, 4); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(4, 3);         glVertex2i(3, 3);         glVertex2i(3, 4);         glVertex2i(4, 4); 
 
        glColor3ub(0, 0, 0);         glVertex2i(3, 4);         glVertex2i(3, 5);         glVertex2i(4, 5);         glVertex2i(4, 4); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(4, 4);         glVertex2i(4, 5);         glVertex2i(5, 5);         glVertex2i(5, 4); 
 
        glColor3ub(0, 0, 0);         glVertex2i(5, 5);         glVertex2i(5, 4);         glVertex2i(6, 4);         glVertex2i(6, 5); 
 
        glColor3ub(255, 255, 255); 
        glVertex2i(6, 4);         glVertex2i(6, 5);         glVertex2i(7, 5);         glVertex2i(7, 4); 
 
    glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(500, 500); 
    glutCreateWindow("Checkerboard Blocks"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
