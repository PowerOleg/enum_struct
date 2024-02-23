#include <iostream>

struct bank_account
{
	int account_number;
	char* cardholder;
	double balance;
}; 

bool change_balance(bank_account* account, double quantity)
{
	account->balance = quantity;
	return true;
}

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
	bank_account bank_account{account_number, cardholder, balance};

	std::cout << "¬ведите новый баланс: ";
	std::cin >> balance;
	change_balance(&bank_account, balance);

	std::cout << "¬аш счЄт : " << bank_account.cardholder << ", " << bank_account.account_number << ", " << bank_account.balance << std::endl;
	delete[] cardholder;
	return 0;
}