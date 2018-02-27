//	File Name: store.h
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: classic class declaration

#ifndef STORE_H
#define STORE_H
#include <string>

class Store
{
public:
	Store();
	~Store();

	void readMovies();
	void readCustomers();
	void readCommands();
	

private:
	//movie map <std::string typeCode, map*>
	//customer hash 
	//command map
	int availableStock;
};

#endif
