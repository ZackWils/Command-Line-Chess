#pragma once
#include <iostream>

int main() {

	for (int i = 0; i < 200; i++)
	{
		std::cout << i << ": " << (char)i << std::endl;
	}

	return 0;
}