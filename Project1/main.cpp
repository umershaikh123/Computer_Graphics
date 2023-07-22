#include <iostream>
#include <string>
#include <fstream>
#include <GL/glut.h>
#include <cmath>

using namespace std;


void drawTriangle() {
    // Set the background color to #5F5F5F (medium gray)
    glColor3f(0.937f, 0.937f, 0.937f);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, -0.5f);
    glVertex2f(0.5f, -0.5f);
    glVertex2f(0.0f, 0.5f);
    glEnd();
}

void drawRectangle() {
    // Set the background color to #5F5F5F (medium gray)
    glColor3f(0.937f, 0.937f, 0.937f);
    glBegin(GL_QUADS);
    glVertex2f(-0.6f, -0.2f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.2f, 0.2f);
    glVertex2f(-0.6f, 0.2f);
    glEnd();
}

void drawCircle() {
    // Set the background color to #5F5F5F (medium gray)
    glColor3f(0.937f, 0.937f, 0.937f);
    const float radius = 0.3f;
    const int numSegments = 100;
    const float M_PI = 3.14159265358979323846;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(0.6f, 0.0f); // Center of the circle
    for (int i = 0; i <= numSegments; i++) {
        float angle = 2.0f * M_PI * i / numSegments;
        float x = 0.6f + radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
}


void myDisplay(void)
{

    glClearColor(37.0f / 255.0f, 37.0f / 255.0f, 37.0f / 255.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    
     drawTriangle();
    // drawRectangle();
   //  drawCircle();

    glFlush();
}

int screenWidth = 1280;
int screenHeight = 900;

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