#include "struct.h"


void fill_struct(character * p)
{
	p->strength = 15;
	p->intelligence = 5;
	p->wisdom = 10;
	p->agility = 12;
	p->endurance = 9; 

}

int main()
{
	character p;
	fill_struct(&p);

	printf("les stat de votre personnage est : force : %d\n intelligence: %d\n résilience: %d\n agilité : %d\n endurance : %d\n", p.strength, p.intelligence, p.wisdom, p.agility, p.endurance);
	return 0;
}