//	File Name: drama.h
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: drama class declaration [D]

#ifndef DRAMA_H
#define DRAMA_H
#include <string>
#include "movie.h"

class Drama : public Movie
{
public:
	// store movie in map<std::string titleDirector, movie *> D
	Drama(int stock, std::string director, std::string title, std::string actor, int year);
	virtual ~Drama();
	virtual void print(); // D, 10, Steven Spielberg, Schindler's List, 1993
	
	//sort by director then title
	virtual bool operator>(Drama & dm);
	virtual bool operator==(Drama & dm);

private:
	int stock;
	std::string director;
	std::string title;
	int releaseYear;
	
};

#endif
