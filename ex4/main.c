#include "struct.h"

int main(){
	
	perso *p = malloc(sizeof(*p));
	p->name = malloc(strlen("Mohamed Ali") * sizeof(char));
	p->name = strcpy(p->name, "Mohamed Ali");
	p->strength = 15;
	p->intelligence = 12;
	p->wisdom = 10;
	p->agility = 12;
	p->endurance = 15; 

printf("les stats de %s sont :\n force : %d\n intelligence: %d\n résilience: %d\n agilité : %d\n endurance : %d\n", p->name, p->strength, p->intelligence, p->wisdom, p->agility, p->endurance);

free(p->name);
free(p);

return 0;

}
