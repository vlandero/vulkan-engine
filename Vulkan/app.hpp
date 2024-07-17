#pragma once

#include "window.hpp"
#include "pipeline.hpp"

namespace engine {

class App {
public: 
	static constexpr int WIDTH = 800;
	static constexpr int HEIGHT = 600;

	void run();

private:
	Window engWindow{ WIDTH, HEIGHT, "Hello Vulkan" };
	Pipeline engPipeline{ "shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv" };
};
}