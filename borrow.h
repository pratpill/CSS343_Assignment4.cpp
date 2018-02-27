//	File Name: borrow.h
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: classic class declaration

#ifndef BORROW_H
#define BORROW_H
#include "commands.h"
#include <string>

class Borrow : public Command
{
public:
	//needs to check customer exists, media type is D, movie exists (use movie code to pull correct map, check map)
	Borrow(int cID, std::string mvCode, std::string mdType, int rlsMonth, int rslYear, std::string actr);
	~Borrow();
	virtual void execute(); 
private:
	//dosent need it's own data. 
	//int customerID;
	//std::string movieCode;
	//std::string mediaType; 
	//int releaseMonth;
	//int releaseYear;
	//std::string actor;
};

#endif
