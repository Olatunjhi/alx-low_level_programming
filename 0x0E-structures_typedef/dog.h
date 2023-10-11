#ifndef DOG_H
#define DOG_H
/**
 * dog - structure name
 * @name: char pointer
 * @age: float type
 * @owner: char pointer
 *
 * Description: structure of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
