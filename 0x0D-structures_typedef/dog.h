#ifndef DOGS_SEEN
#define DOGS_SEEN

/**
  * struct dog - contains information on a dog
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog's owner
  */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
