//======================================================
//
//					SOMMAIRE
//
//	1. Signatures et param�tres
//	2. Initialisation d'OpenGL
//	3. Cr�ation de la fen�tre
//	4. Chargement des fonctions de la librairie
//	5. Boucle principale (sortie: fermeture de fen�tre)
//		- M�thode de reception des inputs
//		- Application du rendu sur le back buffer.
//		- Swap des buffers ( back -> front )
//	6. D�sallocation des ressources utilis�es par la librairie.
//	7. M�thodes
//		- processInput : R�cup�ration des inputs
//		- framebuffer_size_callback : M�thode appel�e lors de la redimension de la fen�tre.
//
//
//======================================================


#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <time.h>

#include "OpenGL.h"

using namespace std;


//Param�tres
const unsigned int SCR_WIDTH = 640;
const unsigned int SCR_HEIGHT = 480;


int main()
{

	initOpenGL();


	// Cr�ation de la fen�tre GLFW
	// ---------------------------
	GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Space Invaders", NULL, NULL);
	if (window == NULL)
	{
		cout << "Failed to create GLFW window" << endl;
		glfwTerminate();
		return -1;
	}

	//Set la fen�tre actuelle comme contexte actuel, et initie le callback de framebuffer_size_callback
	//-------------------------------------------------------------------------------------------------
	glfwMakeContextCurrent(window);
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	// Charge tous les pointeurs de fonctions
	// ---------------------------------------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		cout << "Failed to initialize GLAD" << endl;
		return -1;
	}

	
	// Boucle de rendu
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// input
		processInput(window);

		// Rendu
		glClearColor(0, 0, 0, 1);
		glClear(GL_COLOR_BUFFER_BIT);
		
		
		





		glfwSwapBuffers(window);
		glfwPollEvents();
	}




	// Termine le programme, d�salloue toutes les ressources de GLFW.
	// --------------------------------------------------------------
	glfwTerminate();
	return 0;
}

