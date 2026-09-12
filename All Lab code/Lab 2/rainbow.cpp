Code- 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(0.0, 11.0, 0.0, 9.0); 
} 
 
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
 
    glBegin(GL_QUADS); 
 
        glColor3ub(255, 0, 0);          glVertex2i(2, 1);         glVertex2i(9, 1); 

        glVertex2i(9, 2);         glVertex2i(2, 2); 
 
        glColor3ub(255, 255, 0);  
        glVertex2i(2, 2);         glVertex2i(9, 2);         glVertex2i(9, 3);         glVertex2i(2, 3); 
 
        glColor3ub(247, 148, 63);  
        glVertex2i(2, 3);         glVertex2i(9, 3);         glVertex2i(9, 4);         glVertex2i(2, 4); 
 
        glColor3ub(0, 176, 80);          glVertex2i(2, 4);         glVertex2i(9, 4);         glVertex2i(9, 5);         glVertex2i(2, 5); 
 
        glColor3ub(84, 172, 210);  
        glVertex2i(2, 5);         glVertex2i(9, 5);         glVertex2i(9, 6);         glVertex2i(2, 6); 
 
        glColor3ub(77, 121, 182);  
        glVertex2i(2, 6);         glVertex2i(9, 6);         glVertex2i(9, 7);         glVertex2i(2, 7); 
 
        glColor3ub(122, 104, 166);  
        glVertex2i(2, 7);         glVertex2i(9, 7);         glVertex2i(9, 8);         glVertex2i(2, 8); 
 
    glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(600, 500); 
    glutCreateWindow("7 Colored Bands - Custom Coordinates");     glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
 
