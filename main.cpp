#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <time.h>
#include <cmath>
# define PI 3.14159265358979323846
#include<cstdio>
#include <iostream>

using namespace std;

GLfloat position = 0.0f;
GLfloat speed = 0.1f;
GLfloat j=0.0f;


void update(int value) {
    if(position <-1.0 )
        position = .7f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(500, update, 0);
}void update2(int value) {
    if(position >1.0 )
        position = .7f;
    position -= speed;
	glutPostRedisplay();
	glutTimerFunc(500, update, 0);
}
void sun()
{
    glPushMatrix();
glTranslatef(0.0f,position, 0.0f);
     glColor3ub(255,128,0); // Set background color to black and opaque
	//glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	int i;

	GLfloat x=-.7f; GLfloat y=.7f; GLfloat radius =.2f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();
	glPopMatrix();
}
void cloud()
{
    glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
     glColor3ub(220,220,220);
	int i,i0,i1,i2,i3,i4;

	GLfloat x= -1.0f; GLfloat y=.7f; GLfloat radius =.15f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

	glEnd();

	GLfloat x0= -.9f; GLfloat y0=.7f; GLfloat radius0 =.15f;
	int triangleAmount0 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi0 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x0, y0); // center of circle
		for(i0 = 0; i0 <= triangleAmount0;i0++) {
			glVertex2f(
		            x0 + (radius0 * cos(i0 *  twicePi0 / triangleAmount0)),
			    y0 + (radius0 * sin(i0 * twicePi0 / triangleAmount0))
			);
		}

	glEnd();

GLfloat x1= -.6f; GLfloat y1=.9f; GLfloat radius1 =.15f;
	int triangleAmount1 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x1, y1); // center of circle
		for(i1 = 0; i1 <= triangleAmount1;i1++) {
			glVertex2f(
		            x1 + (radius1 * cos(i1 *  twicePi1 / triangleAmount1)),
			    y1 + (radius1 * sin(i1 * twicePi1 / triangleAmount1))
			);
		}

	glEnd();

	GLfloat x2= -.5f; GLfloat y2=.9f; GLfloat radius2 =.15f;
	int triangleAmount2 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x2, y2); // center of circle
		for(i2 = 0; i2 <= triangleAmount2;i2++) {
			glVertex2f(
		            x2 + (radius2 * cos(i2 *  twicePi2 / triangleAmount2)),
			    y2 + (radius2 * sin(i2 * twicePi2 / triangleAmount2))
			);
		}

	glEnd();

	GLfloat x3= .3f; GLfloat y3=1.4f; GLfloat radius3 =.15f;
	int triangleAmount3 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x3, y3); // center of circle
		for(i3 = 0; i3 <= triangleAmount3;i3++) {
			glVertex2f(
		            x3 + (radius3 * cos(i3 *  twicePi3 / triangleAmount3)),
			    y3 + (radius3 * sin(i3 * twicePi3 / triangleAmount3))
			);
		}

	glEnd();

	GLfloat x4= .2f; GLfloat y4=1.4f; GLfloat radius4 =.15f;
	int triangleAmount4 = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi4 = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x4, y4); // center of circle
		for(i4 = 0; i4 <= triangleAmount4;i4++) {
			glVertex2f(
		            x4 + (radius4 * cos(i4 *  twicePi4 / triangleAmount4)),
			    y4 + (radius4 * sin(i4 * twicePi4 / triangleAmount4))
			);
		}

	glEnd();

	glPopMatrix();
}

void c2()
{  glPushMatrix();
        glTranslatef(0.5,0.2,0.0);
        glRotatef(j,0.0,0.0,-1.0);
       // glTranslatef(0.0,-0.0,0.0);
    glColor3ub(230,230,255);
    GLfloat x1=.0f; GLfloat y1=.0f; GLfloat radius1 =.65f;
	int i1;
	int lineAmount1 = 500;

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi1 = 2.0f * PI;

    GLfloat thikc2=10.0;
    glLineWidth(thikc2);
	glBegin(GL_LINE_LOOP);
		for(i1 = 0; i1 <= lineAmount1;i1++) {
			glVertex2f(
			    x1 + (radius1 * cos(i1 *  twicePi1 / lineAmount1)),
			    y1 + (radius1* sin(i1 * twicePi1 / lineAmount1))
			);
		}
	glEnd();
	 j+=2.0f;
glPopMatrix();


       //glPopMatrix();
}
void c1()
{     glPushMatrix();
        glTranslatef(0.5,0.2,0.0);
        glRotatef(j,0.0,0.0,-1.0);
       // glTranslatef(0.0,-0.0,0.0);
    glColor3ub(230,230,255);
    GLfloat x2=.0f; GLfloat y2=.0f; GLfloat radius2 =.55f;
	int i2;
	int lineAmount2 = 100;

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi2 = 2.0f * PI;

	glBegin(GL_LINE_LOOP);
		for(i2 = 0; i2 <= lineAmount2;i2++) {
			glVertex2f(
			    x2 + (radius2 * cos(i2 *  twicePi2 / lineAmount2)),
			    y2 + (radius2* sin(i2 * twicePi2 / lineAmount2))
			);
		}
	glEnd();
	 j+=2.0f;

       glPopMatrix();

       glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.5,.16);
        glVertex2f(0.53,0.16);
        glVertex2f(0.66,-0.6);
        glVertex2f(0.63,-0.6);
        glEnd();

      glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.5,.16);
        glVertex2f(0.47,0.16);
        glVertex2f(0.33,-0.6);
        glVertex2f(0.36,-0.6);
        glEnd();

        glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.33,-0.6);
        glVertex2f(0.33,-0.55);
        glVertex2f(0.66,-0.55);
        glVertex2f(0.66,-0.6);
        glEnd();

       }
void c0()
{     glPushMatrix();
        glTranslatef(0.5,0.2,0.0);
        glRotatef(j,0.0,0.0,-1.0);
       // glTranslatef(0.0,-0.0,0.0);
    glColor3ub(255,255,255);
    GLfloat x3=.0f; GLfloat y3=.0f; GLfloat radius3 =.049f;
	int i3;
	int lineAmount3 = 100;

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi3 = 2.0f * PI;
    GLfloat thikc0=20.0;
    glLineWidth(thikc0);
	glBegin(GL_LINE_LOOP);
		for(i3 = 0; i3 <= lineAmount3;i3++) {
			glVertex2f(
			    x3 + (radius3 * cos(i3 *  twicePi3 / lineAmount3)),
			    y3 + (radius3* sin(i3 * twicePi3 / lineAmount3))
			);
		}
	glEnd();
	 j+=2.0f;

       glPopMatrix();

       }

       void line(){
        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.6,.735);
        glVertex2f(0.7,0.82);
        glEnd();


        glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_QUADS);
        glColor3f(230,230,255);
        glVertex2f(0.4,0.835);
        glVertex2f(0.4,0.935);
        glVertex2f(0.6,0.935);
        glVertex2f(0.6,0.835);
        glEnd();
        j+=2.0f;
        glPopMatrix();

         glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.7,0.82);
        glVertex2f(0.78,0.68);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.4,.735);
        glVertex2f(0.5,0.835);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.5,0.835);
        glVertex2f(0.6,.735);
        glEnd();

       glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.94,.68);
        glVertex2f(1.04,0.68);
        glVertex2f(1.18,0.50);
        glVertex2f(1.08,0.50);
        glEnd();
        j+=2.0f;
        glPopMatrix();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.2,.67);
        glVertex2f(0.3,0.82);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.3,0.82);
        glVertex2f(0.4,.735);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.03,.5);
        glVertex2f(0.08,0.7);
        glEnd();

        glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.8,-.37);
        glVertex2f(0.82,-.49);
        glVertex2f(0.99,-.38);
        glVertex2f(0.95,-.27);
        glEnd();
        j+=2.0f;
        glPopMatrix();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.08,0.7);
        glVertex2f(0.2,0.67);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-0.08,0.52);
        glVertex2f(-0.05,0.28);
        glEnd();


         glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.08,-.28);
        glVertex2f(0.0,-.38);
        glVertex2f(0.18,-.50);
        glVertex2f(0.24,-.39);
        glEnd();
        j+=2.0f;
        glPopMatrix();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-0.08,0.52);
        glVertex2f(0.03,.5);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-0.05,0.28);
        glVertex2f(-0.14,0.1);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-0.14,0.1);
        glVertex2f(0.0,0.0);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.0,0.0);
        glVertex2f(-0.03,-0.18);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(-0.03,-0.18);
        glVertex2f(0.2,-0.26);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.2,-0.26);
        glVertex2f(0.28,-0.42);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.28,-0.42);
        glVertex2f(0.49,-0.35);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.49,-0.35);
        glVertex2f(0.6,-0.45);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.6,-0.45);
        glVertex2f(0.75,-0.28);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.75,-0.28);
        glVertex2f(0.98,-0.25);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(0.98,-0.25);
        glVertex2f(1.01,0.0);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(1.01,0.0);
        glVertex2f(1.15,0.2);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
        glVertex2f(1.15,0.2);
         glVertex2f(1.02,0.39);
        glEnd();

        glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_QUADS);
        glColor3f(255,255,255);
        glVertex2f(0.03,0.65);
        glVertex2f(-0.01,0.75);
        glVertex2f(-0.14,.55);
        glVertex2f(-.08,.48);
        glEnd();
        j+=2.0f;
        glPopMatrix();




        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(1.02,0.39);
         glVertex2f(0.98,.65);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.78,0.68);
         glVertex2f(0.98,.65);
        glEnd();
