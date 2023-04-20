# databaseimitating
<h4>databaseimitating is a program or even mini-API using which you can do different actions with files like open, edit, remove, and of course the main functional: after creating a file in any desired extension, you can add your data and fill the "database" file as many times as you have memory on your disk. All the data will have the fields Id, Name, Surname, Job, and Salary, where Id fills automatically no matter what file you select or create. </h4>

<br>

[**databaseimitating**](https://github.com/checkthistape/databaseimitating) by [checkhtistape](https://github.com/checkthistape)
_______________________________
<h3>:LORE:</h3>

Originally, this project had to be a solution to the school task,
but during the problem solving _*(it should be a system that can
create, update, search, and delete requests with a list of variables
**[id, Name, Surname, Job, Salary]** like in databases, so because of that,
I've named this project **databaseimitating**)*_, I was expanding the functionality
of the **databaseimitating** class until it looked more like a notepad program class.
Regardless, it's possible to use my program like a very basic notepad utility.

<h3>:FUNCTIONALITY:</h3>

\> *help

	 Type *dbcreate to create a new file";
 	 Type *open to open the created database";
 	 Type *fileexist to check for an existing file.";
	 Type *remove to remove the file.";
 	 Type *showfilename to show the file name";
	 Type *showadress to show the address of the file";
	 Type *changeadress to change the address of your directory";
	 Type *selectfile to choose your file against creating";
	 Type *eraseselfile to erase the selected file";
	 Type *changeext to change the default extension (which is .txt)";
	 Type *exit to exit";
	 
	 .~~~~~~~~~~~~~~~~~~~.Requests to db.~~~~~~~~~~~~~~~~~~~.";
	 
	 Type *structure to Type a structure for db (>_<) ^^this currently does not work, sorry..!";
	 Type *add to insert a new information to db";
	 Type *delete to delete an information from db";
	 Type *find to find information from db";
	 Type *replace to delete information from db"

<h3>:DESCRIPTION:</h3>

Program has been separated into the two parts:<br>
<br> - [databaseimitationclass.hpp](https://github.com/checkthistape/databaseimitating/blob/main/headers/databaseimitationclass.hpp) header class file
<br> - [databaseimitate.cpp](https://github.com/checkthistape/databaseimitating/blob/main/databaseimitate.cpp) main function file

All functions and functionality of the project are placed
in the **.hpp** header class file. Meanwhile in the main **.cpp** file
I only placed the project's declaration. So describing the code's
logic. *(like it supposed to be)*

- There is a while loop in the **.cpp** file that catches the
user requests until the program ends, using a very simple concept. 
*(list of commands is slightly above this text)*

Example:
```c++
while(true){
	cin>>userRequest;
	if(userRequest=="*help"){...}
	...
} 
```

- For functional use of the program, the user needs to create or select
file, and there are two ways of continuing: by using **selectfile()**
function (***selectfile** input command) or by using **databasecreate()**
function (***dbcreate** input command). In both ways, the program uses
default set up value, which has been set up on **"C:\Users\Public\Documents\"**
because of user folder permissions. But you can also change the address,
it's possible using the **changeadress()** function (***changeadress** input command).
After all the work is done, you have a file with which you can do different acts
such as open and view the file, add data, delete the file, and another.<br>
( try *help command ʕ•́ᴥ•̀ʔっ )
<br>

![Stack Overflow](https://img.shields.io/badge/-Stackoverflow-FE7A16?style=for-the-badge&logo=stack-overflow&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
_______________________________

by [checkhtistape](https://github.com/checkthistape)
>MIT License [©](https://github.com/checkthistape/databaseimitating/blob/main/LICENSE) 
