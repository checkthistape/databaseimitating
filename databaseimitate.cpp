#include <iostream>
#include "headers/databaseimitationclass.hpp"


int main()
{
	std::cout << "Hello, your program has started!" << std::endl;
	try {
		databaseimitating Object;

		string request;
		while (true)
		{
			cout << " > "; cin >> request;
			if (request == "*remove") { Object.removingfile(); }
			else if (request == "*help") { Object.instructions(); }
			else if (request == "*open") { Object.open(); }
			else if (request == "*fileexist") { Object.fileexist(); }
			else if (request == "*dbcreate") { Object.databasecreate(); }
			else if (request == "*add") { Object.add(); }
			else if (request == "*find") { Object.search(Object.input); }
			else if (request == "*showadress") { Object.getadresscout(); }
			else if (request == "*showfilename") { Object.showfilename(); }
			else if (request == "*eraseselfile") { Object.eraseselfile(); }
			else if (request == "*selectfile") { Object.selectfile(Object.input); }
			else if (request == "*changeadress") { Object.changeadress(Object.input); }
			//if (request == "*showfilename") { cout << "\nFile name: " << file.getfullfile() << std::endl; }
			else if (request == "*exit") { break; return 0; }
			//if (request == "*showadress") { cout << "\nAdress: " << Object.getadress() << std::endl; }
			else { std::cout << std::endl << "There is no command: " << request << "."<<std::endl <<"Maybe try again or write *help to check all available commands ^^" << std::endl << std::endl; }
		}
	}
	catch (int) {
		cout << "Daaaaamn! You have error, sorry for this code D:";
	}
	
	std::cout << "\n\nThe program has ended!" << std::endl;
	return 0;
}
/*
* TODO:
* 1. Add howto in console with gotoxy function
* 
* 

*/
