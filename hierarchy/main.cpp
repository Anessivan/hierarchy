#include "animal.h"
#include "predator.h"
#include "Cat.h"
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include "Herb.h"
#include "sloth.h"
#include "KingCat.h"
#include "KingSloth.h"
int main()
{

	int i = 0;
	setlocale(LC_ALL, "rus");
	
	do
	{
		std::cout << "Выберете объект:\n\t1)Животное\n\t2)Хищник\n\t3)Кошка\n\t 4) Королевская кошка\n\t 5) Травоядное\n\t 6)Ленивец\n\t 7) Королевский ленивец\n\t 8)Выход" << std::endl;
		std::cin >> i;
		switch (i)
		{
		case 1:
		{
			Animal anima;
			if (anima.GetWool())
				std::cout << "Есть шерсть" << std::endl;
			else
				std::cout << "Нет шерсти" << std::endl;
			if (anima.GetEye())
				std::cout << "Есть глаза" << std::endl;
			else
				std::cout << "Нет глаз" << std::endl;
			if (anima.GetClaw())
				std::cout << "Есть когти в количестве: " << anima.GetClaw() << std::endl;
			else
				std::cout << "Нет когтей" << std::endl;
			std::cout << "Копия:" << std::endl;
			Animal Pur(anima);
			if (Pur.GetWool())
				std::cout << "Есть шерсть" << std::endl;
			else
				std::cout << "Нет шерсти" << std::endl;
			if (Pur.GetEye())
				std::cout << "Есть глаза" << std::endl;
			else
				std::cout << "Нет глаз" << std::endl;
			if (Pur.GetClaw())
				std::cout << "Есть когти в количестве: " << anima.GetClaw() << std::endl;
			else
				std::cout << "Нет когтей" << std::endl;

		}break;
		case 2:
		{
			Predator pred;
			if (pred.GetWool())
				std::cout << "Есть шерсть" << std::endl;
			else
				std::cout << "Нет шерсти" << std::endl;
			if (pred.GetEye())
				std::cout << "Есть глаза" << std::endl;
			else
				std::cout << "Нет глаз" << std::endl;
			std::cout << "Количество когтей: " << pred.GetFangs() << std::endl;
			std::cout << "Сила КУСЬ: " << pred.KYC() << std::endl;
		}break;
		case 3:
		{
			Cat mya;
			if (mya.GetWool())
				std::cout << "Есть шерсть" << std::endl;
			else
				std::cout << "Нет шерсти" << std::endl;
			if (mya.GetEye())
				std::cout << "Есть глаза" << std::endl;
			else
				std::cout << "Нет глаз" << std::endl;
			std::cout << "Количество когтей: " << mya.GetFangs() << std::endl;
			std::cout << "Сила КУСЬ: " << mya.KYC() << std::endl;
			std::cout << "Сила царапины: " << mya.Cap() << std::endl;
		}break;
		case 4:
		{
			KingCat Murzik;
			int n;
			int glory;
			std::cout << "Введите количество зрителей" << std::endl;
			std::cin >> n;
			glory = Murzik.Glorify(n);
			std::cout << "Слава: " << glory << std::endl;
		}break;
		case 5:
		{
			Herb unic;
			int h;
			h = unic.Climb();
			std::cout << "Залез на высоту " << h << std::endl;

		}break;
		case 6:
		{
			Sloth Leny;
			int h;
			h = Leny.Climb();
			std::cout << "Залез на высоту " << h << std::endl;
		}break;
		case 7:
		{
			KingSloth Many;
			int glorysloth;
			int n;
			std::cout << "Введите количесвтво зрителей" << std::endl;
			std::cin >> n;
			glorysloth = Many.glorify(n);
			std::cout << "Слава: " << glorysloth << std::endl;
		}break;
		case 8:
		{
			return 0;
		}
		default:
		{
			std::cout << "ПРоверьте ввод" << std::endl;
		}break;
		}
	}while (1);
}