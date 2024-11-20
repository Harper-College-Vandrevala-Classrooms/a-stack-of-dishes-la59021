#pragma once

#include "Dish.hpp"
#include <array>
using namespace std;

class DishStack {
    public:
        DishStack() {
            stackSize = 0;
        }
        void push(Dish input) {
            this->Dishes[stackSize] = input;
            stackSize++;
        } 
        Dish pop() {
            stackSize--;
            return Dishes[stackSize];
        }
        Dish peek() {
            return Dishes[stackSize-1];
        }
        int size() {
            return stackSize;
        }

    private:
        int stackSize;
        Dish Dishes[10];
};