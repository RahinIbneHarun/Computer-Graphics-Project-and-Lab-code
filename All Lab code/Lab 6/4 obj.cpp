#include <windows.h> #include <GL/glut.h>
float moveX = 0.0f; float moveY = 0.0f; int state = 0; // 0 = Right, 1 = Up, 2 = Left, 3 = Down
void object1_yellow() {
glMatrixMode(GL_MODELVIEW); glPushMatrix(); glTranslatef(moveX, moveY, 0.0f); glColor3ub(255, 255, 0); glBegin(GL_POLYGON); glVertex2f(2.0f, 3.0f); glVertex2f(3.0f, 4.0f); glVertex2f(4.0f, 3.0f); glEnd(); glPopMatrix();
}
void object2_green() {
glMatrixMode(GL_MODELVIEW); glPushMatrix(); glTranslatef(moveX, moveY, 0.0f); glColor3ub(0, 255, 0);glBegin(GL_POLYGON);
glVertex2f(2.0f, 2.0f);
glVertex2f(2.0f, 1.0f);
glVertex2f(4.0f, 1.0f);
glVertex2f(4.0f, 2.0f);
glEnd();
glPopMatrix();
}
void object3_red()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(moveX, moveY, 0.0f);
glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(7.0f, 4.0f);
glVertex2f(6.0f, 3.0f);
glVertex2f(7.0f, 2.0f);
glVertex2f(8.0f, 3.0f);
glEnd();
glPopMatrix();
}
void object4_blue()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(moveX, moveY, 0.0f);
glColor3ub(0, 0, 255);
glBegin(GL_POLYGON);
glVertex2f(7.0f, 1.0f);
glVertex2f(7.0f, 0.0f);
glVertex2f(8.0f, 0.0f);
glVertex2f(8.0f, 1.0f);
glEnd();
glPopMatrix();
}
void updateMovement(int a)
{
float step = 0.05f;
float limit = 2.0f;if (state == 0) { // Move Right
moveX += step;
if (moveX >= limit) state = 1;
}
else if (state == 1) { // Move Up
moveY += step;
if (moveY >= limit) state = 2;
}
else if (state == 2) { // Move Left
moveX -= step;
if (moveX <= 0.0f) state = 3;
}
else if (state == 3) { // Move Down
moveY -= step;
if (moveY <= 0.0f) state = 0;
}
glutPostRedisplay();
glutTimerFunc(20, updateMovement, 0);
}
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 11.0, -1.0, 8.0);
object1_yellow();
object2_green();
object3_red();
object4_blue();
glutSwapBuffers();
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutCreateWindow("All 4 Objects Up-Down-Left-Right Motion Loop");
glutDisplayFunc(display);
glutTimerFunc(20, updateMovement, 0);glutMainLoop(); return 0;
} 