//bigger lines
        glPushMatrix();
        glTranslatef(0.5,0.19,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(-0.5,-.19,0.0);
        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.45,.18);
         glVertex2f(0.05,.52);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.48,.24);
         glVertex2f(0.28,.69);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.5,.24);
         glVertex2f(0.5,.74);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.52,.24);
         glVertex2f(0.7,.72);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.55,.2);
         glVertex2f(1.0,.45);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.52,.16);
         glVertex2f(1.03,0.08);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.50,.16);
         glVertex2f(0.8,-0.25);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.5,.15);
         glVertex2f(0.5,-0.35);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.48,.16);
         glVertex2f(0.2,-0.28);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(255,255,255);
         glVertex2f(0.46,.16);
         glVertex2f(-0.05,0.09);
        glEnd();
         j+=2.0f;
        glPopMatrix();
}


void clock1(){


    glColor3ub(255,250,205);
GLfloat x=-0.4f; GLfloat y=.9f; GLfloat radius =.1f;
	int i;

	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();



        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.8);
        glVertex2f(-0.4,0.83);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.3,0.9);
        glVertex2f(-0.33,0.9);
        glEnd();


        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,1.0);
        glVertex2f(-0.4,.97);
        glEnd();

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.5,.9);
        glVertex2f(-.47,.9);
        glEnd();


        //sec
        glPushMatrix();
        glTranslatef(-0.4,0.9,0.0);
        glRotatef(j,0.0,0.0,-1.0);
        glTranslatef(0.4,-0.9,0.0);
        GLfloat thik=2.0;
        glLineWidth(thik);
        glBegin(GL_LINES);
        glColor3f(0.6,0.6,0.6);
        glVertex2f(-0.4,0.9);
        glVertex2f(-.43,0.82);
        glEnd();
        j+=.03f;

       glPopMatrix();



        //min

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.9);
        glVertex2f(-.35,.84);
        glEnd();

        //hour

        glBegin(GL_LINES);
        glColor3f(0,0,0);
        glVertex2f(-0.4,0.9);
        glVertex2f(-0.4,.95);
        glEnd();


}


void CarBody()
{
glPushMatrix();
glTranslatef(position,0.0f,0.0f);
    glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-1.1,-0.8);
	glVertex2f(-0.5,-0.8);
	glVertex2f(-0.5,-0.3);
	glVertex2f(-1.1,-0.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-0.55,-0.75);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-1.15,-0.25);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255,0,0);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-0.58,-0.3);
	glVertex2f(-0.5,-0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(255,0,0);
	glVertex2f(-1.15,-0.75);
	glVertex2f(-1.0,-0.75);
	glVertex2f(-1.12,-0.8);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(220,20,60);
	glVertex2f(-1.15,-0.55);
	glVertex2f(-0.55,-0.55);
	glVertex2f(-0.55,-0.25);
	glVertex2f(-1.15,-0.25);
	glEnd();

    //car window left
	glBegin(GL_QUADS);
	glColor3ub(0,255,0);
	glVertex2f(-1.0,-0.35);
	glVertex2f(-1.0,-0.50);
	glVertex2f(-0.85,-0.50);
	glVertex2f(-0.85,-0.35);
	glEnd();

    //car window right
	glBegin(GL_QUADS);
	glColor3ub(0,255,0);
	glVertex2f(-0.75,-0.35);
	glVertex2f(-0.75,-0.50);
	glVertex2f(-0.60,-0.50);
	glVertex2f(-0.60,-0.35);
	glEnd();


glPopMatrix();

}
void CarWheel()
{
	glColor3ub(0,0,0);
	GLfloat x=-1.0f; GLfloat y=-0.85f; GLfloat radius = 0.1f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
    glEnd();

    glColor3ub(0,0,0);
    x=-0.6f;y=-0.85f;radius = 0.1f;
    triangleAmount = 20;
    twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}

    glEnd();
   glPopMatrix();



}

void round()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-.40f; GLfloat y=1.66f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp1()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-0.675f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp2()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-0.975f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp3()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.275f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}
void roundp4()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.575f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();
}

void roundp5()
{glColor3ub(255,215,0);
	int i;
	GLfloat x=-1.875f; GLfloat y=0.75f; GLfloat radius =.02f;
	int triangleAmount = 20; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);}
   glEnd();

}

//...................................meseum code......................//

void CarBody1()
{

glPushMatrix();
glTranslatef(-position,-0.3f,0.0f);
glScalef(3,2.5,0);
glBegin(GL_QUADS);
glColor3ub(255,0,0);
glVertex2f(0,-.1);
glVertex2f(0,-.4);
glVertex2f(.4,-.4);
glVertex2f(.4,-.1);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(0,-.24);
glVertex2f(0,-.28);
glVertex2f(.4,-.28);
glVertex2f(.4,-.24);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.05,-.12);
glVertex2f(.05,-.23);
glVertex2f(.1,-.23);
glVertex2f(.1,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.14,-.12);
glVertex2f(.14,-.23);
glVertex2f(.19,-.23);
glVertex2f(.19,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.24,-.12);
glVertex2f(.24,-.23);
glVertex2f(.29,-.23);
glVertex2f(.29,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.34,-.12);
glVertex2f(.34,-.23);
glVertex2f(.39,-.23);
glVertex2f(.39,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.05,-.29);
glVertex2f(.05,-.38);
glVertex2f(.1,-.38);
glVertex2f(.1,-.29);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.14,-.29);
glVertex2f(.14,-.38);
glVertex2f(.19,-.38);
glVertex2f(.19,-.29);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.24,-.29);
glVertex2f(.24,-.38);
glVertex2f(.29,-.38);
glVertex2f(.29,-.29);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.34,-.29);
glVertex2f(.34,-.38);
glVertex2f(.39,-.38);
glVertex2f(.39,-.29);
glEnd();

int i;

GLfloat x=.3f; GLfloat y=-.42f; GLfloat radius =.06f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);

}
glEnd();




x=.1f;  y=-.42f;  radius =.06f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();
glPopMatrix();


}

//................................................EXTRA......................................................................


float translate_x = 0.0;
float translate_y = 0.0;
float translate_z = 0.0;
static GLfloat spin = 0.0;
float spin_x=1.0;
float spin_y=0.0;
float spin_z=0.0;
int day=1;
bool rain=false;
bool carv=false;
bool planev=false;
bool top=false;
int flag=0;
bool help=false;


void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1024, 0.0, 768.0);
}


void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}

void drawstring(float x,float y,float z,char *string)
{
	char *c;
	glRasterPos3f(x,y,z);

	for(c=string;*c!='\0';c++)
	{
		glutBitmapCharacter(currentfont,*c);
	}
}

//Dynamic Windows Function
void Windows(int x,int y,int z)
{
    glColor3ub(255,255,255);
    glBegin(GL_QUADS);
    glVertex3i(x,y,z);
    glVertex3i(x+60,y,z);
    glVertex3i(x+60,y+70,z);
    glVertex3i(x,y+70,z);
    glEnd();

    //Black
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3i(x+7,y+7,z);
    glVertex3i(x+27,y+7,z);
    glVertex3i(x+27,y+33,z);
    glVertex3i(x+7,y+33,z);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3i(x+33,y+7,z);
    glVertex3i(x+54,y+7,z);
    glVertex3i(x+54,y+33,z);
    glVertex3i(x+33,y+33,z);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3i(x+7,y+40,z);
    glVertex3i(x+27,y+40,z);
    glVertex3i(x+27,y+63,z);
    glVertex3i(x+7,y+63,z);
    glEnd();

    glBegin(GL_QUADS);
    glVertex3i(x+33,y+40,z);
    glVertex3i(x+54,y+40,z);
    glVertex3i(x+54,y+63,z);
    glVertex3i(x+33,y+63,z);
    glEnd();
}


void dayMode()
{

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)



//ground
glBegin(GL_QUADS);
glColor3ub(26, 255, 26);
glVertex2f(-1,0.9);
glVertex2f(-1,-1);
glVertex2f(1,-1.0);
glVertex2f(1,.9);
glEnd();

//tree
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-1,-0.9);
glVertex2f(-0.9,-0.8);
glVertex2f(-0.8,-0.9);
glEnd();



//road
glBegin(GL_QUADS);
glColor3ub(64,64,64);
glVertex2f(1,-.4);
glVertex2f(-1,-.4);
glVertex2f(-1,-.9);
glVertex2f(1,-.9);
glEnd();




//roadmid
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(.8,-.6);
glVertex2f(.6,-.6);
glVertex2f(.4,-.6);
glVertex2f(.2,-.6);
glVertex2f(0,-.6);
glVertex2f(-.2,-.6);
glVertex2f(-.4,-.6);
glVertex2f(-.6,-.6);
glVertex2f(-.8,-.6);
glEnd();



//tree
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();

