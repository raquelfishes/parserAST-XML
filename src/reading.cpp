//============================================================================
// Name        : reading.cpp
// Author      : Raquel Peces
// Version     : 1.0
// Copyright   : --
// Description : Parser AST to XML
//============================================================================

#include <iostream>
#include <fstream>


using namespace std;

int main() {

	char cadena[128];
	   ifstream fe("exampleAST.txt");

	   while(!fe.eof()) {
		  fe.getline(cadena, 128);
		  //fe >> cadena;
	      cout << cadena << endl;
	   }
	   fe.close();

	   return 0;
}
