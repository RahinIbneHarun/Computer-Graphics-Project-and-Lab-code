  
Code- 
 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);     glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(-0.5, 8.5, -1.5, 5.5); 
} 
 
void display() {     glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(0, 128, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 1.5f);         glVertex2f(7.1f, 1.5f);         glVertex2f(7.1f, 4.7f);         glVertex2f(2.0f, 4.7f); 
    glEnd(); 
 
    glColor3ub(255, 0, 0);     glBegin(GL_POLYGON); 
        glVertex2f(4.55f, 4.3f);         glVertex2f(4.35f, 4.25f);         glVertex2f(4.15f, 4.1f);         glVertex2f(4.0f, 3.85f);         glVertex2f(3.9f, 3.6f);         glVertex2f(3.8f, 3.35f);         glVertex2f(3.8f, 3.1f);         glVertex2f(3.8f, 2.85f);         glVertex2f(3.9f, 2.6f);         glVertex2f(4.0f, 2.35f);         glVertex2f(4.15f, 2.1f);         glVertex2f(4.35f, 1.95f);         glVertex2f(4.55f, 1.9f);         glVertex2f(4.75f, 1.95f);         glVertex2f(4.95f, 2.1f);         glVertex2f(5.1f, 2.35f);         glVertex2f(5.2f, 2.6f);         glVertex2f(5.3f, 2.85f);         glVertex2f(5.3f, 3.1f);         glVertex2f(5.3f, 3.35f);         glVertex2f(5.2f, 3.6f);         glVertex2f(5.1f, 3.85f);         glVertex2f(4.95f, 4.1f); 
 
        glVertex2f(4.75f, 4.25f);     glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("national flag"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
/////////////////////////////////////// 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity();     gluOrtho2D(1.0, 9.0, 1.0, 6.0); 
} 
 
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(0, 128, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 2.0f);         glVertex2f(8.0f, 2.0f);         glVertex2f(8.0f, 5.0f);         glVertex2f(2.0f, 5.0f);     glEnd(); 
 
    glColor3ub(255, 255, 0);     glBegin(GL_QUADS);         glVertex2f(4.0063655747132f, 3.5871440175154f);         glVertex2f(4.9803088322804f, 2.3945413618862f);         glVertex2f(5.9979930482127f, 3.6157624210048f);         glVertex2f(4.9914300218942f, 4.4124682840725f);     glEnd(); 
 
    glColor3ub(0, 0, 139);     glBegin(GL_POLYGON);         glVertex2f(5.0820772538737f, 3.9719518965811f);         glVertex2f(5.2686526934612f, 3.8108185623918f);         glVertex2f(5.3534597114556f, 3.6836080354003f);         glVertex2f(5.3364983078567f, 3.4800711922139f);         glVertex2f(5.1838456754669f, 3.2934957526263f);         glVertex2f(4.9294246214838f, 3.3019764544257f);         glVertex2f(4.776771989094f,  3.4800711922139f);         glVertex2f(4.7428491818963f, 3.658165930002f);         glVertex2f(4.8106947962917f, 3.8023378605924f);         glVertex2f(4.9294246214838f, 3.9295483875839f);     glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("Brazil"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
////////////////////////////////// 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);     glMatrixMode(GL_PROJECTION);     glLoadIdentity();     gluOrtho2D(1.0, 10.0, 1.0, 6.0); 
} 
 
void display() { 
    glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(135, 206, 235);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 4.0f); 
        glVertex2f(9.0f, 4.0f);         glVertex2f(9.0f, 5.0f);         glVertex2f(2.0f, 5.0f);     glEnd(); 
 
    glColor3ub(255, 255, 255);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 3.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(2.0f, 4.0f);     glEnd(); 
 
    glColor3ub(135, 206, 235);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 2.0f);         glVertex2f(9.0f, 2.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(2.0f, 3.0f);     glEnd(); 
 
    glColor3ub(255, 165, 0);     glBegin(GL_POLYGON);         glVertex2f(5.4799078999913f, 3.6946727366991f);         glVertex2f(5.5625079051956f, 3.7841560756705f);         glVertex2f(5.6864079130021f, 3.8048060769715f);         glVertex2f(5.7965412532745f, 3.7910394094375f);         glVertex2f(5.8929079260129f, 3.7153227380002f);         glVertex2f(5.9135579273139f, 3.5983060639607f);         glVertex2f(5.8791412584788f, 3.4675227223872f);         glVertex2f(5.7896579195075f, 3.3711560496489f);         glVertex2f(5.6175745753318f, 3.3642727158818f);         glVertex2f(5.4936745675253f, 3.4331060535521f);         glVertex2f(5.4386078973891f, 3.5638893951256f);     glEnd(); 
 
    glLineWidth(2.0f);     glBegin(GL_LINES);         glVertex2f(5.4799078999913f, 3.6946727366991f);         glVertex2f(5.1856776499695f, 3.9713550816979f); 
 
        glVertex2f(5.5625079051956f, 3.7841560756705f);         glVertex2f(5.3922776527183f, 4.0000000000000f);         glVertex2f(5.6864079130021f, 3.8048060769715f);         glVertex2f(5.7020276955074f, 4.0000000000000f); 
 
        glVertex2f(5.7965412532745f, 3.7910394094375f);         glVertex2f(5.9778943864608f, 4.0000000000000f); 
 
        glVertex2f(5.8929079260129f, 3.7153227380002f);         glVertex2f(6.1738000000000f, 4.0000000000000f); 
 
        glVertex2f(5.9135579273139f, 3.5983060639607f);         glVertex2f(6.2699527456041f, 3.6190712238615f); 
 
        glVertex2f(5.8791412584788f, 3.4675227223872f);         glVertex2f(6.1839944046758f, 3.1763295283552f); 
 
        glVertex2f(5.7896579195075f, 3.3711560496489f);         glVertex2f(5.9149000000000f, 3.0000000000000f); 
 
        glVertex2f(5.6175745753318f, 3.3642727158818f);         glVertex2f(5.5204000000000f, 3.0000000000000f); 
 
        glVertex2f(5.4936745675253f, 3.4331060535521f);         glVertex2f(5.1950000000000f, 3.1110000000000f); 
 
        glVertex2f(5.4386078973891f, 3.5638893951256f);         glVertex2f(5.0451276508619f, 3.5136128829396f);     glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("Argentina Flag"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
///////////////////////////// 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity();     gluOrtho2D(1.0, 10.0, 1.0, 6.0); 
} 
 
void display() {     glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(0, 0, 0);      glBegin(GL_QUADS); 
        glVertex2f(2.0f, 4.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(9.0f, 5.0f);         glVertex2f(2.0f, 5.0f);     glEnd(); 
 
    glColor3ub(255, 0, 0);  
    glBegin(GL_QUADS); 
        glVertex2f(2.0f, 3.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(2.0f, 4.0f);     glEnd(); 
 
    glColor3ub(255, 255, 0);      glBegin(GL_QUADS); 
        glVertex2f(2.0f, 2.0f);         glVertex2f(9.0f, 2.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(2.0f, 3.0f);     glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("Three Color Rectangles"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop();     return 0; 
} 
///////////////////////////////////// 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);     glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(1.0, 10.0, 1.0, 6.0); 
} 
 
void display() {     glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(0, 0, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 4.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(9.0f, 5.0f);         glVertex2f(2.0f, 5.0f); 
    glEnd(); 
 
    glColor3ub(255, 0, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 3.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(2.0f, 4.0f); 
    glEnd(); 
 
    glColor3ub(255, 255, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 2.0f);         glVertex2f(9.0f, 2.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(2.0f, 3.0f); 
    glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("Three Color Rectangles"); 
    glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
////////////////////// 
 
#include <windows.h> 
#include <GL/glut.h> 
 
void initGL() {     glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glMatrixMode(GL_PROJECTION);     glLoadIdentity(); 
    gluOrtho2D(1.0, 10.0, 1.0, 6.0); 
} 
 
void display() {     glClear(GL_COLOR_BUFFER_BIT); 
 
    glColor3ub(0, 128, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 4.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(9.0f, 5.0f);         glVertex2f(2.0f, 5.0f);     glEnd(); 
 
    glColor3ub(255, 255, 0);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 3.0f);         glVertex2f(9.0f, 3.0f);         glVertex2f(9.0f, 4.0f);         glVertex2f(2.0f, 4.0f);     glEnd(); 
 
    glColor3ub(0, 0, 255);     glBegin(GL_QUADS); 
        glVertex2f(2.0f, 2.0f);         glVertex2f(9.0f, 2.0f);         glVertex2f(9.0f, 3.0f); 
 

        glVertex2f(2.0f, 3.0f);     glEnd(); 
 
    glFlush(); 
} 
 
int main(int argc, char** argv) {     glutInit(&argc, argv);     glutInitWindowSize(700, 550);     glutCreateWindow("Georgea");     glutDisplayFunc(display); 
    initGL();     glutMainLoop(); 
    return 0; 
} 
