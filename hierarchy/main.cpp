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
		std::cout << "�������� ������:\n\t1)��������\n\t2)������\n\t3)�����\n\t 4) ����������� �����\n\t 5) ����������\n\t 6)�������\n\t 7) ����������� �������\n\t 8)�����" << std::endl;
		std::cin >> i;
		switch (i)
		{
		case 1:
		{
			Animal anima;
			if (anima.GetWool())
				std::cout << "���� ������" << std::endl;
			else
				std::cout << "��� ������" << std::endl;
			if (anima.GetEye())
				std::cout << "���� �����" << std::endl;
			else
				std::cout << "��� ����" << std::endl;
			if (anima.GetClaw())
				std::cout << "���� ����� � ����������: " << anima.GetClaw() << std::endl;
			else
				std::cout << "��� ������" << std::endl;
			std::cout << "�����:" << std::endl;
			Animal Pur(anima);
			if (Pur.GetWool())
				std::cout << "���� ������" << std::endl;
			else
				std::cout << "��� ������" << std::endl;
			if (Pur.GetEye())
				std::cout << "���� �����" << std::endl;
			else
				std::cout << "��� ����" << std::endl;
			if (Pur.GetClaw())
				std::cout << "���� ����� � ����������: " << anima.GetClaw() << std::endl;
			else
				std::cout << "��� ������" << std::endl;

		}break;
		case 2:
		{
			Predator pred;
			if (pred.GetWool())
				std::cout << "���� ������" << std::endl;
			else
				std::cout << "��� ������" << std::endl;
			if (pred.GetEye())
				std::cout << "���� �����" << std::endl;
			else
				std::cout << "��� ����" << std::endl;
			std::cout << "���������� ������: " << pred.GetFangs() << std::endl;
			std::cout << "���� ����: " << pred.KYC() << std::endl;
		}break;
		case 3:
		{
			Cat mya;
			if (mya.GetWool())
				std::cout << "���� ������" << std::endl;
			else
				std::cout << "��� ������" << std::endl;
			if (mya.GetEye())
				std::cout << "���� �����" << std::endl;
			else
				std::cout << "��� ����" << std::endl;
			std::cout << "���������� ������: " << mya.GetFangs() << std::endl;
			std::cout << "���� ����: " << mya.KYC() << std::endl;
			std::cout << "���� ��������: " << mya.Cap() << std::endl;
		}break;
		case 4:
		{
			KingCat Murzik;
			int n;
			int glory;
			std::cout << "������� ���������� ��������" << std::endl;
			std::cin >> n;
			glory = Murzik.Glorify(n);
			std::cout << "�����: " << glory << std::endl;
		}break;
		case 5:
		{
			Herb unic;
			int h;
			h = unic.Climb();
			std::cout << "����� �� ������ " << h << std::endl;

		}break;
		case 6:
		{
			Sloth Leny;
			int h;
			h = Leny.Climb();
			std::cout << "����� �� ������ " << h << std::endl;
		}break;
		case 7:
		{
			KingSloth Many;
			int glorysloth;
			int n;
			std::cout << "������� ����������� ��������" << std::endl;
			std::cin >> n;
			glorysloth = Many.glorify(n);
			std::cout << "�����: " << glorysloth << std::endl;
		}break;
		case 8:
		{
			return 0;
		}
		default:
		{
			std::cout << "��������� ����" << std::endl;
		}break;
		}
	}while (1);
}