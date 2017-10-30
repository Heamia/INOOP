#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream inputFile;
	inputFile.open("input.txt");

	ofstream outputFile;
	outputFile.open("output.txt");

	if (inputFile.fail())
		cout << "Error opening the file.\n";

	const int MAXSIZE = 1024;

	string words[MAXSIZE];
	string str;

	for (int i = 0; (inputFile >> str) && (i < MAXSIZE); ++i) {
		words[i] = str;
		cout << words[i] << " " << i << " ";
	}
	inputFile.close();
	cout << endl;

	for (int i = MAXSIZE - 1; (outputFile << str) && (i >= 0); --i) {
		if (str.size() < MAXSIZE) {
			cout << words[i] << " " << i << " ";
		}
	}
	outputFile.close();
	cout << endl;

	system("pause");
	return 0;
}