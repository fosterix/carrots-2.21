// carrots.cpp -- программа по технологии производства пищевых продуктов
//использует и отоброжает переменную
#include <iostream>

int main()
{
	using namespace std;

	int carrots;                    // обьявление переменной carrots целочисленного типа.

	carrots = 25;                    // присваивание значения переменной carrots.
	cout << "I have = ";
	cout << carrots;                     // отображение  значение переменной carrots.
	cout << endl;
	carrots = carrots - 1;                // изменение переменной
	cout << "Crunch, crunch. Now I have:" << carrots << "carrots." << endl;
	cin.get();
	cin.get();
	return 0;
}