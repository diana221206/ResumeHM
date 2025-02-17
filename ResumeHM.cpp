#include <iostream>
#include <string>

int main() {
	std::string resume = "Меня зовут Диана"
		Я имею опыт работы в программировании на С++ полгода."
		"Стремлюсь к обучению и развитию в области программирования. Знание принципов объектно-
		ориентированного программирования"
		int totalLength = resume.length();
	int parts = 3;
	int partLength = totalLength / parts;

	std::cout << "Резюме - Часть 1" << std::endl;
	std::cout << resume.substr(0, partLength) <<
		std::endl;
	std::cout << "Нажмите Enter для продолжения..." << std::endl;
	std::cin.get();

	std::cout << "Резюме - Часть 2" << std::endl;
	std::cout << resume.substr(partLength,
		partLength) << std::endl;
	std::cout << "Нажмите Enter для продолжения..." << std::endl;
		std::endl;

	return 0;
}
