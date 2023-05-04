#include <iostream>
#include <fstream>
#include <string>

#include <cstdlib>
#include <ctime>

int main() {
	const std::string at_count = "high_scores.txt";
	std::ofstream out_file(at_count);
	if (!out_file.is_open()) {
		std::cout << "Failed to open file for write: " << at_count << "!" << std::endl;
		return -1;
	}

	std::string per_name;
	std::cout << "Enter your name:" << std::endl;
	std::cin >> per_name;
	out_file << per_name << ' ';
	int attem_count = 0;
	const int max_value = 100;
	std::srand(std::time(nullptr));
	const int random_value = std::rand() % 100;
	int number = 0;
	do {
		std::cout << "Enter number:" << std::endl;
		std::cin >> number;
		attem_count++;

		if (number > random_value) {
			std::cout << "less than" << std::endl;
		}
		else if (number < random_value) {
			std::cout << "greater than" << std::endl;
		}
		else if (number == random_value) {
			out_file << attem_count;
			std::cout << "you win! attempts = " << attem_count << std::endl;
            break;
		}
		else {
			std::cout << "maybe you make mistake!" << std::endl;
			
		}
	} while (true);

    out_file.close();

	std::ifstream in_file(at_count);
	if (!in_file.is_open()) {
		std::cout << "Failed to open file for read: " << at_count << "!" << std::endl;
		return -1;
	}
	std::cout << "High scores table:" << std::endl;
	in_file >> per_name;
	in_file >> attem_count;
	in_file.ignore();

	std::cout << per_name << '\t' << attem_count << std::endl;

	return 0;
}