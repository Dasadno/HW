#include <iostream>
#include <Windows.h>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	string list1[4]{ "яблочный", "апельсиновый", "абрикосовый", "грушевый" };
	string list2[3]{ "томатный", "луковый", "огуречный" };
	string list3[2]{ "чесночный", "петрушевый" };
	string answer;
	cout << "Добро пожаловать в магазин \n";
	cout << "На выбор 3 отдела: \nФруктовые соки, овощные соки, отдел чая \n";
	cout << "Выберите отдел ";
	getline(cin, answer);
	std::transform(answer.begin(), answer.end(), answer.begin(), tolower);
	
	if (answer == "фруктовый" || "фруктовые")
	{
		cout << "Фруктовый отдел: \n";
		for (int i = 0; i < 4; i++)
		{
			cout << list1[i] << " сок\n";
		}
		cout << "Выберите сок";
	}

}