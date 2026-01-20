#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that stores dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
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
 * typedef - another way of building struct
 * @d: pointer to the struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif /* DOG_H */