glTranslatef(.2f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(.4f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(.6f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(.8f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(1.0f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(1.2f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();


glTranslatef(1.4f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(1.6f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();

glTranslatef(1.8f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.9,-1);
glVertex2f(-0.9,-0.9);
glVertex2f(-0.88,-0.9);
glVertex2f(-0.88,-1);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.94,-0.93);
glVertex2f(-0.89,-0.8);
glVertex2f(-0.84,-0.93);
glEnd();
glLoadIdentity();




////////////////////////////meusiam biulding///////////////////////
int i;

GLfloat x=.41f; GLfloat y=.15f; GLfloat radius =.08f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(76,153,0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();



//car
glPushMatrix();
glTranslatef(position,0.0f,0.0f);
glBegin(GL_QUADS);
glColor3ub(255,51,51);
glVertex2f(.65,-.35);
glVertex2f(.35,-.35);
glVertex2f(.35,-.5);
glVertex2f(.65,-.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(192,192,192);
glVertex2f(.35,-.35);
glVertex2f(.45,-.38);
glVertex2f(.45,-.47);
glVertex2f(.35,-.5);
glEnd();

x=.59f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
x=.53f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=.47f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=.41f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();


glPopMatrix();




//car
//glTranslatef(position,0.0f, 0.0f);
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
glVertex2f(-.85,-0.7);
glVertex2f(-.85,-.42);
glVertex2f(-.3,-.42);
glVertex2f(-.3,-0.7);
glEnd();
glLoadIdentity();
glPopMatrix();

glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-.85,-0.55);
glVertex2f(-.85,-0.53);
glVertex2f(-.3,-0.53);
glVertex2f(-.3,-0.55);
glEnd();
glLoadIdentity();
glPopMatrix();


/////////windows
//1
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.18f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//below
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.18f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 204, 153);
glVertex2f(-0.55,0.1);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.1);
glEnd();
glLoadIdentity();
glPopMatrix();
//2
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.1f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//below
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.1f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//3
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.0f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();


//3 below
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.0f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//4 below
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.1f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//4 up
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.1f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//5 below
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.2f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();
//up
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.2f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();

//6 below


glTranslatef(-0.3f,-0.8f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(64,64,64);
glVertex2f(-0.54,0.1);
glVertex2f(-0.54,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.1);
glEnd();
glLoadIdentity();
glPopMatrix();

//up
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);

glTranslatef(-0.3f,-0.67f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 204);
glVertex2f(-0.54,0.15);
glVertex2f(-0.54,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();


glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
x=-.73f;  y=-.73f;  radius =.06f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=-.43f;  y=-.73f;  radius =.06f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();
glPopMatrix();




//river
glBegin(GL_QUADS);
glColor3ub(153, 204, 255);
glVertex2f(1,.15);
glVertex2f(-1,.15);
glVertex2f(-1,-.37);
glVertex2f(1,-.37);
glEnd();


//sky
glBegin(GL_QUADS);
glColor3ub(179, 255, 255);
glVertex2f(-1.0,0.3);
glVertex2f(-1.0,1.0);
glVertex2f(1.0,1.0);
glVertex2f(1.0,0.3);
glEnd();

//greenfield quad

glBegin(GL_QUADS);
glColor3ub(128, 255, 128);
glVertex2f(-1.0,0.2);
glVertex2f(-1.0,0.5);
glVertex2f(1.0,0.5);
glVertex2f(1.0,0.2);
glEnd();

//river extand
glBegin(GL_QUADS);
glColor3ub(153, 204, 255);
glVertex2f(-1.0,0.17);
glVertex2f(-1.0,0.28);
glVertex2f(1.0,0.28);
glVertex2f(1.0,0.17);
glEnd();

//opposite side of river


//next building
glBegin(GL_QUADS);
glColor3ub(204, 204, 255);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(179, 179, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();


//Traingle back
glTranslatef(-.13f,0.07f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(152, 178, 230);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(132, 163, 225);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//Triangle building

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 51);
glVertex2f(-1,0.35);
glVertex2f(-0.92,0.9);
glVertex2f(-0.95,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 51);
glVertex2f(-0.95,0.35);
glVertex2f(-0.92,0.87);
glVertex2f(-0.88,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 51, 51);
glVertex2f(-0.88,0.35);
glVertex2f(-0.92,0.9);
glVertex2f(-0.83,0.35);
glEnd();
////

//Triangle building 2
glTranslatef(0.9f,0.03f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(102, 153, 153);
glVertex2f(-1,0.35);
glVertex2f(-0.92,0.9);
glVertex2f(-0.95,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102, 153, 153);
glVertex2f(-0.95,0.35);
glVertex2f(-0.92,0.87);
glVertex2f(-0.88,0.35);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(102, 153, 153);
glVertex2f(-0.88,0.35);
glVertex2f(-0.92,0.9);
glVertex2f(-0.83,0.35);
glEnd();
glLoadIdentity();

//next

glTranslatef(0.13f,0.09f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(214, 153, 255);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 128, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//2nd next
glTranslatef(0.37f,0.09f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 204, 255);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(179, 179, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//3rd next
glTranslatef(1.0f,0.05f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(230, 179, 230);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(223, 159, 223);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//3rd next back
glTranslatef(0.87f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub( 173, 194, 235);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(152, 178, 230);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//4th next
glTranslatef(1.3f,0.08f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(214, 153, 255 );
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 128, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//5th next
glTranslatef(1.45f,-0.05f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 179, 255);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 153, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();

//6th next
glTranslatef(1.6f,0.08f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(217, 179, 255);
glVertex2f(-0.8,0.35);
glVertex2f(-0.8,0.9);
glVertex2f(-0.7,0.9);
glVertex2f(-0.7,0.35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(204, 153, 255);
glVertex2f(-0.7,0.35);
glVertex2f(-0.7,0.9);
glVertex2f(-0.68,0.85);
glVertex2f(-0.68,0.35);
glEnd();
glLoadIdentity();







//midle bulding
    glTranslatef(-0.2,.6,0);
    glScalef(0.2,0.6,0);
    glBegin(GL_QUADS);
    glColor3ub(220, 204, 255);
    glVertex2f(-0.5,-0.5);
    glVertex2f(-0.5,0.6);
    glVertex2f(0.5,0.6);
    glVertex2f(0.5,-0.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-0.5,-0.1);
    glVertex2f(-0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,-0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.5,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0.1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-0.5,0.3);
    glVertex2f(-0.5,0.4);
    glVertex2f(0.5,0.4);
    glVertex2f(0.5,0.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 204);
    glVertex2f(-0.2,-0.5);
    glVertex2f(-0.2,-0.2);
    glVertex2f(0.2,-0.2);
    glVertex2f(0.2,-0.5);
    glEnd();
    glLoadIdentity();



//sun


glTranslatef(0.7f,0.0f, 0.0f);

x=-.72f;  y=.85f;  radius =.055f;
 twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 77, 77);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();


//car ON BRIDGE
glPushMatrix();
glTranslatef(position,0.0f,0.0f);
glScalef(0.7,0.7,0);
glTranslatef(-0.4F,0.85f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 0, 0);
glVertex2f(.65,-.35);
glVertex2f(.35,-.35);
glVertex2f(.35,-.5);
glVertex2f(.65,-.5);
glEnd();


x=.59f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
x=.53f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=.47f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();

x=.41f;  y=-.5f;  radius =.02f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,51);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();
glPopMatrix();

//Bridge road line1
    glBegin(GL_LINES);
	glColor3ub(0, 0, 102);
	glVertex2f(-1.0f, 0.25f);
	glVertex2f(-0.57f,0.52f);

    glBegin(GL_LINES);
	glColor3ub(0, 0, 102);
	glVertex2f(-0.9,0.20);
	glVertex2f(-0.9,0.32);

    glBegin(GL_LINES);
	glColor3ub(0, 0, 102);
	glVertex2f(-0.8,0.20);
	glVertex2f(-0.8,0.38);

    glBegin(GL_LINES);
	glColor3ub(0, 0, 102);
	glVertex2f(-0.7,0.20);
	glVertex2f(-0.7,0.44);

    glBegin(GL_LINES);
	glColor3ub(0, 0, 102);
	glVertex2f(-0.6,0.20);
	glVertex2f(-0.6,0.50);

//Bridge road line2
    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(1.0f, 0.25f);
	glVertex2f(0.5f,0.55f);
	glEnd();


    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.9f, 0.18f);
	glVertex2f(0.9f,0.32f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.8f, 0.23f);
	glVertex2f(0.8f,0.37f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.7f, 0.22f);
	glVertex2f(0.7f,0.43f);
	glEnd();

    glBegin(GL_LINES);
    glColor3ub(0, 0, 102);
    glVertex2f(0.6f, 0.21f);
	glVertex2f(0.6f,0.49f);
	glEnd();
///////
//BELOW BRIDGE LINE TRAINGLE
glBegin(GL_TRIANGLES);
glColor3ub(0, 0, 128);
glVertex2f(-0.3,0.1);
glVertex2f(-0.3,0.16);
glVertex2f(0.35,0.2);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(0, 0, 128);
glVertex2f(0.3,0.1);
glVertex2f(0.3,0.16);
glVertex2f(0.0,0.15);
glEnd();




//////////////////////////////////////////////////////////////////////////

//road quad
glTranslatef(0.0f,-0.35f, 0.0f);
glScalef(3.2,1,0);

glBegin(GL_QUADS);
glColor3ub(0, 0, 102);
glVertex2f(-0.34,0.5);
glVertex2f(-0.34,0.58);
glVertex2f(0.33,0.58);
glVertex2f(0.33,0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();
glLoadIdentity();




//first pillar below
glBegin(GL_QUADS);
glColor3ub(51, 17, 0);
glVertex2f(-0.6,0.15);
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,-0.2);
glVertex2f(-0.6,-0.2);
glEnd();

//LINE
glTranslatef(0.0f, -0.3f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();

glTranslatef(0.0f, -0.4f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();


//left below
glTranslatef(-0.62f,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(51, 17, 0);
glVertex2f(-0.6,0.15);
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,-0.2);
glVertex2f(-0.6,-0.2);
glEnd();


//LINE
glTranslatef(0.0f, -0.3f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();


glTranslatef(-0.62f,0.0f, 0.0f);
glTranslatef(0.0f, -0.4f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();


//right below

glTranslatef(1.5f,0.0f, 0.0f);

glBegin(GL_QUADS);
glColor3ub(51, 17, 0);
glVertex2f(-0.6,0.15);
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,-0.2);
glVertex2f(-0.6,-0.2);
glEnd();

//LINE
glTranslatef(0.0f, -0.3f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();

glTranslatef(1.5f,0.0f, 0.0f);
glTranslatef(0.0f, -0.4f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();



//1st pillar
glBegin(GL_QUADS);
glColor3ub(255, 255, 102);
glVertex2f(-0.57,0.15);
glVertex2f(-0.57,0.7);
glVertex2f(-0.34,0.7);
glVertex2f(-0.34,0.15);
glEnd();

//WINDOWS/////////////////////////////////////////////
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.07f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.14f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

///////////////////////////////////////////////////////

glTranslatef(-0.001f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();


glTranslatef(0.07f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.14f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();


/////////////////////////////////////////////////////////
glTranslatef(-0.001f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.07f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.14f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
////////////////////////////////////////////////////

glTranslatef(-0.001f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.07f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.14f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();


//////////////////////////////////////////////
//1st pillar LINE 1
glBegin(GL_QUADS);
glColor3ub(230, 184, 0);
glVertex2f(-0.58,0.35);
glVertex2f(-0.58,0.38);
glVertex2f(-0.33,0.38);
glVertex2f(-0.33,0.35);
glEnd();

//1st pillar LINE 2
glBegin(GL_POLYGON);
glColor3ub(230, 184, 0);
glVertex2f(-0.58,0.52);
glVertex2f(-0.58,0.55);
glVertex2f(-0.33,0.55);
glVertex2f(-0.33,0.52);
glEnd();


//1st pillAR traingle
glBegin(GL_TRIANGLES);
glColor3ub(175, 175, 131);
glVertex2f(-0.56,0.7);
glVertex2f(-0.45,0.97);
glVertex2f(-0.34,0.7);
glEnd();

//1st Pillar Square 1
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.57,0.7);
glVertex2f(-0.57,0.83);
glVertex2f(-0.49,0.83);
glVertex2f(-0.49,0.7);
glEnd();
glLoadIdentity();


//WINDOW
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.54,0.7);
glVertex2f(-0.54,0.78);
glVertex2f(-0.51,0.78);
glVertex2f(-0.51,0.7);
glEnd();

//1st pillar square 1 traingle
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.57,0.83);
glVertex2f(-0.53,0.95);
glVertex2f(-0.49,0.83);
glEnd();

//1st Pillar Square 2
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.48,0.7);
glVertex2f(-0.48,0.79);
glVertex2f(-0.42,0.79);
glVertex2f(-0.42,0.7);
glEnd();


//WINDOW
glTranslatef(0.07f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.54,0.72);
glVertex2f(-0.54,0.77);
glVertex2f(-0.5,0.77);
glVertex2f(-0.5,0.72);
glEnd();
glLoadIdentity();

//1st pillar square 2 traingle
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.48,0.79);
glVertex2f(-0.45,0.9);
glVertex2f(-0.42,0.79);
glEnd();

//1st Pillar Square 3
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.41,0.7);
glVertex2f(-0.41,0.83);
glVertex2f(-0.34,0.83);
glVertex2f(-0.34,0.7);
glEnd();

//WINDOW
glTranslatef(0.14f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.53,0.7);
glVertex2f(-0.53,0.78);
glVertex2f(-0.5,0.78);
glVertex2f(-0.5,0.7);
glEnd();
glLoadIdentity();

//1st pillar square 3 traingle
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.41,0.83);
glVertex2f(-0.38,0.95);
glVertex2f(-0.34,0.83);
glEnd();


glLoadIdentity();










//2nd pilar/////////////////////////////////////////////////////////////////////////


glTranslatef(0.9f, 0.0f, 0.0f);

//first pillar below
glBegin(GL_QUADS);
glColor3ub(51, 17, 0);
glVertex2f(-0.6,0.15);
glVertex2f(-0.3,0.15);
glVertex2f(-0.3,-0.2);
glVertex2f(-0.6,-0.2);
glEnd();

//LINE
glTranslatef(0.0f, -0.3f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();


glTranslatef(0.9f, -0.4f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(204, 163, 0);
glVertex2f(-0.6,0.35);
glVertex2f(-0.6,0.4);
glVertex2f(-0.3,0.4);
glVertex2f(-0.3,0.35);
glEnd();
glLoadIdentity();


//1st pillar
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 102);
glVertex2f(-0.57,0.15);
glVertex2f(-0.57,0.7);
glVertex2f(-0.34,0.7);
glVertex2f(-0.34,0.15);
glEnd();

//WINDOWS/////////////////////////////////////////////

glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.07f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.14f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

///////////////////////////////////////////////////////
glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(-0.001f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.07f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.14f, 0.42f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();


/////////////////////////////////////////////////////////
glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(-0.001f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.07f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.14f, 0.25f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
////////////////////////////////////////////////////
glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(-0.001f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.07f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();

glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.14f, 0.1f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();


//////////////////////////////////////////////
//1st pillar LINE 1
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(230, 184, 0);
glVertex2f(-0.58,0.35);
glVertex2f(-0.58,0.38);
glVertex2f(-0.33,0.38);
glVertex2f(-0.33,0.35);
glEnd();
glLoadIdentity();

//1st pillar LINE 2
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(230, 184, 0);
glVertex2f(-0.58,0.52);
glVertex2f(-0.58,0.55);
glVertex2f(-0.33,0.55);
glVertex2f(-0.33,0.52);
glEnd();
glLoadIdentity();

//1st pillAR traingle
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(175, 175, 131);
glVertex2f(-0.56,0.7);
glVertex2f(-0.45,0.97);
glVertex2f(-0.34,0.7);
glEnd();
glLoadIdentity();


//1st Pillar Square 1
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.57,0.7);
glVertex2f(-0.57,0.83);
glVertex2f(-0.49,0.83);
glVertex2f(-0.49,0.7);
glEnd();
glLoadIdentity();


//WINDOW
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.54,0.7);
glVertex2f(-0.54,0.78);
glVertex2f(-0.51,0.78);
glVertex2f(-0.51,0.7);
glEnd();
glLoadIdentity();

//1st pillar square 1 traingle
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.57,0.83);
glVertex2f(-0.53,0.95);
glVertex2f(-0.49,0.83);
glEnd();
glLoadIdentity();
//1st Pillar Square 2
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.48,0.7);
glVertex2f(-0.48,0.79);
glVertex2f(-0.42,0.79);
glVertex2f(-0.42,0.7);
glEnd();
glLoadIdentity();


//WINDOW
glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.07f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.54,0.72);
glVertex2f(-0.54,0.77);
glVertex2f(-0.5,0.77);
glVertex2f(-0.5,0.72);
glEnd();
glLoadIdentity();

//1st pillar square 2 traingle
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.48,0.79);
glVertex2f(-0.45,0.9);
glVertex2f(-0.42,0.79);
glEnd();
glLoadIdentity();

//1st Pillar Square 3
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.41,0.7);
glVertex2f(-0.41,0.83);
glVertex2f(-0.34,0.83);
glVertex2f(-0.34,0.7);
glEnd();
glLoadIdentity();

//WINDOW
glTranslatef(0.9f, 0.0f, 0.0f);
glTranslatef(0.14f, 0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(102, 51, 0);
glVertex2f(-0.53,0.7);
glVertex2f(-0.53,0.78);
glVertex2f(-0.5,0.78);
glVertex2f(-0.5,0.7);
glEnd();
glLoadIdentity();

//1st pillar square 3 traingle
glTranslatef(0.9f, 0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor3ub(153, 153, 102);
glVertex2f(-0.41,0.83);
glVertex2f(-0.38,0.95);
glVertex2f(-0.34,0.83);
glEnd();
glLoadIdentity();

//uper bridge quads
glBegin(GL_QUADS);
glColor3ub(0, 0, 102);
glVertex2f(-0.34,0.5);
glVertex2f(-0.34,0.58);
glVertex2f(0.33,0.58);
glVertex2f(0.33,0.5);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();

glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.33,0.52);
glVertex2f(-0.33,0.56);
glVertex2f(-0.29,0.56);
glVertex2f(-0.29,0.52);
glEnd();
glLoadIdentity();


//flag1
glTranslatef(0.05f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 102);
glVertex2f(-0.2,0.58);
glVertex2f(-0.2,0.73);
glVertex2f(-0.19,0.73);
glVertex2f(-0.19,0.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.19,0.63);
glVertex2f(-0.19,0.71);
glVertex2f(-0.12,0.71);
glVertex2f(-0.12,0.63);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 51, 0);
glVertex2f(-0.19,0.66);
glVertex2f(-0.19,0.68);
glVertex2f(-0.12,0.68);
glVertex2f(-0.12,0.66);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 51, 0);
glVertex2f(-0.16,0.63);
glVertex2f(-0.16,0.71);
glVertex2f(-0.15,0.71);
glVertex2f(-0.15,0.63);
glEnd();
glLoadIdentity();

//flag2
glTranslatef(0.2f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(0, 0, 102);
glVertex2f(-0.2,0.58);
glVertex2f(-0.2,0.73);
glVertex2f(-0.19,0.73);
glVertex2f(-0.19,0.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 153);
glVertex2f(-0.19,0.63);
glVertex2f(-0.19,0.71);
glVertex2f(-0.12,0.71);
glVertex2f(-0.12,0.63);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.19,0.65);
glVertex2f(-0.19,0.69);
glVertex2f(-0.12,0.69);
glVertex2f(-0.12,0.65);
glEnd();



glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.17,0.63);
glVertex2f(-0.17,0.71);
glVertex2f(-0.14,0.71);
glVertex2f(-0.14,0.63);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 51, 0);
glVertex2f(-0.19,0.66);
glVertex2f(-0.19,0.68);
glVertex2f(-0.12,0.68);
glVertex2f(-0.12,0.66);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 51, 0);
glVertex2f(-0.16,0.63);
glVertex2f(-0.16,0.71);
glVertex2f(-0.15,0.71);
glVertex2f(-0.15,0.63);
glEnd();
glLoadIdentity();


//boat
glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.1,-0.28);
glVertex2f(-0.15,-.2);
glVertex2f(0.15,-.2);
glVertex2f(0.1,-.28);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.12,-0.2);
glVertex2f(-0.06,-0.09);
glVertex2f(0.06,-0.09);
glVertex2f(0.13,-0.2);
glEnd();



glTranslatef(0.49f, -0.34f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();



glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(0.56f, -0.34f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();

///////2

glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.75f,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.1,-0.28);
glVertex2f(-0.15,-.2);
glVertex2f(0.15,-.2);
glVertex2f(0.1,-.28);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255, 255, 179);
glVertex2f(-0.12,-0.2);
glVertex2f(-0.06,-0.09);
glVertex2f(0.06,-0.09);
glVertex2f(0.13,-0.2);
glEnd();


glTranslatef(0.49f, -0.34f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();

glPushMatrix();
glTranslatef(-position,0.0f,0.0f);
glTranslatef(-0.75f,0.0f, 0.0f);
glTranslatef(0.56f, -0.34f, 0.0f);
glBegin(GL_QUADS);
glColor3ub(153, 51, 0);
glVertex2f(-0.55,0.15);
glVertex2f(-0.55,0.23);
glVertex2f(-0.5,0.23);
glVertex2f(-0.5,0.15);
glEnd();
glLoadIdentity();
glPopMatrix();

glFlush();

}

//...................................................SHAYED'S VIEW END.............................................................


//...................................................SAAD'S EVENING VIEW.............................................................
void EveningViewf()
{

    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-2,2,-2,2);


    //sky
    glBegin(GL_QUADS);
	glColor3ub(255,204,153);
	glVertex2f(-2.0,2.0);
	glVertex2f(-2.0,-0.6);
	glVertex2f(2.0, -0.6);
	glVertex2f(2.0,2.0);
	glEnd();

    sun();
    cloud();
	glBegin(GL_QUADS);
	glColor3ub(47,79,79);
	glVertex2f(-2.0,-0.6);
glVertex2f(-2.0,-2.0);
	glVertex2f(2.0,-2.0);
	glVertex2f(2.0,-0.6);
	glEnd();

    glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-1.8,-.8);
    glVertex2f(-1.8,-1.0);
	glVertex2f(-1.2,-1.0);
	glVertex2f(-1.2,-0.8);
	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-.9,-.8);
    glVertex2f(-.9,-1.0);
	glVertex2f(-.3,-1.0);
	glVertex2f(-.3,-0.8);
	glEnd();


 glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(.2,-.8);
    glVertex2f(.2,-1.0);
	glVertex2f(.8,-1.0);
	glVertex2f(.8,-0.8);
	glEnd();



 glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(1,-.8);
    glVertex2f(1,-1.0);
	glVertex2f(1.6,-1.0);
	glVertex2f(1.6,-0.8);
	glEnd();



    //CLOCK TOWER
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.5,-0.6);
	glVertex2f(-0.5,0.7);
	glVertex2f(-0.3,0.7);
	glVertex2f(-0.3,-0.6);
	glEnd();

    //vertical; line
    GLfloat thikness1=6.0;
    glLineWidth(thikness1);
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.45,-0.6);
	glVertex2f(-.45,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);

	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.4,-0.6);
	glVertex2f(-.4,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);


	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.35,-0.6);
	glVertex2f(-.35,0.7);
	glEnd();
    thikness1 = 6.0;
    glLineWidth(thikness1);

    //horizontal
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,-0.35);
	glVertex2f(-0.3,-0.35);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,-0.30);
	glVertex2f(-0.3,-0.30);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);


    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.0);
	glVertex2f(-0.3,0.0);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.05);
	glVertex2f(-0.3,0.05);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);


   glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.35);
	glVertex2f(-0.3,0.35);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);

   glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.50,0.40);
	glVertex2f(-0.3,0.40);
	glEnd();
    thikness1 = 4.0;
    glLineWidth(thikness1);



    glBegin(GL_QUADS);
	glColor3ub(205,133,63);
	glVertex2f(-0.55,0.7);
	glVertex2f(-0.55,1.1);
	glVertex2f(-0.25,1.1);
	glVertex2f(-0.25,0.7);
	glEnd();


