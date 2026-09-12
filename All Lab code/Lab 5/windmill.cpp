#include <windows.h> #include <GL/glut.h> #include <math.h>
float angle1 = 0.0f;
void brownBase() {glColor3ub(139, 69, 19);
glBegin(GL_POLYGON);
glVertex2f(4.0f, 1.0f);
glVertex2f(4.4f, 1.0f);
glVertex2f(4.2553009552447f, 5.8656007834291f);
glVertex2f(4.3656533998148f, 5.8700148812119f);
glVertex2f(4.3644908906319f, 6.2916504130960f);
glVertex2f(3.9649253261495f, 6.2916504130960f);
glVertex2f(3.9649253261495f, 5.8878341511191f);
glVertex2f(4.0371871835558f, 5.8580792686576f);
glEnd();
}
void fanGeometry()
{
glColor3ub(135, 206, 235);
glBegin(GL_POLYGON);
glVertex2f(4.0178412745076f, 6.1235646060616f);
glVertex2f(4.0587991173330f, 6.1920004525234f);
glVertex2f(4.1414953472427f, 6.2165858181723f);
glVertex2f(4.8196347872850f, 9.2938580979087f);
glVertex2f(4.9171179464190f, 9.2827171654363f);
glVertex2f(4.8096337293817f, 7.9069759713156f);
glVertex2f(4.6065810413661f, 6.7182254041477f);
glVertex2f(4.5139127847859f, 6.6489454576302f);
glVertex2f(4.3915746547393f, 6.5077860768072f);
glVertex2f(4.3115843389396f, 6.3313368507785f);
glVertex2f(4.2626652416928f, 6.1649863973089f);
glVertex2f(4.2729715017337f, 6.1031488370638f);
glVertex2f(4.2770940057500f, 6.0392500248106f);
glVertex2f(6.6057873226710f, 3.8594483128063f);
glVertex2f(6.5678943549866f, 3.8097137927206f);
glVertex2f(5.5167185976141f, 4.4982372354796f);
glVertex2f(4.4819262924374f, 5.3674627718280f);
glVertex2f(4.4610056411462f, 5.5720593204639f);
glVertex2f(4.3595319443165f, 5.7551099108233f);
glVertex2f(4.2282130425369f, 5.9421398618427f);
glVertex2f(4.1325820522810f, 5.9286864919893f);
glVertex2f(4.0559927809565f, 5.9699268688564f);
glVertex2f(1.0000000000000f, 5.4000000000000f);
glVertex2f(0.9708279060630f, 5.4959739674409f);glVertex2f(2.5000000000000f, 6.0000000000000f);
glVertex2f(3.4149974937961f, 6.2397302013700f);
glVertex2f(3.5863653552582f, 6.1469068282757f);
glVertex2f(3.8141881113986f, 6.1013219757111f);
glEnd();
}
void fan()
{
float pivotX = 4.1436267891321f;
float pivotY = 6.0776088118520f;
glMatrixMode(GL_MODELVIEW);
glPushMatrix();
glTranslatef(pivotX, pivotY, 0.0f);
glRotatef(angle1, 0.0f, 0.0f, 1.0f);
glTranslatef(-pivotX, -pivotY, 0.0f);
fanGeometry();
glPopMatrix();
}
void updateFanRotation(int a)
{
angle1 += 3.0f;
glutPostRedisplay();
glutTimerFunc(20, updateFanRotation, 0);
}
void display() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-1.0, 10.0, -1.0, 11.0);
brownBase();
fan();glFlush(); }
int main(int argc, char** argv) { glutInit(&argc, argv); glutCreateWindow("A windmill "); glutInitWindowSize(640, 640); glutDisplayFunc(display);
glutTimerFunc(20, updateFanRotation, 0);
glutMainLoop(); return 0;
}
