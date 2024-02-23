#include <iostream>

enum class months
{
	january,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	int monthNumber = 0;
	do
	{
		std::cout << "������� ����� ������: ";
		std::cin >> monthNumber;
		switch (monthNumber - 1)
		{
		case static_cast<int>(months::january):
			std::cout << "������" << std::endl;
			break;
		case static_cast<int>(months::february):
			std::cout << "�������" << std::endl;
			break;
		case static_cast<int>(months::march):
			std::cout << "����" << std::endl;
			break;
		case static_cast<int>(months::april):
			std::cout << "������" << std::endl;
			break;
		case static_cast<int>(months::may):
			std::cout << "���" << std::endl;
			break;
		case static_cast<int>(months::june):
			std::cout << "����" << std::endl;
			break;
		case static_cast<int>(months::july):
			std::cout << "����" << std::endl;
			break;
		case static_cast<int>(months::august):
			std::cout << "������" << std::endl;
			break;
		case static_cast<int>(months::september):
			std::cout << "��������" << std::endl;
			break;
		case static_cast<int>(months::october):
			std::cout << "�������" << std::endl;
			break;
		case static_cast<int>(months::november):
			std::cout << "������" << std::endl;
			break;
		case static_cast<int>(months::december):
			std::cout << "�������" << std::endl;
			break;
		case -1:
			std::cout << "Bye" << std::endl;
			break;
		default:
			std::cout << "�� ����� ������������ ����� ������, ������� ����� �� 1 �� 12" << std::endl;
			break;
		}
	} while (monthNumber != 0);
	return 0;
}