clock1();


	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.5,1.1);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.3,1.2);
	glVertex2f(-0.3,1.1);
	glEnd();

    GLfloat thikness2=6.0;
    glLineWidth(thikness2);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.45,1.1);
	glVertex2f(-.45,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.4,1.1);
	glVertex2f(-.4,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.35,1.1);
	glVertex2f(-.35,1.2);
	glEnd();
    thikness2 = 6.0;
    glLineWidth(thikness2);


    glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-0.5,1.2);
	glVertex2f(-0.45,1.3);
	glVertex2f(-0.35,1.3);
	glVertex2f(-0.3,1.2);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.46,1.3);
	glVertex2f(-0.46,1.34);
	glVertex2f(-0.34,1.34);
	glVertex2f(-0.34,1.3);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.45,1.34);
	glVertex2f(-0.45,1.44);
	glVertex2f(-0.35,1.44);
	glVertex2f(-0.35,1.34);
	glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.45,1.44);
	glVertex2f(-0.40,1.56);
	glVertex2f(-0.35,1.44);
	glEnd();

   GLfloat thikness = 4.0;
    glLineWidth(thikness);
	glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.40,1.56);
	glVertex2f(-0.40,1.66);
	glEnd();

    //Building
    glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-0.5,0.4);
	glVertex2f(-2.0,0.4);
	glVertex2f(-2.0,0.2);
	glVertex2f(-0.5,0.2);
	glEnd();

     GLfloat thikness3 = 7.0;
    glLineWidth(thikness3);
	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,0.215);
	glVertex2f(-2.0,0.215);
	glEnd();
     thikness3 = 7.0;
    glLineWidth(thikness3);



  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
	glVertex2f(-0.5,0.2);
	glVertex2f(-2.0,0.2);
	glVertex2f(-2.0,-0.6);
	glVertex2f(-0.5,-0.6);
	glEnd();

