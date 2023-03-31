#ifndef LIST_H
#define LIST_H

#include "Item/sandwich.h"
#include "User/user.h"

static User *u = new User("John", "Smith", 150);

static Food *apple = new Food(0.59, 20, "Apple", 1, "1 week");
static Sandwich *sandwich = new Sandwich(0, 1, "Sandwich", 99, "2 days");

#endif
