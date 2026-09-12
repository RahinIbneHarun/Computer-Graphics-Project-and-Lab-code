Code- 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(0.5, 7.5, 0.0, 3.5); 
} 
 
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(60, 60, 60);     glLineWidth(2.0f); 
 
    glBegin(GL_LINES);         glVertex2f(1.0f, 1.5f);         glVertex2f(2.5f, 2.9f);         glVertex2f(1.7f, 1.6f);         glVertex2f(2.5f, 2.9f);         glVertex2f(2.5f, 2.9f);         glVertex2f(2.9f, 2.4f); 
 
 
        glVertex2f(2.6f, 2.2f);         glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(2.9f, 2.4f);         glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(2.9f, 1.9f);         glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(3.3f, 2.1f);         glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(3.9f, 2.6f);         glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(4.3f, 2.15f); 
        glVertex2f(3.8f, 3.1f); 
         
        glVertex2f(4.6f, 2.1f);         glVertex2f(3.8f, 3.1f); 
 
        glVertex2f(2.9f, 2.4f);         glVertex2f(2.6f, 2.2f); 
 
        glVertex2f(2.4f, 1.75f); 
        glVertex2f(2.9f, 1.9f); 
 
        glVertex2f(3.9f, 2.6f); 
        glVertex2f(4.3f, 2.15f); 
 
        glVertex2f(4.1f, 1.95f); 
        glVertex2f(3.7f, 1.5f); 
 
        glVertex2f(4.6f, 2.1f); 
        glVertex2f(4.8f, 1.95f); 
 
        glVertex2f(4.6f, 2.1f);         glVertex2f(5.1f, 1.85f); 
    glEnd(); 
 
    glBegin(GL_LINE_STRIP);         glVertex2f(1.4f, 1.35f);         glVertex2f(1.7f, 1.05f);         glVertex2f(2.4f, 1.0f);         glVertex2f(2.8f, 0.95f);         glVertex2f(3.0f, 1.0f);         glVertex2f(4.0f, 1.15f);         glVertex2f(5.1f, 1.2f);         glVertex2f(5.9f, 1.1f);         glVertex2f(6.7f, 1.0f); 
    glEnd(); 
 
    glBegin(GL_LINES);         glVertex2f(2.4f, 1.0f);         glVertex2f(2.4f, 1.3f); 
 
        glVertex2f(3.0f, 1.0f);         glVertex2f(3.0f, 1.6f); 
    glEnd(); 
 
    glBegin(GL_LINE_STRIP);         glVertex2f(3.5f, 0.7f);         glVertex2f(4.3f, 1.05f);         glVertex2f(4.9f, 1.15f);         glVertex2f(5.3f, 1.0f);         glVertex2f(6.1f, 0.7f);         glVertex2f(6.4f, 0.45f); 
    glEnd(); 
 
    glBegin(GL_LINES);         glVertex2f(4.3f, 1.05f);         glVertex2f(4.4f, 1.75f); 
    glEnd(); 
 
    glBegin(GL_LINES);         glVertex2f(4.9f, 1.5f);         glVertex2f(5.4f, 2.2f); 
 
        glVertex2f(5.4f, 2.2f);         glVertex2f(5.7f, 2.6f); 
 
        glVertex2f(5.6f, 1.8f);         glVertex2f(5.7f, 2.6f); 
 
        glVertex2f(6.4f, 1.5f);         glVertex2f(5.7f, 2.6f);         glVertex2f(6.9f, 1.3f);         glVertex2f(5.7f, 2.6f); 
 
        glVertex2f(5.3f, 1.0f);         glVertex2f(5.8f, 1.6f);     glEnd(); 
 
    glBegin(GL_LINE_LOOP);         glVertex2f(4.6f, 2.7f);         glVertex2f(4.7f, 3.1f);         glVertex2f(5.0f, 3.2f);         glVertex2f(5.2f, 3.2f);         glVertex2f(5.4f, 2.9f);         glVertex2f(5.4f, 2.6f);         glVertex2f(5.1f, 2.45f);         glVertex2f(4.8f, 2.5f);     glEnd(); 
 
    glColor3ub(0, 110, 220);     glPointSize(7.0f);     glBegin(GL_POINTS); 
        glVertex2f(1.0f, 1.5f);   glVertex2f(2.5f, 2.9f);   glVertex2f(2.9f, 2.4f);         glVertex2f(2.6f, 2.2f);   glVertex2f(3.8f, 3.1f);   glVertex2f(4.6f, 2.1f);         glVertex2f(5.1f, 1.85f);  glVertex2f(4.8f, 1.95f);  glVertex2f(3.9f, 2.6f);         glVertex2f(4.3f, 2.15f);  glVertex2f(4.2f, 1.7f);   glVertex2f(4.1f, 1.95f);         glVertex2f(3.7f, 1.5f);   glVertex2f(3.3f, 2.1f);   glVertex2f(2.4f, 1.75f);         glVertex2f(2.9f, 1.9f);   glVertex2f(1.7f, 1.6f); 
 
        glVertex2f(1.4f, 1.35f);  glVertex2f(1.7f, 1.05f);  glVertex2f(2.4f, 1.0f);         glVertex2f(2.4f, 1.3f);   glVertex2f(2.8f, 0.95f);  glVertex2f(3.0f, 1.0f);         glVertex2f(3.0f, 1.6f);   glVertex2f(4.0f, 1.15f);  glVertex2f(5.1f, 1.2f);         glVertex2f(5.9f, 1.1f);   glVertex2f(6.7f, 1.0f); 
 
        glVertex2f(3.5f, 0.7f);   glVertex2f(4.3f, 1.05f);  glVertex2f(4.4f, 1.75f);         glVertex2f(4.9f, 1.15f);  glVertex2f(5.3f, 1.0f);   glVertex2f(6.1f, 0.7f);         glVertex2f(6.4f, 0.45f); 
 
        glVertex2f(5.7f, 2.6f);   glVertex2f(5.4f, 2.2f);   glVertex2f(5.6f, 1.8f);         glVertex2f(4.9f, 1.5f);   glVertex2f(5.8f, 1.6f);   glVertex2f(6.4f, 1.5f);         glVertex2f(6.9f, 1.3f); 
 
        glVertex2f(4.6f, 2.7f);   glVertex2f(4.7f, 3.1f);   glVertex2f(5.0f, 3.2f);         glVertex2f(5.2f, 3.2f);   glVertex2f(5.4f, 2.9f);   glVertex2f(5.4f, 2.6f);         glVertex2f(5.1f, 2.45f);  glVertex2f(4.8f, 2.5f); 
 
    glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(900, 500); 
    glutCreateWindow("Vector Coordinate Plotter");     glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
 
