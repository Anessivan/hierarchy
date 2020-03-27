#ifndef _ANIMAL_H_
#define _ANIMAL_H_
class Animal
{
protected:
	bool wool;
	bool eye;
	int claw;
	int color;
public:
	Animal();
	Animal(Animal &a);
	bool GetWool();
	bool GetEye();
	int GetClaw();
	void SetWool(int w);
	void SetEye(bool e);
	void SetClaw(int c);
	void SetColor(int c);
	int GetColor();
};
#endif 

