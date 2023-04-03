#ifndef LIST_H
#define LIST_H

#include "Item/sandwich.h"
#include "Item/housekeeping.h"
#include "User/user.h"


static Food *apple = new Food(0.59, 20, "Apple", 1, "1 month");
static Food *carrot = new Food(0.21, 30, "Carrot", 2, "3 weeks");
static Food *bun = new Food(0.75, 20, "Burger Bun (100g)", 3, "1 week");
static Food *meat = new Food(2.79, 10, "Sliced Meat (300g)", 4, "1 week");
static Food *water = new Food(3.49, 20, "Water (6x1L)", 5, "1 week");
static Food *coca = new Food(0.95, 24, "Coca-Cola", 6, "6 months");
static Food *chicken = new Food(2.59, 20, "Chicken Sticks", 7, "5 days");
static Housekeeping *soap = new Housekeeping(1.95, 30, "Soap", 50, true);
static Housekeeping *wipes = new Housekeeping(9.99, 20, "Wipes (50)", 51, false);
static Housekeeping *sponge = new Housekeeping(.59, 30, "Sponge", 52, true);
static Housekeeping *bleach = new Housekeeping(1.93, 20, "Bleach (1L)", 53, false);
static Housekeeping *pods = new Housekeeping(5.96, 10, "Tide-Pods", 54, false);
static Housekeeping *shampoo = new Housekeeping(5.99, 20, "Shampoo", 55, true);

#endif
