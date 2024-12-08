# A Stack of Dishes 
## by A.J. L.

### Summary
This is a pair of headers and several programs writen in c++ that implements a class called Dish, and DishStack.

The inplemented methods for Dish are:
- Dish()
    - This sets the dish's descriptor to "NULL"
- Dish(std::string description)
    - This sets the dish's descriptor to description
- get_description()
    - This returns the dish's description.

The inplemented methods for DishStack are:
- DishStack()
    - This creates a DishStack and sets the size to 0
- push(Dish input)
    - This prepends input
- pop()
    - This removes and returns the last dish in the stack.
- peek()
    - This returns the last dish in the stack.
- size()
    - This returns the number of dishes in the stack.

### Compilation
To compile the main program, that takes user inputs and builds a stack of dishes until the user is done then it prints and pops through the stack, use the command 
> make 1

To compile the test program, that preforms unit tests on a stack of dishes, use the command
> make 2

To compile the example program, that preforms the example provided at https://cyrusvandrevala.com/teaching/csc/122/labs/a-stack-of-dishes.html, use the command
> make 3


[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/DPAIQAcb)
[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=17227944&assignment_repo_type=AssignmentRepo)
