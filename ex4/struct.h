#ifndef __STRUCT_H__
#define __STRUCT_H__

#include "struct.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct s_char{

char * name;
int strength;
int intelligence;
int wisdom;
int agility;
int endurance;
};

typedef struct s_char perso;


#endif