//bet clock tower & 1rst piller

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.63,0.225);
	glVertex2f(-0.63,0.3);
	glVertex2f(-0.53,0.3);
	glVertex2f(-0.53,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-0.56,0.225);
	glVertex2f(-0.56,0.35);
	glVertex2f(-0.60,0.35);
	glVertex2f(-0.60,0.225);
	glEnd();

	//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.63,-0.065);
	glVertex2f(-0.63,0.028);
	glVertex2f(-0.53,0.028);
	glVertex2f(-0.53,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-0.56,-.065);
	glVertex2f(-0.56,0.085);
	glVertex2f(-0.60,0.085);
	glVertex2f(-0.60,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.63,-0.366);
	glVertex2f(-0.63,-0.265);
	glVertex2f(-0.53,-0.265);
	glVertex2f(-0.53,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-0.56,-.366);
	glVertex2f(-0.56,-.209);
	glVertex2f(-0.60,-0.209);
	glVertex2f(-0.60,-.366);
	glEnd();
// lines & structures of the buildings
glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,0.155);
	glVertex2f(-2.0,0.155);
	glEnd();


glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.08);
	glVertex2f(-2.0,-0.08);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.15);
	glVertex2f(-2.0,-0.15);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.08);
	glVertex2f(-2.0,-0.08);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.38);
	glVertex2f(-2.0,-0.38);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.45);
	glVertex2f(-2.0,-0.45);
	glEnd();

glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.5,-0.582);
	glVertex2f(-2.0,-0.582);
	glEnd();


    //small pillaers
    glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.7,-0.6);
	glVertex2f(-0.7,0.45);
	glVertex2f(-0.65,0.45);
	glVertex2f(-0.65,-0.6);
	glEnd();

	GLfloat thiknessinside=5.0;
    glLineWidth(thiknessinside);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.675,-0.6);
	glVertex2f(-.675,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.71,0.45);
	glVertex2f(-0.71,0.47);
	glVertex2f(-0.64,0.47);
	glVertex2f(-0.64,0.45);
	glEnd();

glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-0.7,0.47);
	glVertex2f(-0.7,0.55);
	glVertex2f(-0.65,0.55);
	glVertex2f(-0.65,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.7,0.55);
	glVertex2f(-0.675,0.65);
	glVertex2f(-0.65,0.55);
    glEnd();


    GLfloat thiknessp1=2.0;
    glLineWidth(thiknessp1);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.675,0.65);
	glVertex2f(-.675,0.75);
	glEnd();



	// struct betwwen pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.88,0.225);
	glVertex2f(-0.88,0.3);
	glVertex2f(-0.78,0.3);
	glVertex2f(-0.78,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-0.81,0.225);
	glVertex2f(-0.81,0.35);
	glVertex2f(-0.85,0.35);
	glVertex2f(-0.85,0.225);
	glEnd();

