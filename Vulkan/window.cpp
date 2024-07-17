#include "window.hpp"

namespace engine {

Window::Window(int w, int h, std::string name) : width{ w }, height{ h }, name{ name }
{
	init();
}

Window::~Window()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

bool Window::shouldClose()
{
	return glfwWindowShouldClose(window);
}

void Window::init()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
}

}