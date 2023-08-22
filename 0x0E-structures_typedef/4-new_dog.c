#include "dog.h"
#include <string.h>

/**
 * _strcpy - copy string from src into dest
 * @dest: input
 * @src: input
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len1 = 0, len2 = 0;

	while (name[len1] != '\0')
		len1++;
	while (owner[len2] != '\0')
		len2++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	(*new_dog).name = _strcpy(new_dog->name, name);
	(*new_dog).age = age;
	(*new_dog).owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
