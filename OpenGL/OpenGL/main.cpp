//======================================================
//
//					SOMMAIRE
//
//	1. Signatures et paramètres
//	2. Initialisation d'OpenGL
//	3. Création de la fenêtre
//	4. Chargement des fonctions de la librairie
//	5. Boucle principale (sortie: fermeture de fenêtre)
//		- Méthode de reception des inputs
//		- Application du rendu sur le back buffer.
//		- Swap des buffers ( back -> front )
//	6. Désallocation des ressources utilisées par la librairie.
//	7. Méthodes
//		- processInput : Récupération des inputs
//		- framebuffer_size_callback : Méthode appelée lors de la redimension de la fenêtre.
//
//
//======================================================


#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <time.h>

using namespace std;

//Prototypes
void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

//Paramètres
const unsigned int SCR_WIDTH = 640;
const unsigned int SCR_HEIGHT = 480;



int main()
{

	// Initialisation et configuration de la librairie.
	// ------------------------------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// Création de la fenêtre GLFW
	// ---------------------------
	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Space Invaders", NULL, NULL);
	if (window == NULL)
	{
		cout << "Failed to create GLFW window" << endl;
		glfwTerminate();
		return -1;
	}

	//Set la fenêtre actuelle comme contexte actuel, et initie le callback de framebuffer_size_callback
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
		//RGBA [0,1]
		glClearColor(0, 0, 0, 1);//Couleur du fond de la fenêtre
		glClear(GL_COLOR_BUFFER_BIT);
		


		// Il y a 2 buffers de rendu, un front et un back. Le front est celui affiché, et le back est celui sur lequel on applique le rendu.
		// A la fin, on les échange pour afficher le rendu.
		// -------------------------------------------------------------------------------
		glfwSwapBuffers(window);
		glfwPollEvents();
	}




	// Termine le programme, désalloue toutes les ressources de GLFW.
	// --------------------------------------------------------------
	glfwTerminate();
	return 0;
}

// Récupère tous les inputs
// ------------------------
void processInput(GLFWwindow *window)
{

	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
	{
		glfwSetWindowShouldClose(window, true);
	}
		
}

// Fonction qui recadre le viewport en fonction de la nouvelle taille de la fenêtre.
// ---------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions
	// x, y, width, height
	cout << "Redimension" << endl;
	glViewport(0, 0, width, height);
}