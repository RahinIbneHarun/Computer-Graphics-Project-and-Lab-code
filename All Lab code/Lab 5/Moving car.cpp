#include <windows.h> // for MS Windows #include <GL/glut.h> // GLUT, include glu.h and gl.h #include <math.h>
float angle1 = 0.0f; float _move = 0.0f; // Fixed at 0.0f (no horizontal movement)
// Updated circle function with internal spokes to clearly visualize rotation void circle(float r, float g, float b, float radius, float xc, float yc) {
glMatrixMode(GL_MODELVIEW);
// Draw the circle outer boundary glBegin(GL_POINTS); for(int i = 0; i < 200; i++) {
glColor3ub(r, g, b);float pi = 3.1416f;
float A = (i * 2 * pi) / 200;
float rad = radius;
float x = rad * cos(A);
float y = rad * sin(A);
glVertex2f(x + xc, y + yc);
}
glEnd();
// Spokes add kora hoyeche jate rotation visual sposto hoy
glColor3ub(255, 255, 255);
glBegin(GL_LINES);
// Horizontal spoke
glVertex2f(xc - radius, yc);
glVertex2f(xc + radius, yc);
// Vertical spoke
glVertex2f(xc, yc - radius);
glVertex2f(xc, yc + radius);
glEnd();
}
// Wheel 1 (Front/Left area)
void wheel1()
{
glPointSize(2);
glLineWidth(2);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(3.0f, 1.3f, 0);
glRotatef(angle1, 0.0f, 0.0f, 1.0f); // Wheel angle update
glTranslatef(-3.0f, -1.3f, 0);
circle(255, 0, 255, 0.6f, 3.0f, 1.3f);
glPopMatrix();
}
// Wheel 2 (Rear/Right area)
void wheel2()
{
glPointSize(2);
glLineWidth(2);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(9.5f, 1.3f, 0);
glRotatef(angle1, 0.0f, 0.0f, 1.0f); // Wheel angle updateglTranslatef(-9.5f, -1.3f, 0);
circle(255, 0, 255, 0.6f, 9.5f, 1.3f);
glPopMatrix();
}
// Custom Polygon Body
void box(float r, float g, float b)
{
glColor3ub(r, g, b);
glBegin(GL_POLYGON);
glVertex2f(1.4392461614864f, 1.3141431169452f); // C
glVertex2f(2.1939781783539f, 1.2360673910623f); // D
glVertex2f(2.5062810818853f, 2.0688751338127f); // E
glVertex2f(2.9226849532605f, 2.3551527953832f); // F
glVertex2f(3.5733160022842f, 2.3811780373441f); // G
glVertex2f(4.0000000000000f, 2.0000000000000f); // H
glVertex2f(4.2759975352299f, 1.3401683589061f); // I
glVertex2f(8.6482381846693f, 1.8866984400861f); // K
glVertex2f(9.1947682658493f, 2.3811780373441f); // L
glVertex2f(9.8193740729121f, 2.3291275534222f); // M
glVertex2f(10.3138536701701f, 1.9127236820470f); // N
glVertex2f(10.4179546380139f, 1.3922188428280f); // O
glVertex2f(10.9384594772329f, 1.3401683589061f); // P
glVertex2f(11.0165352031157f, 3.2139857800945f); // Q
glVertex2f(9.8974497987949f, 3.6564148934306f); // R
glVertex2f(9.1166925399664f, 5.2960051369704f); // S
glVertex2f(4.8485528583707f, 5.4261313467752f); // T
glVertex2f(3.6513917281671f, 3.8125663451963f); // U
glVertex2f(2.0898772105101f, 3.4482129577430f); // V
glVertex2f(1.5953976132521f, 2.9016828765631f); // W
glEnd();
}
void updateWheelRotation(int a)
{
angle1 += 4.0f; // Rotation speed
glutPostRedisplay();
glutTimerFunc(20, updateWheelRotation, 0);
}
void car()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();glTranslatef(_move, 0.0f, 0.0f); // _move remains 0.0f box(255, 0, 0); // Red Car Body wheel1(); wheel2(); glPopMatrix();
}
void updatCar(int a) {
// Car moves linear position set to STOP // _move += 0.05f; glutPostRedisplay(); glutTimerFunc(20, updatCar, 0);
}
void display() { glClearColor(0.0f, 0.0f, 0.0f, 1.0f); glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(-2.0, 14.0, -1.0, 8.0);
car(); glFlush();
}
int main(int argc, char** argv) { glutInit(&argc, argv); glutCreateWindow("Moving Car"); glutInitWindowSize(640, 480); glutDisplayFunc(display);
glutTimerFunc(20, updateWheelRotation, 0); glutTimerFunc(20, updatCar, 0);
glutMainLoop(); return 0;
}
