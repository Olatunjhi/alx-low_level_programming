#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure name
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
void print_dog(struct dog *d);

/**
 * dog_t - typedef for struct
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
