#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
// #include <bits/stdc++.h>
using namespace std;

class databaseimitating {
private:
	string _Name;
	string _Lastname;
	string _Job;
	string _Salary;

	string _filename;

	string _extension = ".txt";
	string _file;
	string _documents = "C:\\Users\\Public\\Documents\\";
	string _adress = _documents + _file;


public:
	string input;
	int line = 1;

	int id = 0;
	int damn = 8;

	/*.~~~~~~~~~.Checking.~~~~~~~~~*/
	string getadress() { return _adress; }
	string getfile() { return _file; }
	void showfilename()
	{
		if (getfile() == "") { std::cout << "Your file does not exist or did not selected, so you can create new or select." << std::endl; }
		else { std::cout << "Filename: " << getfile() << std::endl; }

	}
	void getadresscout() { std::cout << _adress << std::endl; }
	void changeadress(string adress)
	{
		std::cout << "Type your adress where you want to place your file." << std::endl;
		cin >> adress;
		if (_file != "") { _adress = adress + "\\" + _file; }
		else { _adress = adress + "\\" + _file; }
	}
	void selectfile(string file)
	{
		std::cout << "Type your filename which you want to select." << std::endl;
		cin >> file;
		size_t found = file.find(_extension);
		if (_file == "") {
			if (found != string::npos) { _file = file; }
			else { _file = file + _extension; }
			_adress = _adress + _file;
			std::cout << "Your file " << _file << " has been selected" << std::endl;
		}
		//else { _file = file + _extension; }
	}
	void fileexist()
	{
		ifstream filex(_adress);
		if (filex.good() == true) { cout << "\nFile " << _file << " on adress " << _adress << " exists.\n"; }
		else { cout << "\nFile " << _file << " does not exist\n"; }
	}
	bool fileexistbool()
	{
		ifstream filex(_adress);
		if (filex.good() == true) { return true; }
		else { return false; }
	}
	void instructions()
	{
		cout << "\n Type *dbcreate to create a new file";
		cout << "\n Type *open to open the created database";
		cout << "\n Type *fileexist to check for an existing file.";
		cout << "\n Type *remove to remove the file.";
		cout << "\n Type *showfilename to show the file name";
		cout << "\n Type *showadress to show the address of the file";
		cout << "\n Type *changeadress to change the address of your directory";
		cout << "\n Type *selectfile to choose your file against creating";
		cout << "\n Type *eraseselfile to erase the selected file";
		cout << "\n Type *changeext to change the default extension (which is .txt)";
		cout << "\n Type *exit to exit";
		cout << "\n\n .~~~~~~~~~~~~~~~~~~~.Requests to db.~~~~~~~~~~~~~~~~~~~.\n";
		cout << "\n Type *structure to Type a structure for db (>_<) ^^this currently does not work, sorry..!";
		cout << "\n Type *add to insert a new information to db";
		cout << "\n Type *delete to delete an information from db";
		cout << "\n Type *find to find information from db";
		cout << "\n Type *replace to delete information from db" << std::endl << std::endl;

	}
	/*.~~~~~~~~~.Action.~~~~~~~~~*/
	void databasecreate() {
		cout << " Type a name of database you want to create: ";
		string name;
		cin >> name;
		setfilename(name);

		if (fileexistbool() == false)
		{
			creatingfile();
			if (fileexistbool() == true) { cout << "\nDatabase " << _file << " was created on adress " << _adress << std::endl; }
			else { cout << "\nError!\n"; }
		}
		else {
			std::cout << " Filename " << _file << " already exists, use another name." << std::endl;
		}

	}

	void setfilename(string filename) { _filename = filename;	_file = filename + _extension; _adress = _adress + _file; }

	void creatingfile() { ofstream{ _adress }; }

	void eraseselfile() { _file = ""; }

	void open()
	{
		size_t f = _adress.find(_extension);
		if (f != string::npos)
		{
			fstream filex(_adress, ios::in);
			string data;
			
			if (filex.good() and filex.is_open())
			{
				std::cout << std::endl << "File has opened on adress: " << _adress << std::endl;
				std::cout << "\n*.~~~~~~~~~~~~~~.*.~~~~~~~~~~~~~~.*" << std::endl;
				while (getline(filex, data)) { cout << line++ << " \t" << data << endl; }
				std::cout << "*.~~~~~~~~~~~~~~.*.~~~~~~~~~~~~~~.*\n" << std::endl;
			}
			line = 0;
			filex.close();
		}
		else { std::cout << "You did not select file or create it, try to do it and then return to the command!" << std::endl; }


	}

	void removingfile()
	{
		const char* c_adress = _adress.c_str();

		if (fileexistbool() == false) { cout << "\nFile does not exist\n"; }

		while (fileexistbool() == true)
		{
			std::remove(c_adress);
			if (fileexistbool() == false) { cout << "\nFile on adress " << _adress << " deleted successfuly!\n"; break; }
		}
	}
	unsigned int file_length(string filename) // finding a length of file (quantity of characters in it)
	{
		ifstream infile(filename.c_str());
		unsigned int file_length = 0;
		while (infile.get() != EOF) { file_length++; }
		infile.close();
		return file_length;
	}
	/*.~~~~~~~~~.Db actions.~~~~~~~~~*/
	void writing() {
		if (fileexistbool() == true) 
		{
			ofstream filex;
			filex.open(_adress, ios::app);

			if (getadress() != "")
			{
				if (filex.is_open())
				{

					std::cout << "Name:\t"; cin >> _Name;
					std::cout << "Lastname:\t"; cin >> _Lastname;
					std::cout << "Job:\t"; cin >> _Job;
					std::cout << "Salary:\t"; cin >> _Salary;
					cout << "## ";

					string info;
					string endl = "\n";
					string structt = "";
					for (int x = 0; x < 5; x++) {
						if (x == 0) { info = ".~~~~~.~~~~~." + endl + "id:" + to_string(++id) + endl; }
						if (x == 1) { info = "Name:" + _Name + endl; }
						if (x == 2) { info = "Lastname:" + _Lastname + endl; }
						if (x == 3) { info = "Job:" + _Job + endl; }
						if (x == 4) { info = "Salary:" + _Salary + endl; }

						filex << info;
					}
					std::cout << std::endl << std::endl;
					// cin >> data;

				}

				else {
					std::cout << "Your file was not create because: 1. maybe, your adress is invalid, adress: " << _adress << "\n\n";
				}
			}
		}
		else { cout << "Your adress does not exist, try create a new file and then add info\n"; }
	}
	void add() {
		int request_numb;
		std::cout << "Type the quantity of request to database: "; cin >> request_numb;

		for (int j = 0; j < request_numb; j++) {
			writing();
		}
	}
	void search(string input) {
		std::cout << "Type what do you want to find: "; cin >> input;
		if (_file != "") {
			fstream file(_adress, ios::in | ios::out);
			string data;
			
			if (file.is_open()) {
				std::cout << "Positions of "<<input << " are: " << std::endl;
				while (/*file.eof() != true*/getline(file,data))
				{
					line++;
					size_t found = data.find(input);
					if (found < 18446744073709551615) { std::cout <<"line: "<< line << " position: " << found << std::endl; }
					
				}
				line = 0;
			}
			else { std::cout << "Error while opening the file" << std::endl; }
			
		}
		else { std::cout << "Your file is not selected or made yet"<<std::endl; }
		
		
	}

};