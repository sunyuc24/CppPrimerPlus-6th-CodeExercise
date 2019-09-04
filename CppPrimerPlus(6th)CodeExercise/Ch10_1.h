#pragma once
#ifndef _CH10_1_H
#define _CH10_1_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using std::string;

class Ch10_1Account
{
private:
	string _name;
	string _account;
	double _deposit;
public:
	Ch10_1Account();
	Ch10_1Account(string, string, double);
	~Ch10_1Account();
	void Ch10_1Account_show();
	void Ch10_1Account_save(double);
	void Ch10_1Account_withdraw(double);
};

#endif
