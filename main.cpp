#include <iostream>
#include <string>
#include "hello.h"
#include "world.h"

int main() {
	int b;
	std::cout << "## roon ##" << std::endl << f_hello() << " " << f_world() << std::endl << "## end ###" << std::endl;
	std::cin >> b;
	return 0;
}
