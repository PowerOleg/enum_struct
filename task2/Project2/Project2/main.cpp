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


/*������� ����� �����: 123456789
������� ��� ���������: ������
������� ������: 5000
������� ����� ������: 6000
��� ����: ������, 123456789, 6000*/


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
	bank_account bank_account;
	bank_account.account_number = account_number;
	bank_account.cardholder = cardholder;					//->????????????????????????????????????????????
	bank_account.balance = balance;

	std::cout << "������� ����� ������: ";
	std::cin >> balance;
	change_balance(bank_account, &balance);


	delete[] cardholder;
	return 0;
}