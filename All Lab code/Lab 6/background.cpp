#include <windows.h> #include <GL/glut.h>
int colorState = 0;
void updateBackgroundColor(int a) {
if(colorState == 0) { colorState = 1;
} else { colorState = 0;
}
glutPostRedisplay(); glutTimerFunc(20, updateBackgroundColor, 0);
}
void display() { if(colorState == 0) { glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
} else { glClearColor(1.0f, 0.0f, 0.0f, 1.0f);
}
glClear(GL_COLOR_BUFFER_BIT); glutSwapBuffers();}
int main(int argc, char** argv) { glutInit(&argc, argv); glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(320, 320); glutCreateWindow("Red Green Blinking");
glutDisplayFunc(display); glutTimerFunc(20, updateBackgroundColor, 0);
glutMainLoop(); return 0;
}