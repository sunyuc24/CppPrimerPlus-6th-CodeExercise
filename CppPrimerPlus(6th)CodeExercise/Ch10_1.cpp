#include "Ch10_1.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;


Ch10_1Account::Ch10_1Account()
{
}

Ch10_1Account::Ch10_1Account(string name, string account, double deposit)
{
	_name = name;
	_account = account;
	_deposit = deposit;
}

Ch10_1Account::~Ch10_1Account()
{
}

void Ch10_1Account::Ch10_1Account_show(){
	cout << "Customer name: " << _name << endl
		<< "Customer account: " << _account << endl
		<< "Customer deposit: " << _deposit << endl;
}

void Ch10_1Account::Ch10_1Account_save(double money){
	if (money > 0){
		_deposit += money;
		cout << "Your deposit: " << _deposit;
	}
}
void Ch10_1Account::Ch10_1Account_withdraw(double money){
	if (_deposit > money){
		_deposit -= money;
		cout << "Your deposit: " << _deposit << endl;
	}
	else {
		cout << "Your do not have enough deposit\n";
	}
}
