/*
*Lab              : 01   -   T3
*Name             : Zughar chughtai
*Roll No          : 26 -SE-26
*Date             : 11-22-2026
*Purpose          : To identify and fix common syntax errors in C++ and to practice using cout,endl and escape  sequences.
*/
#include<iostream>
using namespace std;//Bug1: missing ; after std
int main()	
{
	cout<<"Welcome to the Lab!"<<endl;//Bug2: missing ; after std
	cout<<"Today we learn\"C++\"."<<endl;//Bug3:lowercase c in couts
	cout<<"Flies are in C:\\Lab01"<<endl;//Bug4: double backslash needed to print\
	cout<<"Bye!"<<endl; //Bug5:missing double quote after Bye!
	return 0;
}