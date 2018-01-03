#include <iostream>
#include "argparser.hpp"

int main(int argc, char** argv)
{
	ap::parser p(argc, argv);
	p.add("-c", "--config", "config file name");

	auto args = p.parse();

	std::cout << args["--config"] << std::endl;

	//system("pause");
}