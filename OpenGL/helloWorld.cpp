// A Cpp code by Mushfiqur Rahman Abir AKA Abir-Tx
// Developer Profile: https://www.github.com/Abir-Tx
#include <iostream>
#include <gl/glew.h>
#include <gl/glut.h>

// Create the Display callback func
void display();

void reshape(int, int);

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	// Set the display mode
	glutInitDisplayMode(GLUT_RGB);

	// Setup Window Settings
	glutInitWindowPosition(200, 100);
	glutInitWindowSize(600, 400);

	// Create Window & Set title
	glutCreateWindow("Hello World OpenGL");

	// Call the display callback function
	glutDisplayFunc(display);

	// Call the reshape callback Function
	glutReshapeFunc(reshape);

	// Start the Main Execution loop to keep window alive
	glutMainLoop();

	return 0;
}

// Define the display function
void display()
{
	// Clear the previous Buffer
	glClear(GL_COLOR_BUFFER_BIT);
	// Reset matrix/co-ordinate system
	glLoadIdentity();

	// begin specifying opengl vertices
	glBegin(GL_TRIANGLES);

	glVertex2f(0.0, 5.0);
	glVertex2f(4.0, -3.0);
	glVertex2f(-4.0, -3.0);

	// end
	glEnd();

	// Display the drawing
	glFlush();
}

// Define the reshape function
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-10, 10, -10, 10);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}