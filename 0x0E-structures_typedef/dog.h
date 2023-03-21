#ifndef DOG_H
#define DOG_H

#define STRUCT_DOG

/**
 *struct dog - defines the type
 *@name: prints dog's name
 *@owner: prints dog's owner
 *@age: prints dog's age
 *DESCRIPTION: describes the the return type
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
