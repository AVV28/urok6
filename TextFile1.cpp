#include <iostream>

using namespace std;

int main() {
	// Задание 1: Арифметические действия
	int a = 10, b = 5;

	cout « "a + b = " « a + b « endl;
	cout « "a - b = " « a - b « endl;
	cout « "a * b = " « a * b « endl;
	cout « "a / b = " « a / b « endl;
	cout « "a % b = " « a % b « endl; // Остаток от деления
	cout « "a++ = " « a++ « endl; // Постфиксный инкремент
	cout « "a = " « a « endl; // Значение a после инкремента
	cout « "b— = " « b— « endl; // Постфиксный декремент
	cout « "b = " « b « endl; // Значение b после декремента

	// Задание 2: Операторы сравнения
	cout « endl « "Операторы сравнения:" « endl;
	cout « "a == b: " «(a == b) « endl;
	cout « "a != b: " «(a != b) « endl;
	cout « "a > b: " «(a > b) « endl;
	cout « "a < b: " «(a < b) « endl;
	cout « "a >= b: " «(a >= b) « endl;
	cout « "a <= b: " «(a <= b) « endl;

	// Задание 3: Логические операторы
	cout « endl « "Логические операторы:" « endl;
	bool c = true, d = false;

	cout « "!c: " « !c « endl; // Логическое отрицание
	cout « "c && d: " «(c && d) « endl; // Логическое И
	cout « "c || d: " «(c || d) « endl; // Логическое ИЛИ

	return 0;
}