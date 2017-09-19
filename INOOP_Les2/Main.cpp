#include <iostream>
#include <string>
#include "Mens.h"
#include "Student.h"
#include "Docent.h"

using namespace std;
//main, alles word hier opgevraagd en uitgevoerd
//Dmv uitleg van Lisa gemaakt
int main()
{
	Student mijnStudent(20, "Laura");
	Docent mijnDocent(28, "Leon");
	cout << "Student; " + mijnStudent.getNaam();
	cout << "leeftijd: ";
	cout << mijnStudent.getLeeftijd() << endl;
	cout << mijnStudent.naam;
	cout << " staat gemiddeld een ";
	cout << mijnStudent.getCijfer(6, 8, 5) << endl;
	cout << "Docent: " + mijnDocent.getNaam();
	cout << " leeftijd: ";
	cout << mijnDocent.getLeeftijd() << endl;
	cout << mijnDocent.naam;
	cout << " verdient per maand ";
	cout << mijnDocent.geldPerMaand(19.50, 152);
	cout << " euro.";
	return 0;
}