#include "header.h"

void printListAll(std::vector<std::string> list){

	for(int i=0;i<list.size();i++){

		std::string entry=list.at(i);
		std::string name=entry;
		name=name.erase(name.size()-1,1);
		char att=entry[entry.size()-1];

		std::cout<<name<<"\t\t"<<att<<std::endl;
	}
}


void printListTrue(std::vector<std::string> list){

	std::vector<std::string> listTrue;

	for(int i=0;i<list.size();i++){

		std::string entry=list.at(i);

		if(entry[entry.size()-1]=='1'){

			listTrue.push_back(entry);
		}
	}

	printListAll(listTrue);
}


void printListFalse(std::vector<std::string> list){

	std::vector<std::string> listFalse;

	for(int i=0;i<list.size();i++){

		std::string entry=list.at(i);

		if(entry[entry.size()-1]=='0'){

			listFalse.push_back(entry);
		}
	}

	printListAll(listFalse);
}

std::vector<std::string> loadList(std::string listName){

	std::string entry;
	std::vector<std::string> list;

	std::ifstream read("names.txt");

	while(getline(read,entry)){

		list.push_back(entry);
	}

	return list;
}

