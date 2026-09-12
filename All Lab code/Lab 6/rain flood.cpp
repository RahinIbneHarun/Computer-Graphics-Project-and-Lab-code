#include <windows.h> #include <GL/glut.h>
float waterY = -5.0f; float rainY[50];
void drawHouse() { glColor3ub(0, 0, 255); glBegin(GL_TRIANGLES); glVertex2f(20.0f, 20.0f); glVertex2f(60.0f, 20.0f); glVertex2f(40.0f, 40.0f);
glEnd();
glColor3ub(255, 0, 0); glBegin(GL_QUADS); glVertex2f(25.0f, 20.0f); glVertex2f(25.0f, 0.0f);glVertex2f(55.0f, 0.0f);
glVertex2f(55.0f, 20.0f);
glEnd();
glColor3ub(0, 0, 0);
glBegin(GL_QUADS);
glVertex2f(28.0f, 8.0f);
glVertex2f(28.0f, 4.0f);
glVertex2f(32.0f, 4.0f);
glVertex2f(32.0f, 8.0f);
glEnd();
glBegin(GL_QUADS);
glVertex2f(48.0f, 8.0f);
glVertex2f(48.0f, 4.0f);
glVertex2f(52.0f, 4.0f);
glVertex2f(52.0f, 8.0f);
glEnd();
glColor3ub(0, 0, 139);
glBegin(GL_QUADS);
glVertex2f(35.0f, 10.0f);
glVertex2f(35.0f, 0.0f);
glVertex2f(45.0f, 0.0f);
glVertex2f(45.0f, 10.0f);
glEnd();
}
void drawRainAndFlood() {
glColor3ub(173, 216, 230);
glBegin(GL_LINES);
for (int i = 0; i < 50; i++) {
float x = 10.0f + (i * 1.3f);
glVertex2f(x, rainY[i]);
glVertex2f(x, rainY[i] - 2.0f);
}
glEnd();
glColor3ub(30, 144, 255);
glBegin(GL_QUADS);
glVertex2f(-5.0f, waterY);
glVertex2f(85.0f, waterY);
glVertex2f(85.0f, -5.0f);
glVertex2f(-5.0f, -5.0f);glEnd();
}
void update(int value) {
for (int i = 0; i < 50; i++) {
rainY[i] -= 1.5f;
if (rainY[i] < -5.0f) {
rainY[i] = 45.0f;
}
}
if (waterY < 35.0f) {
waterY += 0.05f;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}
void display() {
glClearColor(0.1f, 0.1f, 0.15f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-5.0, 85.0, -5.0, 50.0);
drawHouse();
drawRainAndFlood();
glutSwapBuffers();
}
int main(int argc, char** argv) {
for (int i = 0; i < 50; i++) {
rainY[i] = (i % 5) * 10.0f;
}
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutCreateWindow("Rain and Flood");
glutFullScreen();glutDisplayFunc(display); glutTimerFunc(20, update, 0);