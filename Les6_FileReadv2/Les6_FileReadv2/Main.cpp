#include <iostream>
#include <fstream>
#include <string>

#define FILE "Deze PC\\Documenten\\School\\HKU\\text1.txt"

int main() {
	char ch;
	char ch2;
	std::ifstream in_stream; 
	in_stream.open(FILE);
	if (!in_stream) {
		std::cout << "probleem met inladen! " << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open("Deze PC\\Documenten\\School\\HKU\\textout.txt");  
	if (!out_stream) {
		std::cout << "probleem met outstream inladen! " << std::endl;
		exit(1);
	}

	bool skip = true;

	while (!in_stream.eof()) {
		in_stream >> ch; 
		in_stream >> ch2; 

		skip = !skip;

		if (!skip) {

			out_stream << ch;
		}
	}

	out_stream.close();
	in_stream.close();


	in_stream.close();

	char key;
	std::cin >> key;
	return 0;
}