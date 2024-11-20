#include "Dish.hpp"
#include "DishStack.hpp"
#include <cassert>
#include <iostream>
using namespace std;

int main () {
    DishStack stack;
    Dish one_dish = Dish("A dish with one fish pattern on it");
    Dish two_dish = Dish("A dish with two fish patterns on it");
    Dish red_dish = Dish("A dish with a red fish pattern on it");
    Dish blue_dish = Dish("A dish with a blue fish pattern on it");

    // The variable stack_size should equal zero.
    int stack_size = stack.size();
    assert(stack_size == 0);

    stack.push(one_dish);
    stack.push(two_dish);
    stack.push(red_dish);
    stack.push(blue_dish);

    // The variable size_after_pushes should equal four.
    int size_after_pushes = stack.size();
    assert(size_after_pushes == 4);

    // The variable peeked_dish should have a description of "A dish with a blue fish pattern on it"
    Dish peeked_dish = stack.peek();
    assert(peeked_dish.get_description() == "A dish with a blue fish pattern on it");

    // The variable popped_dish should have a description of "A dish with a blue fish pattern on it"
    Dish popped_dish = stack.pop();
    assert(popped_dish.get_description() == "A dish with a blue fish pattern on it");

    // The variable another_popped_dish should have a description of "A dish with a red fish pattern on it"
    Dish another_popped_dish = stack.pop();
    assert(another_popped_dish.get_description() == "A dish with a red fish pattern on it");

    // The variable final_size should equal two.
    int final_size = stack.size();
    assert(final_size == 2);

    cout << "The example code works." << endl;
}