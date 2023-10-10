#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Type of struct
 * @name: First member of struct
 * @age: Second member of struct
 * @owner: Last member of struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
