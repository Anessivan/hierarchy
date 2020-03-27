#include "animal.h"
#include <iostream>
Animal::Animal()
{
	wool = true;
	eye = true;
	claw = 0;
	color = 0;
}

Animal::Animal(Animal& a)
{
	wool = a.GetWool();
	eye = a.GetEye();
	claw = a.GetClaw();
	color = a.GetColor();
}

bool Animal:: GetWool()
{
	return wool;
}
bool Animal::GetEye()
{
	return eye;
}
int Animal::GetClaw()
{
	return claw;
}
void Animal::SetWool(int w)
{
	if (w >= 0)
		wool = w;
}
void Animal::SetEye(bool e)
{
	eye = e;
}
void Animal::SetClaw(int c)
{
	claw = c;
}
void Animal::SetColor(int c)
{
	color = c;
}
int Animal::GetColor()
{
	return color;
}
