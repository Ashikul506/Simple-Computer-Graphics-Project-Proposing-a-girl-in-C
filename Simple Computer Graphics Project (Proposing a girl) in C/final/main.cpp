#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include<math.h>
static float tx=0;
static float tx1=0;
static float tx2=0;
static float tx3=0;
static float tx4=0;
static float tx5=0;
static float ty=0;
static float ty1=0;
static float ty2=0;
static float ty3=0;
void circle(float r)
{
    int i;
    float theta;
    glBegin(GL_POLYGON);
    for(i=0;i<=360;i++)
    {
        glColor3f(0.0f, 0.0f, 0.0f);
        theta=i*3.1415/180;
        glVertex2f(r*cos(theta),r*sin(theta));
    }
    glEnd();
}
void circle2(float r)
{
    int i;
    float theta;
    glBegin(GL_POLYGON);
    for(i=0;i<=360;i++)
    {
        glColor3f(1.0f, 1.0f, 0.80f);
        theta=i*3.1415/180;
        glVertex2f(r*cos(theta),r*sin(theta));
    }
    glEnd();
}
void sun(float r)
{
    int i;
    float theta;
    glBegin(GL_POLYGON);
    for(i=0;i<=360;i++)
    {
        glColor3f(1.0f, 1.0f, .0f);
        theta=i*3.1415/180;
        glVertex2f(r*cos(theta),r*sin(theta));
    }
    glEnd();
}
void circle3(float r)
{
    int i;
    float theta;
    glBegin(GL_POLYGON);
    for(i=0;i<=360;i++)
    {
        glColor3f(1.0f, 0.0f, 0.0f);
        theta=i*3.1415/180;
        glVertex2f(r*cos(theta),r*sin(theta));
    }
    glEnd();
}
void circle4(float r)
{
    int i;
    float theta;
    glBegin(GL_POLYGON);
    for(i=0;i<=360;i++)
    {
        glColor3f(0.2f, 0.2f, 1.0f);
        theta=i*3.1415/180;
        glVertex2f(r*cos(theta),r*sin(theta));
    }
    glEnd();
}
void building1()
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, .6f);
        glVertex3d(-50,40, 0.0);
        glVertex3d(-40,40, 0.0);
        glVertex3d(-40,10, 0.0);
        glVertex3d(-50,10, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, .2f);
        glVertex3d(-46,37, 0.0);
        glVertex3d(-43,37, 0.0);
        glVertex3d(-43,34, 0.0);
        glVertex3d(-46,34, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, .2f);
        glVertex3d(-46,27, 0.0);
        glVertex3d(-43,27, 0.0);
        glVertex3d(-43,24, 0.0);
        glVertex3d(-46,24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, .2f);
        glVertex3d(-46,17, 0.0);
        glVertex3d(-43,17, 0.0);
        glVertex3d(-43,14, 0.0);
        glVertex3d(-46,14, 0.0);

    glEnd();
glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-50,40, 0.0);
        glVertex3d(-40,40, 0.0);
        glVertex3d(-50,30, 0.0);
        glVertex3d(-40,30, 0.0);
        glVertex3d(-50,20, 0.0);
        glVertex3d(-40,20, 0.0);

    glEnd();
}
void building2()
{
    glBegin(GL_QUADS);
    glColor3f(0.376f, 0.376f, .376f);
        glVertex3d(-35,30, 0.0);
        glVertex3d(-20,30, 0.0);
        glVertex3d(-20,10, 0.0);
        glVertex3d(-35,10, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-33,26, 0.0);
        glVertex3d(-31,26, 0.0);
        glVertex3d(-31,24, 0.0);
        glVertex3d(-33,24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-28,26, 0.0);
        glVertex3d(-26,26, 0.0);
        glVertex3d(-26,24, 0.0);
        glVertex3d(-28,24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-23,26, 0.0);
        glVertex3d(-21,26, 0.0);
        glVertex3d(-21,24, 0.0);
        glVertex3d(-23,24, 0.0);

    glEnd();
glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-33,17, 0.0);
        glVertex3d(-31,17, 0.0);
        glVertex3d(-31,15, 0.0);
        glVertex3d(-33,15, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-28,17, 0.0);
        glVertex3d(-26,17, 0.0);
        glVertex3d(-26,15, 0.0);
        glVertex3d(-28,15, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-23,17, 0.0);
        glVertex3d(-21,17, 0.0);
        glVertex3d(-21,15, 0.0);
        glVertex3d(-23,15, 0.0);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-35,30, 0.0);
        glVertex3d(-20,30, 0.0);
        glVertex3d(-35,20, 0.0);
        glVertex3d(-20,20, 0.0);
        glVertex3d(-25,30, 0.0);
        glVertex3d(-25,10, 0.0);

    glEnd();
}
void building3()
{
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.4f, 1.0f);
        glVertex3d(-15,40, 0.0);
        glVertex3d(0,40, 0.0);
        glVertex3d(0,10, 0.0);
        glVertex3d(-15,10, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.4f, 0.4f, 1.0f);
        glVertex3d(0,30, 0.0);
        glVertex3d(15,30, 0.0);
        glVertex3d(15,10, 0.0);
        glVertex3d(0,10, 0.0);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.20f);
        glVertex3d(-15,40, 0.0);
        glVertex3d(0,40, 0.0);
        glVertex3d(-15,30, 0.0);
        glVertex3d(0,30, 0.0);
        glVertex3d(-15,20, 0.0);
        glVertex3d(0,20, 0.0);

    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(0,30, 0.0);
        glVertex3d(0,10, 0.0);
        glVertex3d(0,30, 0.0);
        glVertex3d(15,30, 0.0);
        glVertex3d(0,20, 0.0);
        glVertex3d(15,20, 0.0);

    glEnd();
}
void building4()
{
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.8f, 0.4f);
        glVertex3d(20,30, 0.0);
        glVertex3d(35,30, 0.0);
        glVertex3d(35,10, 0.0);
        glVertex3d(20,10, 0.0);

    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(24,27, 0.0);
        glVertex3d(27,27, 0.0);
        glVertex3d(27,24, 0.0);
        glVertex3d(24,24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(29,27, 0.0);
        glVertex3d(32,27, 0.0);
        glVertex3d(32,24, 0.0);
        glVertex3d(29,24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(24,18, 0.0);
        glVertex3d(27,18, 0.0);
        glVertex3d(27,15, 0.0);
        glVertex3d(24,15, 0.0);

    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(29,18, 0.0);
        glVertex3d(32,18, 0.0);
        glVertex3d(32,15, 0.0);
        glVertex3d(29,15, 0.0);

    glEnd();

}
void tree1()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.2f, 0.0f, 0.0f);
        glVertex3d(40,10, 0.0);
        glVertex3d(43,10, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(37,20, 0.0);
        glVertex3d(38,20, 0.0);
        glVertex3d(38,23, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(38,23, 0.0);
        glVertex3d(39,22, 0.0);
        glVertex3d(39,25, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(39,25, 0.0);
        glVertex3d(40,25, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(36,24, 0.0);
        glVertex3d(36,23, 0.0);
        glVertex3d(37,25, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(37,25, 0.0);
        glVertex3d(38,24, 0.0);
        glVertex3d(38,27, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(38,27, 0.0);
        glVertex3d(39,26, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(37,29, 0.0);
        glVertex3d(38,29, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(43,29, 0.0);
        glVertex3d(42,29, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(44,23, 0.0);
        glVertex3d(45,24, 0.0);
        glVertex3d(44,26, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(44,26, 0.0);
        glVertex3d(43,25, 0.0);
        glVertex3d(43,27, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(43,27, 0.0);
        glVertex3d(42,27, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(44,20, 0.0);
        glVertex3d(43,20, 0.0);
        glVertex3d(43,23, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(42,22, 0.0);
        glVertex3d(43,23, 0.0);
        glVertex3d(43,25, 0.0);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(43,25, 0.0);
        glVertex3d(42,25, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.6f, 0.0f);
        glVertex3d(40,30, 0.0);
        glVertex3d(39,32, 0.0);
        glVertex3d(40,32, 0.0);
        glVertex3d(41,33, 0.0);
        glVertex3d(41,32, 0.0);
        glVertex3d(42,33, 0.0);
        glVertex3d(40,30, 0.0);
    glEnd();
}
void tree2()
{
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.20f, 0.0f);
        glVertex3d(43,10, 0.0);
        glVertex3d(45,10, 0.0);
        glVertex3d(48,20, 0.0);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(48,20, 0.0);
        glVertex3d(44,15, 0.0);
        glVertex3d(48,20, 0.0);
        glVertex3d(45,19, 0.0);
        glVertex3d(48,20, 0.0);
        glVertex3d(46,21, 0.0);
        glVertex3d(48,20, 0.0);
        glVertex3d(49,15, 0.0);
        glVertex3d(48,20, 0.0);
        glVertex3d(50,19, 0.0);
        glVertex3d(48,20, 0.0);
        glVertex3d(49,21, 0.0);
    glEnd();

}
void foot1()
{
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.50196f, 0.0f);
        glVertex3d(-50,10, 0.0);
        glVertex3d(50,10, 0.0);
        glVertex3d(50,-5, 0.0);
        glVertex3d(-50,-5, 0.0);

    glEnd();
    int i;
    for(i=-50;i<=50;i=i+5)
    {
        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(i,10, 0.0);
        glVertex3d(i,-5, 0.0);

    glEnd();
    }
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-50,3, 0.0);
        glVertex3d(50,3, 0.0);
    glEnd();
    glPushMatrix();
    glTranslated(33,3,1);
    circle2(1);
    glPopMatrix();
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(32,2, 0.0);
        glVertex3d(34,2, 0.0);
        glVertex3d(34,-1, 0.0);
        glVertex3d(32,-1, 0.0);

    glEnd();
    glBegin(GL_QUADS);
   glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(32,-4, 0.0);
        glVertex3d(34,-4, 0.0);
        glVertex3d(34,-1, 0.0);
        glVertex3d(32,-1, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(32,2, 0.0);
        glVertex3d(30,0, 0.0);
        glVertex3d(34,2, 0.0);
        glVertex3d(36,0, 0.0);
    glEnd();

    glPushMatrix();
    glTranslated(37,0,1);
    circle2(1);
    glPopMatrix();
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(36,-1, 0.0);
        glVertex3d(38,-1, 0.0);
        glVertex3d(38,-2, 0.0);
        glVertex3d(36,-2, 0.0);

    glEnd();
    glBegin(GL_QUADS);
   glColor3f(1.0f, 0.0f, 1.0f);
        glVertex3d(36,-2, 0.0);
        glVertex3d(38,-2, 0.0);
        glVertex3d(38,-4, 0.0);
        glVertex3d(36,-4, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(36,-1, 0.0);
        glVertex3d(35,0, 0.0);
        glVertex3d(38,-1, 0.0);
        glVertex3d(39,0, 0.0);
        glVertex3d(39,0, 0.0);
        glVertex3d(39,2, 0.0);
        glVertex3d(39,0, 0.0);
        glVertex3d(42,2, 0.0);
    glEnd();
     if(tx5<=.5)
    {
        tx5=tx5+.025;
    }
    else
        {
            tx5=0;
        }
        glutPostRedisplay();
    glPushMatrix();
    glTranslatef(tx5,0,0);
    glTranslated(39,3,1);
    circle2(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx5,0,0);
    glTranslated(42,3,1);
    circle(1);
    glPopMatrix();

}
void road()
{
     glBegin(GL_QUADS);
     glColor3f(0.0f, 0.0f, 0.20f);
        glVertex3d(-50,-5, 0.0);
        glVertex3d(50,-5, 0.0);
        glVertex3d(50,-35, 0.0);
        glVertex3d(-50,-35, 0.0);

    glEnd();
    int i;
    for(i=-50;i<=50;i=i+20)
    {
        glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(i,-20, 0.0);
        glVertex3d(i+10,-20, 0.0);

    glEnd();
    }
}
void foot2()
{
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.50196f, 0.0f);
        glVertex3d(-50,-35, 0.0);
        glVertex3d(50,-35, 0.0);
        glVertex3d(50,-40, 0.0);
        glVertex3d(-50,-40, 0.0);

    glEnd();
    int i;
    for(i=-50;i<=50;i=i+5)
    {
        glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(i,-35, 0.0);
        glVertex3d(i,-40, 0.0);

    glEnd();
    }

}

void car()
{

    if(tx<=70)
    {
        tx=tx+.2;
    }
    else
        {
            tx=-80;
        }
        glutPostRedisplay();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(-80+tx,-25, 0.0);
        glVertex3d(-60+tx,-25, 0.0);
        glVertex3d(-60+tx,-30, 0.0);
        glVertex3d(-80+tx,-30, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3d(-75+tx,-21, 0.0);
        glVertex3d(-65+tx,-21, 0.0);
        glVertex3d(-65+tx,-25, 0.0);
        glVertex3d(-75+tx,-25, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-74+tx,-22, 0.0);
        glVertex3d(-71+tx,-22, 0.0);
        glVertex3d(-71+tx,-24, 0.0);
        glVertex3d(-74+tx,-24, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-69+tx,-22, 0.0);
        glVertex3d(-66+tx,-22, 0.0);
        glVertex3d(-66+tx,-24, 0.0);
        glVertex3d(-69+tx,-24, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.627f, 0.627f, 0.627f);
        glVertex3d(-80+tx,-28, 0.0);
        glVertex3d(-60+tx,-28, 0.0);
        glVertex3d(-70+tx,-22, 0.0);
        glVertex3d(-70+tx,-25, 0.0);

    glEnd();
    glPushMatrix();
    glTranslatef(tx,0,0);
    glTranslated(-75,-30,1);
    circle(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx,0,0);
    glTranslated(-65,-30,1);
    circle(1);
    glPopMatrix();

}
void bus()
{

    if(tx1>-75)
    {
        tx1=tx1-.3;
    }
    else
        {
            tx1=80;
        }
        glutPostRedisplay();
    glBegin(GL_QUADS);
        glColor3f(0.75f, 0.75f, 0.75f);
        glVertex3d(55+tx1,-7, 0.0);
        glVertex3d(80+tx1,-7, 0.0);
        glVertex3d(80+tx1,-17, 0.0);
        glVertex3d(55+tx1,-17, 0.0);

    glEnd();
    int i;
    for (i=56;i<77;i=i+5)
    {
        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(i+tx1,-9, 0.0);
        glVertex3d(i+2+tx1,-9, 0.0);
        glVertex3d(i+2+tx1,-11, 0.0);
        glVertex3d(i+tx1,-11, 0.0);

    glEnd();
    }
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(55+tx1,-13, 0.0);
        glVertex3d(80+tx1,-13, 0.0);

    glEnd();
    glPushMatrix();
    glTranslatef(tx1,0,0);
    glTranslated(62,-17,1);
    circle(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx1,0,0);
    glTranslated(73,-17,1);
    circle(1);
    glPopMatrix();

}
void girl()
{
    glPushMatrix();
    glTranslated(23,5,1);
    circle2(1);
    glPopMatrix();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(22,4, 0.0);
        glVertex3d(24,4, 0.0);
        glVertex3d(24,1, 0.0);
        glVertex3d(22,1, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(1.0f, 0.0f, 0.498f);
        glVertex3d(22,1, 0.0);
        glVertex3d(24,1, 0.0);
        glVertex3d(24,-3, 0.0);
        glVertex3d(22,-3, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(22,4, 0.0);
        glVertex3d(20,2, 0.0);
        glVertex3d(24,4, 0.0);
        glVertex3d(26,2, 0.0);

    glEnd();
}
void boy()
{
    if(tx2>-55 && tx2<=33)
    {
        tx2=tx2+.1;
    }
    else
    {
        if(ty<45)
    {
        ty=ty+.1;
    }
    glutPostRedisplay();
        glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-19,11+ty, 0.0);
        glVertex3d(-11,11+ty, 0.0);
        glVertex3d(-11,7+ty, 0.0);
        glVertex3d(-19,7+ty, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-18,10+ty, 0.0);
        glVertex3d(-17,9+ty, 0.0);
        glVertex3d(-16,10+ty, 0.0);
        glVertex3d(-17,9+ty, 0.0);
        glVertex3d(-17,9+ty, 0.0);
        glVertex3d(-17,8+ty, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(-13,10+ty, 0.0);
        glVertex3d(-13,8+ty, 0.0);
        glVertex3d(-13,10+ty, 0.0);
        glVertex3d(-12,8+ty, 0.0);
        glVertex3d(-12,10+ty, 0.0);
        glVertex3d(-12,8+ty, 0.0);

    glEnd();
    }
        glutPostRedisplay();
    glPushMatrix();
    glTranslatef(tx2,0,0);
    glTranslated(-53,6,1);
    circle2(1);
    glPopMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4f, 1.0f, 0.4f);
        glVertex3d(-55+tx2,5, 0.0);
        glVertex3d(-51+tx2,5, 0.0);
        glVertex3d(-51+tx2,1, 0.0);
        glVertex3d(-55+tx2,1, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-55+tx2,1, 0.0);
        glVertex3d(-53+tx2,1, 0.0);
        glVertex3d(-54+tx2,-4, 0.0);
        glVertex3d(-55+tx2,-4, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-51+tx2,1, 0.0);
        glVertex3d(-53+tx2,1, 0.0);
        glVertex3d(-52+tx2,-4, 0.0);
        glVertex3d(-51+tx2,-4, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(-55+tx2,5, 0.0);
        glVertex3d(-57+tx2,1, 0.0);
        glVertex3d(-51+tx2,5, 0.0);
        glVertex3d(-49+tx2,1, 0.0);

    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(-49+tx2,1, 0.0);
        glVertex3d(-48+tx2,1, 0.0);
        glVertex3d(-47+tx2,2, 0.0);
        glVertex3d(-46+tx2,1, 0.0);
        glVertex3d(-45+tx2,1, 0.0);
        glVertex3d(-46+tx2,0, 0.0);
        glVertex3d(-45+tx2,-1, 0.0);
        glVertex3d(-47+tx2,0, 0.0);
        glVertex3d(-49+tx2,-1, 0.0);
        glVertex3d(-48+tx2,0, 0.0);
        glVertex3d(-49+tx2,1, 0.0);

    glEnd();

}
void boy1()
{


    glPushMatrix();
    glTranslated(13,6,1);
    circle2(1);
    glPopMatrix();
    glBegin(GL_QUADS);
        glColor3f(0.4f, 1.0f, 0.4f);
        glVertex3d(11,5, 0.0);
        glVertex3d(15,5, 0.0);
        glVertex3d(15,1, 0.0);
        glVertex3d(11,1, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(15,1, 0.0);
        glVertex3d(13,1, 0.0);
        glVertex3d(14,-4, 0.0);
        glVertex3d(15,-4, 0.0);

    glEnd();
    glBegin(GL_QUADS);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(11,1, 0.0);
        glVertex3d(13,1, 0.0);
        glVertex3d(12,-4, 0.0);
        glVertex3d(11,-4, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(0.0f, 0.0f, 0.0f);
        glVertex3d(15,5, 0.0);
        glVertex3d(17,1, 0.0);
        glVertex3d(11,5, 0.0);
        glVertex3d(9,1, 0.0);

    glEnd();

}
void heart1()
{
    if(tx3<5)
    {
        tx3=tx3+.1;
    }
    glutPostRedisplay();
    glPushMatrix();
    glTranslatef(tx3,0,0);
    glTranslated(12,8,1);
    circle3(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx3,0,0);
    glTranslated(14,8,1);
    circle3(1);
    glPopMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(11+tx3,8, 0.0);
        glVertex3d(15+tx3,8, 0.0);
        glVertex3d(13+tx3,6, 0.0);

    glEnd();
       if(tx3>=5.5)
    {
        foot1();
        boy1();
        girl();
        if(ty1<45)
    {
        ty1=ty1+.1;
    }
    glutPostRedisplay();
    glPushMatrix();
    glTranslatef(0,ty1,0);
    glTranslated(17,8,1);
    circle3(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,ty1,0);
    glTranslated(19,8,1);
    circle3(1);
    glPopMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(17,8+ty1, 0.0);
        glVertex3d(21,8+ty1, 0.0);
        glVertex3d(19,6+ty1, 0.0);

    glEnd();
    }

}
void heart2()
{
    if(tx4>-5)
    {
        tx4=tx4-.1;
    }
    glutPostRedisplay();
    glPushMatrix();
    glTranslatef(tx4,0,0);
    glTranslated(22,8,1);
    circle3(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(tx4,0,0);
    glTranslated(24,8,1);
    circle3(1);
    glPopMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(21+tx4,8, 0.0);
        glVertex3d(25+tx4,8, 0.0);
        glVertex3d(23+tx4,6, 0.0);

    glEnd();
    if(tx4<=-5)
    {
        foot1();
        boy1();
        girl();
        if(ty2<45)
    {
        ty2=ty2+.1;
    }
    glutPostRedisplay();
    glPushMatrix();
    glTranslatef(0,ty2,0);
    glTranslated(17,8,1);
    circle3(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,ty2,0);
    glTranslated(19,8,1);
    circle3(1);
    glPopMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(16,8+ty2, 0.0);
        glVertex3d(20,8+ty2, 0.0);
        glVertex3d(18,6+ty2, 0.0);

    glEnd();
    }

}
void heart3()
{
        if(ty3<45)
    {
        ty3=ty3+.1;
    }
    glutPostRedisplay();
    glPushMatrix();
    glTranslatef(0,ty3,0);
    glTranslated(12,8,1);
    circle3(1);
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,ty3,0);
    glTranslated(14,8,1);
    circle3(1);
    glPopMatrix();
    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(11,8+ty3, 0.0);
        glVertex3d(15,8+ty3, 0.0);
        glVertex3d(13,6+ty3, 0.0);

    glEnd();
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3d(13,8+ty3, 0.0);
        glVertex3d(12,7+ty3, 0.0);
        glVertex3d(14,7+ty3, 0.0);
        glVertex3d(12,7+ty3, 0.0);
        glVertex3d(14,7+ty3, 0.0);
        glVertex3d(13,6+ty3, 0.0);


    glEnd();


}
void flower()
{
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(18,1, 0.0);
        glVertex3d(19,1, 0.0);
        glVertex3d(20,2, 0.0);
        glVertex3d(21,1, 0.0);
        glVertex3d(22,1, 0.0);
        glVertex3d(21,0, 0.0);
        glVertex3d(22,-1, 0.0);
        glVertex3d(20,0, 0.0);
        glVertex3d(18,-1, 0.0);
        glVertex3d(19,0, 0.0);
        glVertex3d(18,1, 0.0);

    glEnd();
}
void flower1()
{
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3d(18,-3, 0.0);
        glVertex3d(19,-3, 0.0);
        glVertex3d(20,-2, 0.0);
        glVertex3d(21,-3, 0.0);
        glVertex3d(22,-3, 0.0);
        glVertex3d(21,-4, 0.0);
        glVertex3d(22,-5, 0.0);
        glVertex3d(20,-4, 0.0);
        glVertex3d(18,-5, 0.0);
        glVertex3d(19,-4, 0.0);
        glVertex3d(18,-3, 0.0);

    glEnd();
}

void keyboard(unsigned char key, int x, int y)
{

	switch (key) {
		case 's':
		    glPushMatrix();
 glTranslated(35,35,1);
 sun(3);
 glPopMatrix();
 building1();
 building2();
 building3();
 building4();
 tree1();
 tree2();
 foot1();
 road();
 foot2();
 glPushMatrix();
 glTranslatef(tx,0,0);
 car();
 glPopMatrix();
 glPushMatrix();
 glTranslatef(tx1,0,0);
 bus();
 glPopMatrix();
 girl();
 glPushMatrix();
 glTranslatef(tx2,0,0);
 boy();
 glPopMatrix();


			break;

		case 'y':

		    glPushMatrix();
 glTranslated(35,35,1);
 sun(3);
 glPopMatrix();
 building1();
 building2();
 building3();
 building4();
 tree1();
 tree2();
 foot1();
 road();
 foot2();
 glPushMatrix();
 glTranslatef(tx,0,0);
 car();
 glPopMatrix();
 glPushMatrix();
 glTranslatef(tx1,0,0);
 bus();
 glPopMatrix();
 girl();
 boy1();
 heart1();
 heart2();
 flower();

			break;

			case 'n':

		    glPushMatrix();
 glTranslated(35,35,1);
 sun(3);
 glPopMatrix();
 building1();
 building2();
 building3();
 building4();
 tree1();
 tree2();
 foot1();
 road();
 foot2();
 glPushMatrix();
 glTranslatef(tx,0,0);
 car();
 glPopMatrix();
 glPushMatrix();
 glTranslatef(tx1,0,0);
 bus();
 glPopMatrix();
 girl();
 boy1();
 heart3();
 flower1();

			break;

	  default:
			break;
	}
	glFlush();//force execution of Gl commands

}


void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);  //sets the color value to clear buffer
    glOrtho(-50,50,-40,40,-100,100); //left,right,bottom,top, near, far
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT); //clear buffer, buffer_bit indicates the buffers currently enabled for color writing
                                  // It can be any type Gl_POINT,_LINE anti clk
                                  //glColor3f(0.0f, 0.0f, 0.0f);

}
int main()
{
    PlaySound("encode20181207231332.wav", NULL, SND_FILENAME| SND_ASYNC);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400,400); // Size of the window
    glutInitWindowPosition(700, 100); // location of the window
    glutCreateWindow("Final Project"); // Create window with this name
    init(); // call initialize function
    glutDisplayFunc(myDisplay); // call display function
    glutKeyboardFunc(keyboard);
    glutMainLoop();//ager command gulo k execute kore
    return 0;
}
