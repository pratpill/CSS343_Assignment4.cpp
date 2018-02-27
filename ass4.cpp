//	File Name: ass4.cpp
//	Programmer: Tabitha Roemish
//	Date: February 23, 2018
//	File contains: main()

#include<iostream>
#include "store.h"
using namespace std;

int main()
{
	Store st;
	st.readMovies();
	st.readCustomers();
	st.readCommands();



	return 0;
}