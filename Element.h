/*

#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED

#include "Library.h"
#include "Background.h"
#include "keyboard.h"

float e1 = .0001;


void update_Element_1(int value) {
	e1 -= .000009 ;
	if (e1 < -3) {
		e1 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_1, 1);

}
float e2 = .0001;


void update_Element_2(int value) {
	e2 -= .000012 ;
	if (e2 < -3.8) {
		e2 += 3.8;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_2, 1);

}
float e3 = .0001;


void update_Element_3(int value) {
	e3 -= .000015 ;
	if (e3 < -3.2) {
		e3 += 3.2;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_3, 1);

}
float e4 = .0001;


void update_Element_4(int value) {
	e4 -= .000029 ;
	if (e4 < -2.8) {
		e4 += 2.8;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_4, 1);

}
float e5 = .0001;


void update_Element_5(int value) {
	e5 -= .000037 ;
	if (e5 < -3) {
		e5 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_5, 1);

}
float e6 = .0001;


void update_Element_6(int value) {
	e6 -= .000045 ;
	if (e6 < -3) {
		e6 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_6, 1);

}
float e7 = .0001;


void update_Element_7(int value) {
	e7 -= .000055 ;
	if (e7 < -3) {
		e7 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_7, 1);

}
float e8 = .0001;


void update_Element_8(int value) {
	e8 -= .000065 ;
	if (e8 < -3) {
		e8 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_8, 1);

}

float e9 = .0001;


void update_Element_9(int value) {
	e9 -= .000075 ;
	if (e9 < -3) {
		e9 += 3;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed


	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(.1, update_Element_9, 1);

}



void Element ()
{

    glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
    glScalef(.7,.7,.7);
    glTranslatef(-.7,0,0);

    glPushMatrix();


    ///     Boom        1
    glPushMatrix();
    glTranslatef(0,e1+.3 ,0);


    glPushMatrix();

    if( e1 <= -1.8 && posx <= -.8 )
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(-.6,1.2,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);


        score = score - 1;
        cout << "My score is :" << score;


    }
    else
    {
        glTranslatef(-.6,1.2,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
    }


    glPopMatrix();
    glutTimerFunc(.2, update_Element_1, .0001);


    glPopMatrix();

///     Ice-cream       2
    glPushMatrix();
    glTranslatef(0,e2 +1.5 ,0);
    glPushMatrix();

    if( e2 <= -2.7 && posx <= -.6 )
    {

     glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(-.3,.7,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {
        glTranslatef(0,.7,0);
        glTranslatef(-.3,.2,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_2, .0001);




    glPopMatrix();


  /// Candy       3
    glPushMatrix();
     glTranslatef(0,e3+1.2,0);

    glPushMatrix();



    if( e3 <= -2.3 && posx <= -.4)
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);

        glTranslatef(.1,.6,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);

        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {

        glTranslatef(.1,.6,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_3, .0001);


    glPopMatrix();


    ///     Boom     4
    glPushMatrix();
    glTranslatef(0,e4+1.1 ,0);
    cout << "I am AN" << e4 << endl;
    cout << "I am X: " << posx << endl;

    glPushMatrix();

    if( e4 <= -1.8 && posx <= -.8 )
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(.4,.3,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);


        score = score - 1;
        cout << "My score is :" << score;


    }
    else
    {
        glTranslatef(.4,.3,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
    }


    glPopMatrix();
    glutTimerFunc(.2, update_Element_4, .0001);


    glPopMatrix();

  /// Ice-cream   5
    glPushMatrix();
    glTranslatef(0,e5+.6 ,0);
    glPushMatrix();

    if( e5 <= -1.8 && posx <= -.6 )
    {

     glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(.7,.7,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {
        glTranslatef(0,.7,0);
        glTranslatef(.7,.2,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_5, .0001);




    glPopMatrix();


 /// Candy       6
    glPushMatrix();
     glTranslatef(0,e6+1.2,0);

    glPushMatrix();



    if( e6 <= -2.3 && posx <= -.4)
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);

        glTranslatef(1,.4,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);

        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {

        glTranslatef(1,.4,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_6, .0001);


    glPopMatrix();





    ///     Boom       7
   glPushMatrix();
    glTranslatef(0,e7+.3 ,0);
    cout << "I am AN" << e7 << endl;
    cout << "I am X: " << posx << endl;

    glPushMatrix();

    if( e7 <= -1.8 && posx <= -.8 )
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(1.3,1.2,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);


        score = score - 1;
        cout << "My score is :" << score;


    }
    else
    {
        glTranslatef(1.3,1.2,0);
        //glScalef(.7,.7,.7);
        glColor3f(0,0,0);
        glRotatef(-60,.2,.7,0);
        glutSolidSphere(.09,20,20);
        glTranslatef(0,.08,0);

        glutSolidCube(.08);
        glTranslatef(0,.03,0);
        glColor3f(1,1,1);
        glScalef(.15,1,.1);
        glutSolidCube(.08);
    }


    glPopMatrix();
    glutTimerFunc(.2, update_Element_7, .0001);


    glPopMatrix();

    /// Ice-cream      8
  glPushMatrix();
    glTranslatef(0,e8+1.2 ,0);
    glPushMatrix();

    if( e8 <= -1.8 && posx <= -.6 )
    {

     glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);


        glTranslatef(1.7,.2,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {
        glTranslatef(1.7,.3,0);
        glScalef(.7,.7,.7);
        glColor3f(1,.9,1);
        glRotatef(60,.4,.3,0);
        glutSolidSphere(.09,20,20);
        glColor3f(1,.6,.5);
        glutSolidCone(.1,.3,10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_8, .0001);




    glPopMatrix();


 /// Candy       9
    glPushMatrix();
     glTranslatef(0,e9+.8,0);

    glPushMatrix();



    if( e9 <= -2.3 && posx <= -.4)
    {

        glColorMask(GL_FALSE,GL_FALSE,GL_FALSE,GL_FALSE);

        glTranslatef(2,.6,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);

        glColorMask(GL_TRUE,GL_TRUE,GL_TRUE,GL_TRUE);
    }
    else
    {

        glTranslatef(2,.6,0);
        glColor3f(1,0,0);
        glRotatef(60,.2,.7,0);

        glScalef(.1,.1,.1);
        glutSolidTorus(.2,.7 , 10,10);
    }

        glPopMatrix();
        glutTimerFunc(.2, update_Element_9, .0001);


    glPopMatrix();

glPopMatrix();
    glFlush();


   //glutTimerFunc(1, upadate_new, 3);
glPopMatrix();

}


#endif // ELEMENT_H_INCLUDED
*/