//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.88,-0.065);
	glVertex2f(-0.88,0.028);
	glVertex2f(-0.78,0.028);
	glVertex2f(-0.78,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-0.81,-.065);
	glVertex2f(-0.81,0.085);
	glVertex2f(-0.85,0.085);
	glVertex2f(-0.85,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-0.88,-0.366);
	glVertex2f(-0.88,-0.265);
	glVertex2f(-0.78,-0.265);
	glVertex2f(-0.78,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-0.81,-.366);
	glVertex2f(-0.81,-.209);
	glVertex2f(-0.85,-0.209);
	glVertex2f(-0.85,-.366);
	glEnd();

  //2nd small piller
  glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-0.95,-0.6);
	glVertex2f(-0.95,0.45);
	glVertex2f(-1.0,0.45);
	glVertex2f(-1.0,-0.6);
	glEnd();


GLfloat thiknessinside1=5.0;
    glLineWidth(thiknessinside1);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-.975,-0.6);
	glVertex2f(-.975,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-0.94,0.45);
	glVertex2f(-0.94,0.47);
	glVertex2f(-1.01,0.47);
	glVertex2f(-1.01,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-0.95,0.47);
	glVertex2f(-0.95,0.55);
	glVertex2f(-1.0,0.55);
	glVertex2f(-1.0,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-0.95,0.55);
	glVertex2f(-0.975,0.65);
	glVertex2f(-1.0,0.55);
    glEnd();


   GLfloat thiknessp2=2.0;
    glLineWidth(thiknessp2);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-.975,0.65);
	glVertex2f(-.975,0.75);
	glEnd();
//struct between pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.18,0.225);
	glVertex2f(-1.18,0.3);
	glVertex2f(-1.08,0.3);
	glVertex2f(-1.08,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.11,0.225);
	glVertex2f(-1.11,0.35);
	glVertex2f(-1.15,0.35);
	glVertex2f(-1.15,0.225);
	glEnd();

//struct between lines
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.18,-0.065);
	glVertex2f(-1.18,0.028);
	glVertex2f(-1.08,0.028);
	glVertex2f(-1.08,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.11,-.065);
	glVertex2f(-1.11,0.085);
	glVertex2f(-1.15,0.085);
	glVertex2f(-1.15,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.18,-0.366);
	glVertex2f(-1.18,-0.265);
	glVertex2f(-1.08,-0.265);
	glVertex2f(-1.08,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.11,-.366);
	glVertex2f(-1.11,-.209);
	glVertex2f(-1.15,-0.209);
	glVertex2f(-1.15,-.366);
	glEnd();

	//3rd piller
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.25,-0.6);
	glVertex2f(-1.25,0.45);
	glVertex2f(-1.30,0.45);
	glVertex2f(-1.30,-0.6);
	glEnd();


GLfloat thiknessinside2=5.0;
    glLineWidth(thiknessinside2);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.275,-0.6);
	glVertex2f(-1.275,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.24,0.45);
	glVertex2f(-1.24,0.47);
	glVertex2f(-1.31,0.47);
	glVertex2f(-1.31,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.25,0.47);
	glVertex2f(-1.25,0.55);
	glVertex2f(-1.30,0.55);
	glVertex2f(-1.30,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.25,0.55);
	glVertex2f(-1.275,0.65);
	glVertex2f(-1.30,0.55);
    glEnd();


   GLfloat thiknessp3=2.0;
    glLineWidth(thiknessp3);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.275,0.65);
	glVertex2f(-1.275,0.75);
	glEnd();

//struct between pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.48,0.225);
	glVertex2f(-1.48,0.3);
	glVertex2f(-1.38,0.3);
	glVertex2f(-1.38,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.41,0.225);
	glVertex2f(-1.41,0.35);
	glVertex2f(-1.45,0.35);
	glVertex2f(-1.45,0.225);
	glEnd();
	// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.48,-0.065);
	glVertex2f(-1.48,0.028);
	glVertex2f(-1.38,0.028);
	glVertex2f(-1.38,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.41,-.065);
	glVertex2f(-1.41,0.085);
	glVertex2f(-1.45,0.085);
	glVertex2f(-1.45,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.48,-0.366);
	glVertex2f(-1.48,-0.265);
	glVertex2f(-1.38,-0.265);
	glVertex2f(-1.38,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.41,-.366);
	glVertex2f(-1.41,-.209);
	glVertex2f(-1.45,-0.209);
	glVertex2f(-1.45,-.366);
	glEnd();
//4th piller
glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.55,-0.6);
	glVertex2f(-1.55,0.45);
	glVertex2f(-1.60,0.45);
	glVertex2f(-1.60,-0.6);
	glEnd();


GLfloat thiknessinside3=5.0;
    glLineWidth(thiknessinside3);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.575,-0.6);
	glVertex2f(-1.575,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.54,0.45);
	glVertex2f(-1.54,0.47);
	glVertex2f(-1.61,0.47);
	glVertex2f(-1.61,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.55,0.47);
	glVertex2f(-1.55,0.55);
	glVertex2f(-1.60,0.55);
	glVertex2f(-1.60,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.55,0.55);
	glVertex2f(-1.575,0.65);
	glVertex2f(-1.60,0.55);
    glEnd();


   GLfloat thiknessp4=2.0;
    glLineWidth(thiknessp4);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.575,0.65);
	glVertex2f(-1.575,0.75);
	glEnd();

//struct bet pillers

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.78,0.225);
	glVertex2f(-1.78,0.3);
	glVertex2f(-1.68,0.3);
	glVertex2f(-1.68,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-1.71,0.225);
	glVertex2f(-1.71,0.35);
	glVertex2f(-1.75,0.35);
	glVertex2f(-1.75,0.225);
	glEnd();

// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.78,-0.065);
	glVertex2f(-1.78,0.028);
	glVertex2f(-1.68,0.028);
	glVertex2f(-1.68,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-1.71,-.065);
	glVertex2f(-1.71,0.085);
	glVertex2f(-1.75,0.085);
	glVertex2f(-1.75,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-1.78,-0.366);
	glVertex2f(-1.78,-0.265);
	glVertex2f(-1.68,-0.265);
	glVertex2f(-1.68,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-1.71,-.366);
	glVertex2f(-1.71,-.209);
	glVertex2f(-1.75,-0.209);
	glVertex2f(-1.75,-.366);
	glEnd();
// 5th piller

glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-1.85,-0.6);
	glVertex2f(-1.85,0.45);
	glVertex2f(-1.90,0.45);
	glVertex2f(-1.90,-0.6);
	glEnd();


GLfloat thiknessinside4=5.0;
    glLineWidth(thiknessinside4);
    glBegin(GL_LINES);
	glColor3ub(139,69,19);
	glVertex2f(-1.875,-0.6);
	glVertex2f(-1.875,0.45);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,69,19);
	glVertex2f(-1.84,0.45);
	glVertex2f(-1.84,0.47);
	glVertex2f(-1.91,0.47);
	glVertex2f(-1.91,0.45);
	glEnd();


glBegin(GL_QUADS);
	glColor3ub(210,105,30);
	glVertex2f(-1.85,0.47);
	glVertex2f(-1.85,0.55);
	glVertex2f(-1.90,0.55);
	glVertex2f(-1.90,0.47);
    glEnd();

    glBegin(GL_TRIANGLES);
	glColor3ub(70,130,180);
	glVertex2f(-1.85,0.55);
	glVertex2f(-1.875,0.65);
	glVertex2f(-1.90,0.55);
    glEnd();


   GLfloat thiknessp5=2.0;
    glLineWidth(thiknessp5);
    glBegin(GL_LINES);
	glColor3ub(244,164,96);
	glVertex2f(-1.875,0.65);
	glVertex2f(-1.875,0.75);
	glEnd();

	//stru bet pill
	glBegin(GL_QUADS);
	glColor3ub(244,164,96);
	glVertex2f(-2.0,0.225);
	glVertex2f(-2.0,0.3);
	glVertex2f(-1.96,0.3);
	glVertex2f(-1.96,0.225);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(188,143,143);
	glVertex2f(-2.0,0.225);
	glVertex2f(-2.0,0.35);
	glVertex2f(-1.98,0.35);
	glVertex2f(-1.98,0.225);
	glEnd();
// STRUCT BET LINES
	glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-2.0,-0.065);
	glVertex2f(-2.0,0.028);
	glVertex2f(-1.96,0.028);
	glVertex2f(-1.96,-0.065);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);//102 51 0
	glVertex2f(-2.0,-.065);
	glVertex2f(-2.0,0.085);
	glVertex2f(-1.98,0.085);
	glVertex2f(-1.98,-.065);
	glEnd();
