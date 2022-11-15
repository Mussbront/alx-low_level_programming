#ifndef DOG_H
#define DOG_H
int _putchar(char c);

/**
  * struct dog - structure for dog
  * @name: name of dog
  * @age: age of dog
  * @owner: name of dog owner
  */
typedef struct dog
{
	char * name;
	float age;
	char * owner;
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* !DOG_H */
