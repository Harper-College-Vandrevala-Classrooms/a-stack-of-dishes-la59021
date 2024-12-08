#include "Dish.hpp"
#include "DishStack.hpp"
#include <cassert>
#include <array>
#include <iostream>
using namespace std;

#define SUCCESS "[\033[32mOK\033[0m] "

int main () {
    DishStack dishes;
    array<Dish, 9> dish_arr = {Dish("1"), Dish("2"), Dish("3"), Dish("4"), Dish("5"), Dish("6"), Dish("7"), Dish("8"), Dish("9")};

    for (unsigned int x = 0; x < dish_arr.size(); x++) {
        assert(unsigned(dishes.size()) == x);
        dishes.push(dish_arr[x]);
        assert(unsigned(dishes.size()) == (x+1));
    } 
    cout << SUCCESS << ".size() passed all tests." << endl;
    cout << SUCCESS << ".push() passed all tests." << endl;

    array<string, 9> descs = {"9", "8", "7","6","5","4","3","2","1"};
    for (unsigned int x = 0; x < descs.size()-1; x++) {
        assert(dishes.peek().get_description() == descs[x]);
        assert(dishes.pop().get_description() == descs[x]);
        assert(dishes.peek().get_description() == descs[x+1]);
    } 
    cout << SUCCESS << ".peek() passed all tests." << endl;
    cout << SUCCESS << ".pop() passed all tests." << endl;

    cout << SUCCESS << "Dishstack class passed all tests." << endl;
    return 0;
}