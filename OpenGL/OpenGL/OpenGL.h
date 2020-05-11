#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

using namespace std;


extern void initOpenGL();
extern void framebuffer_size_callback(GLFWwindow* window, int width, int height);
extern void processInput(GLFWwindow *window);