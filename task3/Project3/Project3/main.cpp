#include <iostream>

struct address
{
	char city[256];
	char street[256];
	int building_number,
		appartment_number,
		postal_code;
};

void print(address address)
{
	std::cout << "Город: " << address.city << std::endl;
	std::cout << "Улица: " << address.street << std::endl;
	std::cout << "Номер дома: " << address.building_number << std::endl;
	std::cout << "Номер квартиры: " << address.appartment_number << std::endl;
	std::cout << "Индекс: " << address.postal_code << std::endl;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "ru");
	address ivan_address{ "Москва", "Арбат", 12, 8, 123456 };
	address alena_address{"Ижевск", "Пушкина", 59, 143, 953769};
	address alex_address{"Санкт-Петербург", "Невская", 13, 1, 000000};

	print(ivan_address);
	print(alena_address);
	print(alex_address);
	return 0;
}