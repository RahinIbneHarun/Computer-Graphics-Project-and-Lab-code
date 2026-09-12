#include <windows.h> #include <GL/glut.h>
// Movement vectors and direction states for each object [0=Yellow, 1=Green, 2=Red, 3=Blue] float moveX[4] = {0.0f, 0.0f, 0.0f, 0.0f}; float moveY[4] = {0.0f, 0.0f, 0.0f, 0.0f}; int state[4] = {0, 0, 0, 0}; // 0 = Right, 1 = Up, 2 = Left, 3 = Down
void stepObjectMovement(int index) { float step = 0.2f; float limit = 2.0f;
if (state[index] == 0) { // Move Right moveX[index] += step; if (moveX[index] >= limit) state[index] = 1;
}
else if (state[index] == 1) { // Move Up moveY[index] += step; if (moveY[index] >= limit) state[index] = 2;
}
else if (state[index] == 2) { // Move Left moveX[index] -= step; if (moveX[index] <= 0.0f) state[index] = 3;
} else if (state[index] == 3) { // Move DownmoveY[index] -= step;
if (moveY[index] <= 0.0f) state[index] = 0;
}
}
void object1_yellow()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(moveX[0], moveY[0], 0.0f);
glColor3ub(255, 255, 0);
glBegin(GL_POLYGON);
glVertex2f(2.0f, 3.0f);
glVertex2f(3.0f, 4.0f);
glVertex2f(4.0f, 3.0f);
glEnd();
glPopMatrix();
}
void object2_green()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(moveX[1], moveY[1], 0.0f);
glColor3ub(0, 255, 0);
glBegin(GL_POLYGON);
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
glTranslatef(moveX[2], moveY[2], 0.0f);
glColor3ub(255, 0, 0);
glBegin(GL_POLYGON);
glVertex2f(7.0f, 4.0f);
glVertex2f(6.0f, 3.0f);
glVertex2f(7.0f, 2.0f);glVertex2f(8.0f, 3.0f);
glEnd();
glPopMatrix();
}
void object4_blue()
{
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(moveX[3], moveY[3], 0.0f);
glColor3ub(0, 0, 255);
glBegin(GL_POLYGON);
glVertex2f(7.0f, 1.0f);
glVertex2f(7.0f, 0.0f);
glVertex2f(8.0f, 0.0f);
glVertex2f(8.0f, 1.0f);
glEnd();
glPopMatrix();
}
void handleKeypress(unsigned char key, int x, int y) {
switch (key) {
case 'y':
case 'Y':
stepObjectMovement(0); // Move Yellow
break;
case 'g':
case 'G':
stepObjectMovement(1); // Move Green
break;
case 'r':
case 'R':
stepObjectMovement(2); // Move Red
break;
case 'b':
case 'B':
stepObjectMovement(3); // Move Blue
break;
}
glutPostRedisplay();
}
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION); glLoadIdentity(); gluOrtho2D(-1.0, 11.0, -2.0, 8.0);
object1_yellow(); object2_green(); object3_red(); object4_blue();
glutSwapBuffers(); }
int main(int argc, char** argv) { glutInit(&argc, argv); glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); glutInitWindowSize(640, 480); glutCreateWindow("Individual Key Triggered 4-Way Motion");
glutDisplayFunc(display); glutKeyboardFunc(handleKeypress);
glutMainLoop(); return 0;