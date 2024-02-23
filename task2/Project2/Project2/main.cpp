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
	std::cout << "������� ����� �����: ";
	std::cin >> account_number;

	char* cardholder = new char[256];
	std::cout << "������� ��� ���������: ";
	std::cin >> cardholder;

	double balance = 0;
	std::cout << "������� ������: ";
	std::cin >> balance;
	bank_account bank_account{account_number, cardholder, balance};

	std::cout << "������� ����� ������: ";
	std::cin >> balance;
	change_balance(&bank_account, balance);

	std::cout << "��� ���� : " << bank_account.cardholder << ", " << bank_account.account_number << ", " << bank_account.balance << std::endl;
	delete[] cardholder;
	return 0;
}