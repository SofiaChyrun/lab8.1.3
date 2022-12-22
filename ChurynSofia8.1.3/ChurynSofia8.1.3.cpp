// ChurynSofia8.1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_08_1.cpp
// < Чирун Софія >
// Лабораторна робота № 8.1.3
// Пошук та заміна символів у літерному рядку стандартними функціями мови С для рядків char[]
// Варіант 18

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* s) 
{
	int k = 0, pos = 0; 
	char* t;
	while (t = strchr(s + pos, '.')) 
	{
		pos = t - s + 1;
		k++;
	}
	return k;
}

int Count4Poit(char* str, int number)
{
	int pos;
	char* t;
	pos = strlen(str)-1;
	if (strlen(str) < 0)
	   return 0;
	int k = 0, j = 0;
	if (number < 4) 
	{
	   cout << ". <4" << endl;
	   return 0;
	}
	else 
	{
	   while (t = strrchr(str + pos, '.') ) 
	   {
		   if (k == 4) break; 
		   if (str[pos] == '.') 
		   {  
			  k++; 
			  j = pos;
			  cout << pos << endl;
		   }
		   pos--;
	   }
	} 
	return j;
}

char* Change(char* s) 
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0, pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, '.')) 
	{
		pos2 = p - s + 1; 
		strncat(t, s + pos1, pos2 - pos1 - 1);
		strcat(t, "**");
		pos1 = pos2;
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}

int main()
{
	char str[101];
	int number;
		cout << "Enter string:" << endl;
	cin.getline(str, 100);
	number = Count(str);
	cout << "String contained " << Count(str) << " groups of '. >= 4'" << endl;
	cout << "Number i is " << Count4Poit(str, number) + 1 << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
