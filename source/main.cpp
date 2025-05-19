#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

void FramebufferSizeCallback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

int main(void)
{
	GLFWwindow* window;

	if (glfwInit() == NULL)
		std::cerr << "Error: failed to initialize glfw" << std::endl;

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	window = glfwCreateWindow(640, 480, "OpenGL", NULL, NULL);
	if (window == NULL)
	{
		std::cerr << "Error: failed to crete window" << std::endl;
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);
	glfwSetFramebufferSizeCallback(window, FramebufferSizeCallback);

	if (gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress)) == NULL)
	{
		std::cerr << "Error: failed to initialize glad" << std::endl;
		return -1;
	}

	glClearColor(0.1f, 0.2f, 0.3f, 1.0f);

	while (!glfwWindowShouldClose(window))
	{
		glfwSwapBuffers(window);
		glfwPollEvents();

		// Draw Calls here

		glClear(GL_COLOR_BUFFER_BIT);
	}

	glfwTerminate();
}