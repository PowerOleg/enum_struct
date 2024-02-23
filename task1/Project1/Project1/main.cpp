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
		std::cout << "Введите номер месяца: ";
		std::cin >> monthNumber;
		switch (monthNumber - 1)
		{
		case static_cast<int>(months::january):
			std::cout << "Январь" << std::endl;
			break;
		case static_cast<int>(months::february):
			std::cout << "Февраль" << std::endl;
			break;
		case static_cast<int>(months::march):
			std::cout << "Март" << std::endl;
			break;
		case static_cast<int>(months::april):
			std::cout << "Апрель" << std::endl;
			break;
		case static_cast<int>(months::may):
			std::cout << "Май" << std::endl;
			break;
		case static_cast<int>(months::june):
			std::cout << "Июнь" << std::endl;
			break;
		case static_cast<int>(months::july):
			std::cout << "Июль" << std::endl;
			break;
		case static_cast<int>(months::august):
			std::cout << "Август" << std::endl;
			break;
		case static_cast<int>(months::september):
			std::cout << "Сентябрь" << std::endl;
			break;
		case static_cast<int>(months::october):
			std::cout << "Октябрь" << std::endl;
			break;
		case static_cast<int>(months::november):
			std::cout << "Ноябрь" << std::endl;
			break;
		case static_cast<int>(months::december):
			std::cout << "Декабрь" << std::endl;
			break;
		case -1:
			std::cout << "Bye" << std::endl;
			break;
		default:
			std::cout << "Вы ввели некорректный номер месяца, введите цифру от 1 до 12" << std::endl;
			break;
		}
	} while (monthNumber != 0);
	return 0;
}