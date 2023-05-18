#include "generation.h"

#include <iostream>
#include <ctime>
#include <cstdlib> 

int generation_function(std::string& per_name, std::ofstream& out_file, int& attem_count) {
	std::cout << "Enter your name:" << std::endl;
	std::cin >> per_name;
	out_file << per_name << ' ';
	attem_count = 0;
	const int max_value = 100;
	std::srand(std::time(nullptr));
	const int random_value = std::rand() % max_value;

	return random_value;
}