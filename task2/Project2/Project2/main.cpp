#include <iostream>

struct bank_account
{
	int account_number;
	char* cardholder;
	double balance;
}; 

bool change_balance(bank_account account, double* quantity)//*????????????????????????????????????????????
{


	return true;
}


/*¬ведите номер счЄта: 123456789
¬ведите им€ владельца: јндрей
¬ведите баланс: 5000
¬ведите новый баланс: 6000
¬аш счЄт: јндрей, 123456789, 6000*/


int main(int argc, char** argv)
{

	setlocale(LC_ALL, "ru");
	int account_number = 0;
	std::cout << "¬ведите номер счЄта: ";
	std::cin >> account_number;

	char* cardholder = new char[256];
	std::cout << "¬ведите им€ владельца: ";
	std::cin >> cardholder;

	double balance = 0;
	std::cout << "¬ведите баланс: ";
	std::cin >> balance;
	bank_account bank_account;
	bank_account.account_number = account_number;
	bank_account.cardholder = cardholder;					//->????????????????????????????????????????????
	bank_account.balance = balance;

	std::cout << "¬ведите новый баланс: ";
	std::cin >> balance;
	change_balance(bank_account, &balance);


	delete[] cardholder;
	return 0;
}