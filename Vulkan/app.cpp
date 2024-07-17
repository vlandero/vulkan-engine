#include "app.hpp"

namespace engine {
void App::run()
{
	while (!engWindow.shouldClose())
	{
		glfwPollEvents();
	}
}

}

