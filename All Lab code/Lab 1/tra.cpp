Code- 
/*  
*	GL02Primitive.cpp: Vertex, Primitive and Color  
*	Draw Custom Red Polygon on a White Background  
*	Coordinates: A(4,4), B(8,4), D(9,2), C(3,2)  */  
#include <windows.h>  // For MS Windows  
#include <GL/glut.h>  // GLUT, includes glu.h and gl.h  
  
/* Initialize OpenGL Graphics */ void initGL() {  
    // Set "clearing" or background color to White and opaque (R=1.0, G=1.0, B=1.0)     glClearColor(1.0f, 1.0f, 1.0f, 1.0f);  
  
    // Set up custom 2D coordinate system (Projection Matrix)     glMatrixMode(GL_PROJECTION);     glLoadIdentity();  
 

  
    // glOrtho(left, right, bottom, top, near, far)  
    // The highest coordinate is 9, so the screen boundaries are set from 0.0 to 12.0     glOrtho(0.0, 12.0, 0.0, 12.0, -1.0, 1.0);  
}  
  
/* Handler for window-repaint event. Called when the window first appears and needs to be drawn. */ void display() {  
    // Clear the color buffer with the current clearing color (White)     glClear(GL_COLOR_BUFFER_BIT);  
  
    // Draw the polygon using sequential vertices: A -> B -> D -> C     glBegin(GL_POLYGON);  
        // Set shape color to Red (R=1.0, G=0.0, B=0.0)         glColor3f(1.0f, 0.0f, 0.0f);  
  
        glVertex2f(4.0f, 4.0f);      // Point A         glVertex2f(8.0f, 4.0f);      // Point B         glVertex2f(9.0f, 2.0f);      // Point D         glVertex2f(3.0f, 2.0f);      // Point C     glEnd();  
  
    glFlush();  // Render the geometric primitives immediately  
}  
  
/* Main function: GLUT runs as a console application starting at main() */ int main(int argc, char** argv) {  
    glutInit(&argc, argv);          // Initialize GLUT  
    glutInitWindowSize(500, 500);   // Set the window's initial width & height     glutInitWindowPosition(50, 50); // Position the window's initial top-left corner  
    glutCreateWindow("Red Polygon on White Background"); // Create window with given title  
  
    initGL();                       // Run our own OpenGL initialization  
    glutDisplayFunc(display);       // Register callback handler for window re-paint event     glutMainLoop();                 // Enter the infinite event-processing loop     return 0;  
}  
  
  
