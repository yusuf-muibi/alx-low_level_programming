#ifndef DOG_H
#define DOG_H
/**
* struct dog - this is the main function
* @name: this is the name of the dog
* @age: this is the age of the dog
* @owner: this is the name of the owner
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
* dog_t - Typedef for struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
