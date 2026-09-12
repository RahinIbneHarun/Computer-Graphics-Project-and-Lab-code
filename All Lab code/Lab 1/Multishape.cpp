Output Screenshot (Full Screen)-   #include <windows.h> 
#include <GL/glut.h> 
 
void initGL() { 
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);     glMatrixMode(GL_PROJECTION);     glLoadIdentity();     glOrtho(0.0, 35.0, 0.0, 35.0, -1.0, 1.0); 

}  
void drawCustomAxes() {     glLineWidth(1.5f);     glBegin(GL_LINES);         glColor3f(0.0f, 0.0f, 0.0f);         glVertex2f(16.0f, 18.0f);         glVertex2f(16.0f, 2.0f);         glVertex2f(2.0f,  10.0f);         glVertex2f(30.0f, 10.0f);     glEnd(); 
}  
void redRectangle() { 
    glBegin(GL_POLYGON); 
        glColor3f(1.0f, 0.0f, 0.0f);         glVertex2f(8.0f,  16.0f);         glVertex2f(14.0f, 16.0f);         glVertex2f(14.0f, 12.0f);         glVertex2f(8.0f,  12.0f);     glEnd(); 
} 
 
void greenRectangle() { 
    glBegin(GL_POLYGON); 
        glColor3f(0.0f, 1.0f, 0.0f);         glVertex2f(20.0f, 16.0f);         glVertex2f(26.0f, 16.0f);         glVertex2f(26.0f, 14.0f);         glVertex2f(20.0f, 14.0f);     glEnd(); 
} 
 
void greenTriangle() { 
    glBegin(GL_TRIANGLES); 
        glColor3f(0.0f, 1.0f, 0.0f);         glVertex2f(26.0f, 17.0f);         glVertex2f(26.0f, 13.0f);         glVertex2f(29.0f, 15.0f);     glEnd(); 
} 
 

void violetTriangle() { 
    glBegin(GL_TRIANGLES); 
        glColor3f(1.0f, 0.0f, 1.0f);         glVertex2f(10.0f, 8.0f);         glVertex2f(6.0f,  6.0f);         glVertex2f(10.0f, 4.0f);     glEnd(); 
}  
void yellowTriangle() { 
    glBegin(GL_TRIANGLES); 
        glColor3f(1.0f, 1.0f, 0.0f);         glVertex2f(22.0f, 8.0f);         glVertex2f(24.0f, 4.0f);         glVertex2f(20.0f, 4.0f);     glEnd(); 
}  
void display() { 
    glClear(GL_COLOR_BUFFER_BIT);   
 
    drawCustomAxes();     redRectangle();     greenRectangle();     greenTriangle();     violetTriangle(); 
    yellowTriangle(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(650, 650);     glutInitWindowPosition(50, 50); 
    glutCreateWindow("OpenGL Layout"); 
     
    initGL(); 
    glutDisplayFunc(display);     glutMainLoop(); 
    return 0; 
} 
