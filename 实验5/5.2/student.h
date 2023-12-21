#pragma once
#include<iostream>
using namespace std;
class Student
{
public:
	void display();
	void set_value( int num,const char* name,const char sex)
	{
		this->num = num;
		this->sex = sex;
		strcpy_s(this->name,name);
	}
private:
	int num;
	char name[20];
	char sex;
};