#ifndef DOGS_SEEN
#define DOGS_SEEN

/**
  * struct dog - contains information on a dog
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog's owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
