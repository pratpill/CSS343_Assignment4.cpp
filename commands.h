//	File Name: commands.h
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: Command class declaration
//		command class is abstract class for movie types (Borrow[B], Return[R], Inventory[I], History[H])

#ifndef COMMANDS_H
#define COMMANDS_H
#include <string>

class Command
{
public:
	virtual void print() = 0;
	virtual ~Command();
	virtual void execute();
	static Command * create(std::string identifier);
	

};
#endif
