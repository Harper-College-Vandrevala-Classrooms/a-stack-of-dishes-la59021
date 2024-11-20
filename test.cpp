#include "Dish.hpp"
#include "DishStack.hpp"
#include <cassert>
#include <iostream>
using namespace std;

int main () {
    DishStack dishes;
    Dish dish1 = Dish("1");
    Dish dish2 = Dish("2");
    Dish dish3 = Dish("3");
    Dish dish4 = Dish("4");
    Dish dish5 = Dish("5");
    Dish dish6 = Dish("6");
    Dish dish7 = Dish("7");
    Dish dish8 = Dish("8");
    Dish dish9 = Dish("9");

    dishes.push(dish1);
    dishes.push(dish2);
    dishes.push(dish3);
    dishes.push(dish4);
    dishes.push(dish5);
    dishes.push(dish6);
    dishes.push(dish7);
    dishes.push(dish8);
    dishes.push(dish9);

    assert(dishes.pop().get_description() == "9");
    assert(dishes.pop().get_description() == "8");
    assert(dishes.pop().get_description() == "7");
    assert(dishes.pop().get_description() == "6");
    assert(dishes.pop().get_description() == "5");
    assert(dishes.pop().get_description() == "4");
    assert(dishes.pop().get_description() == "3");
    assert(dishes.pop().get_description() == "2");
    assert(dishes.pop().get_description() == "1");
}