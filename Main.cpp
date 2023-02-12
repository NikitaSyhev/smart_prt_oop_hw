
#include <iostream>
#include "Hockey.h"
#include "Sport.h"
#include <memory>

int main() {
	setlocale(LC_ALL, "Russian");
	std::shared_ptr<Sport> pHockey = std::make_shared<Hockey>(); // создали  объект ребенка через умный указатель родителя

	pHockey->showSport();  // вызвали какой-нибудь метод у этого объекта для проверки работоспособности

	std::shared_ptr<Sport> pSport = std::dynamic_pointer_cast<Hockey>(pHockey);//Затем совершить downcast

	if (pHockey == nullptr) { // проверка на nullptr
		std::cout << "Pointer is equal to nullptr" << std::endl;
	}
	else
	{
		pHockey->showSport();
	}



















	return 0;
}