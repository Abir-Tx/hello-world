// A Cpp code by Mushfiqur Rahman Abir AKA Abir-Tx
// Developer Profile: https://www.github.com/Abir-Tx
#include <iostream>
#include <gl/glut.h>

// Create the Display callback func
void display();

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

	// Start the Main Execution loop to keep window alive
	glutMainLoop();

	return 0;
}

// Define the display function
void display()
{
}