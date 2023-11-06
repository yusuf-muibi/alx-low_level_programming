#ifndef DOG_H
#define DOG_H
/**
* struct dog - this is the main function
* @name: this is the name of the dog
* @age: this is the age of the dog
* @owner: this is the name of the owner
*/
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
