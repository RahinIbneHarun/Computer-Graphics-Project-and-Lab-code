#include <windows.h> #include <GL/glut.h> #include <math.h>
float angle1 = 0.0f; float _move = 0.0f;
void circle(float r, float g, float b, float radius, float xc, float yc) {
glMatrixMode(GL_MODELVIEW);
glBegin(GL_POINTS); for(int i = 0; i < 200; i++) {
glColor3ub(r, g, b); float pi = 3.1416f; float A = (i * 2 * pi) / 200; float rad = radius; float x = rad * cos(A); float y = rad * sin(A); glVertex2f(x + xc, y + yc);
} glEnd();}
void wheel1()
{
glPointSize(2);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(3.0f, 1.3f, 0);
glRotatef(angle1, 0.0f, 0.0f, 1.0f);
glTranslatef(-3.0f, -1.3f, 0);
circle(255, 0, 255, 0.6f, 3.0f, 1.3f);
glPopMatrix();
}
void wheel2()
{
glPointSize(2);
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(9.5f, 1.3f, 0);
glRotatef(angle1, 0.0f, 0.0f, 1.0f);
glTranslatef(-9.5f, -1.3f, 0);
circle(255, 0, 255, 0.6f, 9.5f, 1.3f);
glPopMatrix();
}
void box(float r, float g, float b)
{
glColor3ub(r, g, b);
glBegin(GL_POLYGON);
glVertex2f(1.4392461614864f, 1.3141431169452f);
glVertex2f(2.1939781783539f, 1.2360673910623f);
glVertex2f(2.5062810818853f, 2.0688751338127f);
glVertex2f(2.9226849532605f, 2.3551527953832f);
glVertex2f(3.5733160022842f, 2.3811780373441f);
glVertex2f(4.0000000000000f, 2.0000000000000f);
glVertex2f(4.2759975352299f, 1.3401683589061f);
glVertex2f(8.6482381846693f, 1.8866984400861f);
glVertex2f(9.1947682658493f, 2.3811780373441f);
glVertex2f(9.8193740729121f, 2.3291275534222f);
glVertex2f(10.3138536701701f, 1.9127236820470f);glVertex2f(10.4179546380139f, 1.3922188428280f);
glVertex2f(10.9384594772329f, 1.3401683589061f);
glVertex2f(11.0165352031157f, 3.2139857800945f);
glVertex2f(9.8974497987949f, 3.6564148934306f);
glVertex2f(9.1166925399664f, 5.2960051369704f);
glVertex2f(4.8485528583707f, 5.4261313467752f);
glVertex2f(3.6513917281671f, 3.8125663451963f);
glVertex2f(2.0898772105101f, 3.4482129577430f);
glVertex2f(1.5953976132521f, 2.9016828765631f);
glEnd();
}
void updateWheelRotation(int a)
{
angle1 += 2.0f;
glutPostRedisplay();
glutTimerFunc(20, updateWheelRotation, 0);
}
void car()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
box(255, 0, 0); // Red Car Body
wheel1();
wheel2();
glPopMatrix();
}
void updatCar(int a)
{
_move += 0.05f;
glutPostRedisplay();
glutTimerFunc(20, updatCar, 0);
if(_move > 15.0f)
{
_move = -15.0f;
}
}
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(-5.0, 20.0, -2.0, 10.0);
car(); glFlush();
}
int main(int argc, char** argv) { glutInit(&argc, argv); glutCreateWindow("Moving Car"); glutInitWindowSize(640, 480); glutDisplayFunc(display); glutTimerFunc(20, updateWheelRotation, 0); glutTimerFunc(20, updatCar, 0); glutMainLoop(); return 0;
}