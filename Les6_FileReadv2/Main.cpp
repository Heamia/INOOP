#include <iostream>
#include <fstream>
#include <string>

#define FILE "text-1.txt"

int main() {

	char ch;
	bool activeScript = false; 

	std::ifstream in_stream;
	in_stream.open(FILE);
	if (!in_stream)
	{
		std::cout << "Kan geen .txt bestand vinden..." << std::endl;
		exit(1);
	}

	std::ofstream out_stream[2];
	out_stream[0].open("text-2.txt");
	if (!out_stream[0])
	{
		std::cout << "Kan geen .txt bestand openen..." << std::endl;
		exit(1);
	}

	out_stream[1].open("text-3.txt");
	if (!out_stream[1])
	{
		std::cout << "Kan geen .txt bestand openen..." << std::endl;
		exit(1);
	}

	std::noskipws(in_stream);

	while (!in_stream.eof())
	{
		in_stream >> ch;
		if (ch == '.')
		{
			activeScript = !activeScript; 
		}
		out_stream[activeScript] << ch;
	}

	return 0;
}