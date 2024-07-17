#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>

namespace engine {

class Window {
public:
	Window(int w, int h, std::string name);
	~Window();

	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;

	bool shouldClose();
private:
	void init();

	const int height;
	const int width;

	std::string name;
	GLFWwindow* window;
};

}