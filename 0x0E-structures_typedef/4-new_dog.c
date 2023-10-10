#include <stdlib.h>
#include "dog.h"

/**
 * __strlen - returns the length of a string.
 * @s: string to evaluate.
 *
 * Return: the length of the string.
 */
int __strlen(char *s)
{
	int i;

	i = 0;

	for ( i = 0; s[i] != '\0'; i++);

	return (i);
}

/**
 * *__strcpy - copies the string pointed to by sr
 * including the terminating null byte (\0)
 * to the buffer pointed to by destenation
 * @destenation: pointer to the buffer in which we copy the string
 * @sr: string to be copied
 *
 * Return: pointer to destenation.
 */
char *__strcpy(char *destenation, char *sr)
{
	int length, i;

	length = 0;

	for (length = 0; sr[length] != '\0'; length++);

	for (i = 0; i < length; i++)
	{
		destenation[i] = sr[i];
	}
	destenation[i] = '\0';

	return (destenation);
}

/**
 * new_dog - creates a new dog info.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog if (Success), 
 * NULL otherwise.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = __strlen(name);
	length2 = __strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	__strcpy(dog->name, name);
	__strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
