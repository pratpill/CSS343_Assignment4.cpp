//	File Name: ass4.cpp
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: Movie class declaration
//		movie class is abstract class for movie types (Comedy[F], Drama[D], Classic[C])

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
public:
	virtual void print() = 0;
	virtual ~Movie();
	static Movie * create(std::string identifier);
	bool operator>(Movie & mv);
	bool operator==(Movie & mv);
};

#endif
