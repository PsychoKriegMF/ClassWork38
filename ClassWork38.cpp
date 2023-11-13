#include <iostream>


unsigned long long factorial(int num) {
	if (num <= 0)
		return 1;
	return factorial(num - 1) * num;

}
int fibonacci(int num) {
	if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return fibonacci(num - 1) + fibonacci(num - 2);

}

int main() {
	setlocale(LC_ALL, "ru");
	int n;

	//Рекурсия - это прием программирования, при котором функция вызывает саму себя непосредственно, либо косвенно


	//Факториал с помощью рекурсии
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n <<"! = " << factorial(n) << std::endl;

	//Задание "числа фибоначчи"
	int x;
	std::cout << "Введите номер числа фибоначи -> ";
	std::cin >> x;
	std::cout << "Число фибоначи под номером " << x << " = " << fibonacci(x) << std::endl;














	return 0;
}