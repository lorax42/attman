/*
load list of people
set attendance to 0/1
show all/attendance=0/attendance=1
save reccord of people and their attendance (0/1)
*/

#include "header.h"

int main(int argc,char *argv[]){

	std::string listName=argv[1];

	std::vector<std::string> list;
	/*list.push_back("Macy1");
	list.push_back("Charlie1");
	list.push_back("Bob0");
	list.push_back("Anna0");
	list.push_back("Tom1");*/

	std::cout<<"hello world\n-----------"<<std::endl;

	list=loadList(listName);
	printListAll(list);
	std::cout<<std::endl;
	printListTrue(list);
	std::cout<<std::endl;
	printListFalse(list);

	return 0;
}

