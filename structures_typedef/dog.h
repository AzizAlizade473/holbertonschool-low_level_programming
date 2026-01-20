#ifndef DOG_H
#define DOG_H

/**
 * struct dog - short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG_H */
