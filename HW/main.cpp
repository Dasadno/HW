#include <iostream>
#include <cmath>


int main() {

	setlocale(LC_ALL, "ru");
	/*
	 
	int num1;

	std::cout << "Введите шестизначное число: ";
	std::cin >> num1;
	if (num1 > 999999 || num1 < 100000)
	{
		std::cout << "Попробуйте ввести шестизначное число еще раз.";
		return 0;
	}
	
	if ((num1 / 100000) + ((num1 / 10000) % 10) + ((num1 / 1000) % 10) == ((num1 / 100) % 10) + ((num1 / 10) % 10) + (num1 % 10))
	{
		std::cout << "Число счастливое! ";
	}
	else
	{
		std::cout << "Число не является счастливым. ";
	}
	
	*/

	int num1;
	int reversed_num;

	std::cout << "Введите четырехзначное число: ";
	std::cin >> num1;
	if (num1 < 1000 || num1 > 9999) {
		std::cout << "Попробуйте ввести четырехзначное число еще раз.";
		return 0;
	}
	
	std::cout << num1 / 1000 + num1 / 100 + num1 / 10 + num1 << "\n";
	std::cout << num1 / 1000 % 10 << "\n";
	std::cout << num1 / 100 % 10 << "\n";
	std::cout << num1 / 10 % 10 << "\n";
	std::cout << num1 % 10 << "\n";
	
	std::cout << reversed_num == ((num1 / 100 % 10 * 1000) + (num1 / 1000 % 10 * 100) + (num1 % 10 * 10) + (num1 / 10 % 10));


	return 0;
}