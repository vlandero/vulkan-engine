#pragma once

#include <string>
#include <vector>

namespace engine {

class Pipeline {
public: 
	Pipeline(const std::string& vertFilePath, const std::string& fragFilePath);

private:
	static std::vector<char> readFile(const std::string& path);
		
	void createGraphicsPipeline(const std::string& vertFilePath, const std::string& fragFilePath);
};

}