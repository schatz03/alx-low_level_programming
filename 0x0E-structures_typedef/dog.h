#ifndef DOG
#define DOG

/**
 * struct dog - a dog struct
 *
 * @name: Name of the dog
 *
 * @age: Age of the dog
 *
 * @owner: Owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
