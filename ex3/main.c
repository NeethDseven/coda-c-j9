#include "struct.h"


int main()
{
	character *p = malloc(sizeof(*p));
	
	p->strength = 15;
	p->intelligence = 5;
	p->wisdom = 10;
	p->agility = 12;
	p->endurance = 9; 

	printf("les stat de votre personnage est : force : %d\n intelligence: %d\n résilience: %d\n agilité : %d\n endurance : %d\n", p->strength, p->intelligence, p->wisdom, p->agility, p->endurance);

	free(p);
	return 0;
}