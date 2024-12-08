#include "Dish.hpp"
#include "DishStack.hpp"
#include <iostream>
using namespace std;

int main () {
    DishStack dishes;

    cout << "How many dishes would you like to add? ";
    int quantity = 0;
    while (quantity < 1 || quantity > 10) {
        cin >> quantity;
        if (quantity < 1) {
            cout << "You need to add at least 1 dish. ";
        }
        if (quantity > 10) {
            cout << "You can't add more than 10 dishs. ";
        }
    }
    
    for (int x = 0; x < quantity; x++) {
        cout << "enter the description of the dish. " << endl;
        string desc;
        getline(cin, desc);
        dishes.push(Dish(desc));
    }
    
    cout << "These were the dishes you entered." << endl;
    for (int x = 0; x < quantity; x++) {
        cout << dishes.pop().get_description() << endl;
    }
    return 0;
}