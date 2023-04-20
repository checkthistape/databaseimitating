[**databaseimitating**](https://github.com/checkthistape/databaseimitating) by [checkhtistape](https://github.com/checkthistape)
_______________________________
**:LORE:**

Originally this project had to be a solution of the school task,
but during the problem solving _*(It should be system which can
create, update, search and delete requests with the list of
variables *[id, Name, Surname, Job, Salary]* like in databases so
because of it I've named this project like **databaseimitating**)*_
I was expanding the functionality of the **databaseimitating** class
until it looked more like a notepad program class. Regardless it's possible to
use my program like a very basic notepad utility.

**:FUNCTIONALITY:**

\> *help

	Write *dbcreate to create a new file
	Write *open to open created database
	Write *fileexist to check file existing
	Write *remove to remove file
	Write *showfilename to show file name
	Write *showadress to show adress of file
	Write *changeadress to change adress of your directory
	Write *selectfile to choose your file against creating
	Write *eraseselfile to erase adress to the selected file
	Write *exit to exit
	
	.~~~~~~~~~~~~~~~~~~~.Requests to db.~~~~~~~~~~~~~~~~~~~.
	
	Write *structure to write a structure for db ^currently does not work, in line to adding!
	Write *add to insert new information to db
	Write *delete to delete information from db
	Write *find to find information from db
	Write *replace to delete information from db" << std::endl << std::endl;

**:DESCRIPTION:**

Program has been separated into the two parts:<br>
<br> - [databaseimitationclass.hpp](https://github.com/checkthistape/databaseimitating/blob/main/headers/databaseimitationclass.hpp) header class file
<br> - [databaseimitate.cpp](https://github.com/checkthistape/databaseimitating/blob/main/databaseimitate.cpp) main function file

All functions and functionality of project is placed
in **.hpp** header class file. Meanwhile in main **.cpp** file
I placed only the project's declaration. So describing of code's
logic. *(like it supposed to be)*

- There is a while loop in **.cpp** file which catches user
requests until the program ends using a very plain concept.
*(list of commands you can see slightly above this text)*

Example:
```c++
while(true){
	cin>>userRequest;
	if(userRequest=="*help"){...}
	...
} 
```

- For functional use of the program user needs to create or select
file and there are two ways of continuing: by using **selectfile()**
function (***selectfile** input command) or by using **databasecreate()**
function (***dbcreate** input command). In both ways program uses
default set up value which has been set up on "C:\Users\Public\Documents\"
because of user folder permission. But you can also change the address,
it's possible using **changeadress()** function (***changeadress** input command).
After all the work done you have file with which you can do different acts
such as open and view the file, add data, delete file and another.<br>
( try *help command ʕ•́ᴥ•̀ʔっ )
<br>

![Stack Overflow](https://img.shields.io/badge/-Stackoverflow-FE7A16?style=for-the-badge&logo=stack-overflow&logoColor=white)
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
_______________________________

by [checkhtistape](https://github.com/checkthistape)