//2ND
glBegin(GL_QUADS);
    glColor3ub(51,25,0);
	glVertex2f(-2.0,-0.366);
	glVertex2f(-2.0,-0.265);
	glVertex2f(-1.96,-0.265);
	glVertex2f(-1.96,-0.366);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(-2.0,-.366);
	glVertex2f(-2.0,-.209);
	glVertex2f(-1.98,-0.209);
	glVertex2f(-1.98,-.366);
	glEnd();



	glBegin(GL_QUADS);
	glColor3ub(102,51,0);
	glVertex2f(1.6,-0.6);
	glVertex2f(1.6,-.2);
	glVertex2f(1.7,-0.2);
	glVertex2f(1.7,-0.6);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0,40,0);
	glVertex2f(1.65,0.2);
	glVertex2f(1.4,-0.2);
	glVertex2f(1.9,-0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3b(0,55,0);
	glVertex2f(1.65,0.6);
	glVertex2f(1.43,0.0);
	glVertex2f(1.87,0.0);
	glEnd();
c2();
c1();
c0();
line();
round();
roundp1();
roundp2();
roundp3();
roundp4();
roundp5();
    //train
    CarBody();
    CarWheel();

    //translation building
    //Translate_building();
    //Translate_tree();
glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-1.8,-1.85);
glVertex2f(-1.8,-2);
glVertex2f(-1.75,-2);
glVertex2f(-1.75,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-1.9,-1.87);
glVertex2f(-1.7,-1.87);
glVertex2f(-1.8,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-1.4,-1.85);
glVertex2f(-1.4,-2);
glVertex2f(-1.35,-2);
glVertex2f(-1.35,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-1.5,-1.87);
glVertex2f(-1.3,-1.87);
glVertex2f(-1.4,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-1.0,-1.85);
glVertex2f(-1.0,-2);
glVertex2f(-0.95,-2);
glVertex2f(-0.95,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-1.1,-1.87);
glVertex2f(-0.9,-1.87);
glVertex2f(-1.0,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.6,-1.85);
glVertex2f(-0.6,-2);
glVertex2f(-0.55,-2);
glVertex2f(-0.55,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.7,-1.87);
glVertex2f(-0.5,-1.87);
glVertex2f(-0.6,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(-0.2,-1.85);
glVertex2f(-0.2,-2);
glVertex2f(-0.15,-2);
glVertex2f(-0.15,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(-0.3,-1.87);
glVertex2f(-0.1,-1.87);
glVertex2f(-0.2,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(0.2,-1.85);
glVertex2f(0.2,-2);
glVertex2f(0.15,-2);
glVertex2f(0.15,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.3,-1.87);
glVertex2f(0.1,-1.87);
glVertex2f(0.2,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(0.6,-1.85);
glVertex2f(0.6,-2);
glVertex2f(0.55,-2);
glVertex2f(0.55,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(0.7,-1.87);
glVertex2f(0.5,-1.87);
glVertex2f(0.6,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(1.0,-1.85);
glVertex2f(1.0,-2);
glVertex2f(0.95,-2);
glVertex2f(0.95,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(1.1,-1.87);
glVertex2f(0.9,-1.87);
glVertex2f(1.0,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(1.4,-1.85);
glVertex2f(1.4,-2);
glVertex2f(1.35,-2);
glVertex2f(1.35,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(1.5,-1.87);
glVertex2f(1.3,-1.87);
glVertex2f(1.4,-1.58);
glEnd();

glBegin(GL_QUADS);
glColor3ub(128, 0, 0);
glVertex2f(1.8,-1.85);
glVertex2f(1.8,-2);
glVertex2f(1.75,-2);
glVertex2f(1.75,-1.85);
glEnd();
glBegin(GL_TRIANGLES);
glColor3ub(0, 153, 0);
glVertex2f(1.9,-1.87);
glVertex2f(1.7,-1.87);
glVertex2f(1.8,-1.58);
glEnd();
//new car
glPushMatrix();
glTranslatef(-position,-0.3f,0.0f);
glScalef(3,2.5,0);
glBegin(GL_QUADS);
glColor3ub(255,0,0);
glVertex2f(0,-.1);
glVertex2f(0,-.4);
glVertex2f(.4,-.4);
glVertex2f(.4,-.1);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(0,-.24);
glVertex2f(0,-.28);
glVertex2f(.4,-.28);
glVertex2f(.4,-.24);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.05,-.12);
glVertex2f(.05,-.23);
glVertex2f(.1,-.23);
glVertex2f(.1,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.14,-.12);
glVertex2f(.14,-.23);
glVertex2f(.19,-.23);
glVertex2f(.19,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.24,-.12);
glVertex2f(.24,-.23);
glVertex2f(.29,-.23);
glVertex2f(.29,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.34,-.12);
glVertex2f(.34,-.23);
glVertex2f(.39,-.23);
glVertex2f(.39,-.12);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.05,-.29);
glVertex2f(.05,-.38);
glVertex2f(.1,-.38);
glVertex2f(.1,-.29);
glEnd();


glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.14,-.29);
glVertex2f(.14,-.38);
glVertex2f(.19,-.38);
glVertex2f(.19,-.29);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.24,-.29);
glVertex2f(.24,-.38);
glVertex2f(.29,-.38);
glVertex2f(.29,-.29);
glEnd();

glBegin(GL_QUADS);
glColor3ub(255,250,205);
glVertex2f(.34,-.29);
glVertex2f(.34,-.38);
glVertex2f(.39,-.38);
glVertex2f(.39,-.29);
glEnd();

int i;

GLfloat x=.3f; GLfloat y=-.42f; GLfloat radius =.06f;
int triangleAmount = 20; //# of triangles used to draw circle

//GLfloat radius = 0.8f; //radius
GLfloat twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255,255,0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);

}
glEnd();




x=.1f;  y=-.42f;  radius =.06f;
 twicePi = 2.0f * PI;

glBegin(GL_TRIANGLE_FAN);
glColor3ub(255, 255, 0);

glVertex2f(x, y); // center of circle
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
           x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}
glEnd();
glLoadIdentity();
glPopMatrix();








	glFlush();

}


//..............................///night view//
void NightView()
{
    glClearColor(.0f, .0f, .0f, .0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);

    ///snow///

//moon
int i;
    glColor3ub(255,255,255);
	GLfloat x=.6f; GLfloat y=.7f; GLfloat radius =.15f;
	int triangleAmount = 80; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.5f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
     // Clear the color buffer (background)
//road
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(194, 194, 163); // Red

	glVertex2f(-1.0f, -0.38f);    // x, y
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);    // x, y
	glVertex2f(1.0f, -0.38f);

	glEnd();
	//road lane
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(15, 15, 10); // Red

	glVertex2f(-.8f, -0.65f);    // x, y
	glVertex2f(-.8f, -.7f);
	glVertex2f(-.6f, -.7f);    // x, y
	glVertex2f(-.6f, -0.65f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(15, 15, 10); // Red

	glVertex2f(-.4f, -0.65f);    // x, y
	glVertex2f(-.4f, -.7f);
	glVertex2f(-.2f, -.7f);    // x, y
	glVertex2f(-.2f, -0.65f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(15, 15, 10); // Red

	glVertex2f(-.0f, -0.65f);    // x, y
	glVertex2f(-.0f, -.7f);
	glVertex2f(.2f, -.7f);    // x, y
	glVertex2f(.2f, -0.65f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(15, 15, 10); // Red

	glVertex2f(.4f, -0.65f);    // x, y
	glVertex2f(.4f, -.7f);
	glVertex2f(.6f, -.7f);    // x, y
	glVertex2f(.6f, -0.65f);

	glEnd();

///////////back
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 128, 0); // Red

	glVertex2f(-0.8f, 0.4f);    // x, y
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(0.8f, -0.2f);    // x, y
	glVertex2f(0.8f, 0.4f);

	glEnd();
	//side
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 128, 0); // Red

	glVertex2f(-1.0f, 0.5f);    // x, y
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(-0.8f, -0.2f);    // x, y
	glVertex2f(-0.8f, 0.4f);

	glEnd();
		glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 128, 0); // Red

	glVertex2f(1.0f, 0.5f);    // x, y
	glVertex2f(1.0f,- 0.3f);
	glVertex2f(0.8f, -0.2f);    // x, y
	glVertex2f(0.8f, 0.4f);

	glEnd();
	//lower border of side
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(-1.0f, -0.25f);    // x, y
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(-0.8f, -0.25f);    // x, y
	glVertex2f(-0.8f, -0.2f);

	glEnd();
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(1.0f, -0.25f);    // x, y
	glVertex2f(1.0f, -0.3f);
	glVertex2f(0.8f, -0.25f);    // x, y
	glVertex2f(0.8f, -0.2f);

	glEnd();
//Side long structure
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(-0.8f, 0.4f);    // x, y
	glVertex2f(-0.8f,- 0.2f);
	glVertex2f(-.75f, -0.2f);    // x, y
	glVertex2f(-.75f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(-0.9f, 0.4f);    // x, y
	glVertex2f(-0.9f,- 0.25f);
	glVertex2f(-.95f, -0.25f);    // x, y
	glVertex2f(-.95f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(0.9f, 0.4f);    // x, y
	glVertex2f(0.9f,- 0.25f);
	glVertex2f(.95f, -0.25f);    // x, y
	glVertex2f(.95f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(0.8f, 0.4f);    // x, y
	glVertex2f(0.8f,- 0.2f);
	glVertex2f(.75f, -0.2f);    // x, y
	glVertex2f(.75f, 0.4f);

	glEnd();


//upper border of side
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(1.0f, 0.45f);    // x, y
	glVertex2f(1.0f, 0.4f);
	glVertex2f(0.8f, 0.3f);    // x, y
	glVertex2f(0.8f, 0.35f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(1.0f, 0.5f);    // x, y
	glVertex2f(1.0f, 0.45f);
	glVertex2f(0.8f, 0.35f);    // x, y
	glVertex2f(0.8f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-1.0f, 0.45f);    // x, y
	glVertex2f(-1.0f, 0.4f);
	glVertex2f(-0.8f, 0.3f);    // x, y
	glVertex2f(-0.8f, 0.35f);

	glEnd();
glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(-1.0f, 0.5f);    // x, y
	glVertex2f(-1.0f, 0.45f);
	glVertex2f(-0.8f, 0.35f);    // x, y
	glVertex2f(-0.8f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(-0.8f, 0.4f);    // x, y
	glVertex2f(-0.8f, 0.35f);
	glVertex2f(0.8f, 0.35f);    // x, y
	glVertex2f(0.8f, 0.4f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.8f, 0.35f);    // x, y
	glVertex2f(-0.8f, 0.3f);
	glVertex2f(0.8f, 0.3f);    // x, y
	glVertex2f(0.8f, 0.35f);

	glEnd();
//nicher border
 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(-0.8f, -0.2f);    // x, y
	glVertex2f(-0.8f, -0.25f);
	glVertex2f(0.8f, -0.25f);    // x, y
	glVertex2f(0.8f,- 0.2f);

	glEnd();
	///////majher
	 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(-0.58f, 0.35f);    // x, y
	glVertex2f(-0.58f, -0.2f);
	glVertex2f(0.58f, -0.2f);    // x, y
	glVertex2f(0.58f, 0.35f);

	glEnd();
	 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(153, 77, 0); // Red

	glVertex2f(-0.55f, 0.35f);    // x, y
	glVertex2f(-0.55f, -0.2f);
	glVertex2f(0.55f, -0.2f);    // x, y
	glVertex2f(0.55f, 0.35f);

	glEnd();
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(204, 102, 0); // Red

	glVertex2f(-0.5f, 0.3f);    // x, y
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(0.5f, -0.2f);    // x, y
	glVertex2f(0.5f, 0.3f);

	glEnd();

 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.5f, 0.35f);    // x, y
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(0.5f, 0.3f);    // x, y
	glVertex2f(0.5f, 0.35f);

	glEnd();
	 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(128, 64, 0); // Red

	glVertex2f(-0.5f, 0.37f);    // x, y
	glVertex2f(-0.5f, 0.35f);
	glVertex2f(0.5f, 0.35f);    // x, y
	glVertex2f(0.5f, 0.37f);

	glEnd();
	 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.5f, 0.43f);    // x, y
	glVertex2f(-0.5f, 0.37f);
	glVertex2f(0.5f, 0.37f);    // x, y
	glVertex2f(0.5f, 0.43f);

	glEnd();
	 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(-0.57f, 0.45f);    // x, y
	glVertex2f(-0.5f, 0.41f);
	glVertex2f(0.5f, 0.41f);    // x, y
	glVertex2f(0.57f, 0.45f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(204, 102, 0); // Red

	glVertex2f(-0.0f, 0.8f);    // x, y
	glVertex2f(-0.6f, 0.45f);
	glVertex2f(0.6f,  0.45f);

	glEnd();
	glBegin(GL_TRIANGLES);              // Each set of 4 vertices form a quad
	glColor3ub(255, 153, 51); // Red

	glVertex2f(-0.0f, 0.75f);    // x, y
	glVertex2f(-0.45f, 0.49f);
	glVertex2f(0.45f,  0.49f);

	glEnd();
 glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(77, 38, 0); // Red

	glVertex2f(-0.6f, -.2f);    // x, y
	glVertex2f(-0.6f, -0.3f);
	glVertex2f(0.6f, -0.3f);    // x, y
	glVertex2f(0.6f, -.2f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.4f, 0.45f);    // x, y
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(-.34f, -0.2f);    // x, y
	glVertex2f(-.34f, .45f);

	glEnd();

glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.2f, 0.45f);    // x, y
	glVertex2f(-0.2f, -0.2f);
	glVertex2f(-.14f, -0.2f);    // x, y
	glVertex2f(-.14f, .45f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(-0.0f, 0.45f);    // x, y
	glVertex2f(-0.0f, -0.2f);
	glVertex2f(0.06f, -0.2f);    // x, y
	glVertex2f(0.06f, .45f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(0.2f, 0.45f);    // x, y
	glVertex2f(0.2f, -0.2f);
	glVertex2f(0.26f, -0.2f);    // x, y
	glVertex2f(0.26f, .45f);

	glEnd();
	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(179, 89, 0); // Red

	glVertex2f(0.4f, 0.45f);    // x, y
	glVertex2f(0.4f, -0.2f);
	glVertex2f(0.46f, -0.2f);    // x, y
	glVertex2f(0.46f, .45f);

	glEnd();
glPushMatrix();

glTranslatef( 0.0f,position,0.0f);
glPointSize(5.0);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(0.0f, 0.0f);    // x, y

	glEnd();
		// Draw a Red 1x1 Square centered at origin
	glBegin(GL_POINTS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red
	glVertex2f(-0.5f, 0.0f);    // x, y

	glEnd();

	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.5f);

	glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, 0.5f);

	glEnd();
glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, 0.0f);

	glEnd();
		glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, 0.5f);

	glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.5f, -0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, -0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.5f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, -0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.3f, -0.5f);

	glEnd();glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.3f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.7f, -0.5f);

	glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.7f, -0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.7f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.7f, 0.5f);

	glEnd();


glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, 0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f,- 0.3f);

	glEnd();


glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f, 0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, 0.0f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.0f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-.3f, 0.5f);

	glEnd();
	glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, 0.5f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f,- 0.3f);

	glEnd();

glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.0f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f,- 0.3f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f,- 0.0f);

	glEnd();
glBegin(GL_POINTS);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f,- 0.0f);

	glEnd();
glPopMatrix();

	CarBody1();
	//CarWheel();

}
//////////...................START WINDOW FUNCTION......................................................................
void startscreen(void)
{
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glClearColor(0.000, 0.900, 0.900,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(255,140,0);
    drawstring(200.0,700.0,0.0,"                              UNITED INTERNATIONAL UNIVERSITY");
    glColor3f(0,0,1);
    drawstring(200,650,0.0,"  PROJECT ON COMPUTER GRAPHICS : HISTORICAL TOUR OF LONDON");
    glColor3f(0.7,0.7,0.7);
    glColor3f(1,0,0);
    drawstring(450,530,0.0,"Course Instructor");
    drawstring(250,500,0.0,"                                          Md Ashiqur Rahman");
    drawstring(250,470,0.0,"                                    Course: CSI 422   Section: A");
    glColor3f(1,0.5,0);
    drawstring(100,400,0.0,"SUBMITTED BY:");
    glColor3f(0,0,0);
    drawstring(100,370,0.0,"1.Saad Tozibar Rahman                        011-172-176");
    drawstring(100,290,0.0,"2.Shayeed Hasan                                   011-172-169");
    drawstring(100,210,0.0,"3.Shahid Wasive                                    011-172-172");
    glColor3f(0,0,0);
    glColor3f(0,0,0);
    drawstring(400,80,0.0,"PRESS ENTER TO START");
    glFlush();
}
//................................................COMMAND WINDOW FUNCTION..............................................................
void controlsScreen()
{
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glClearColor(0.000, 0.900, 0.900,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,1);
    drawstring(370.0,700.0,0.0,"INSTRUCTIONS");
    glColor3f(1,0,0);
    drawstring(250.0,640.0,0.0,"Day View(Default Mode)");
    glColor3f(153,0,153);
    drawstring(600.0,640.0,0.0,"Press 'd'");
    glColor3f(1,0,0);
    drawstring(250.0,600.0,0.0,"Evening View");
    glColor3f(153,0,153);
    drawstring(600.0,600.0,0.0,"Press 't'");
    glColor3f(1,0,0);
    drawstring(250.0,560.0,0.0,"Night View");
    glColor3f(102,0,102);
    drawstring(600.0,560.0,0.0,"Press 'n'");
    glColor3f(0,0,1);
    drawstring(360.0,500.0,0.0,"Now Press 'Enter'");
    glFlush();
}
//.............................................................EXTRA...................................................................
void display()
{
    glPushMatrix();
    glTranslatef(translate_x,translate_y,translate_z);

    /*if(day==2)
    {
       nightMode();
    }
    else */if(day==1)
    {
        dayMode();
    }
  else if(day==2)
    {
        NightView();
    }
    else if(day==3)
    {
        EveningViewf();
    }
    glFlush();
    glutSwapBuffers();
}


//Main Display Function
void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if(flag==0){

        startscreen();

    }
    if(flag==1)
        controlsScreen();
        //controlsScreen();
    if(flag>1)
        display();

    glFlush();
    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
//-------- spin --------
if(key=='d')
{
    day=1;
}

else if(key=='n')
{
    day=2;
}
else if(key=='t')
{
    day=3;
}
else if(key=='r')
{
    rain=true;
}
else if(key=='e')
{
    rain=false;
}
else if(key=='c')
{
    carv=true;
}
else if(key=='v')
{
    carv=false;
}
else if(key=='p')
{
    planev=true;
}
else if(key=='o')
{
    planev=false;
}
else if(key==13)
{
    flag++;
    myDisplay();
}
else if(key=='h')
{
    flag=1;
    myDisplay();
}
else if(key==27)
{
    exit(0);
}
}


void SpecialKeys(int key, int x, int y)
{
    switch (key)
	{
		case GLUT_KEY_LEFT:
            if(translate_x<200)
            {
                translate_x+=5;
                glutPostRedisplay();
            }
			break;

		case GLUT_KEY_RIGHT:
            if(translate_x>-300)
            {
                translate_x-=5;
                glutPostRedisplay();
            }
			break;

        case GLUT_KEY_UP:
            spin-=5;
            if(spin>=360)
            {
                spin=0;
            }
            glutPostRedisplay();
			break;

        case GLUT_KEY_DOWN:
            spin+=5;
            if(spin<=360)
            {
                spin=0;
            }
            glutPostRedisplay();
			break;
	}
}
void sound()
{

    sndPlaySound("C:Users\\User\\Desktop\\New folder\\sound.wav",SND_ASYNC|SND_LOOP);

}
//.....................................................................MAIN FUNCTION.........................................................................


int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1366, 768);
glutInitWindowPosition (0,0);
glutCreateWindow ("LONDON TOUR");
//  glutTimerFunc(100, update, 0);
myInit();
glutDisplayFunc(myDisplay);
//glutReshapeFunc(reshape);
glutKeyboardFunc(keyboard);
glutSpecialFunc(SpecialKeys);
glutTimerFunc(100, update, 0);
glutTimerFunc(100, update2, 0);


sound();
   glutMainLoop();


   return 0;
}

