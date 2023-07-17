#include <iostream>
#include <string>
#include <fstream>
#include <GL/glut.h>

using namespace std;

void myDisplay(void)
{

    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(3.9f, 3.9f, 3.9f ); // background color
    glColor3f(12, 12, 13);       // Foreground
    glFlush();
}

int screenWidth = 640;
int screenHeight = 480;

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(screenWidth, screenHeight);
    glutInitWindowPosition(30, 30);
    glutCreateWindow("Lab 1");

    glutDisplayFunc(myDisplay);

    glutMainLoop();

    return 0;
}