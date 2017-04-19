#include <iostream>
#include "Stack.cpp"

int main(int argc, char *argv[])
{
    Stack<int> *stack = new Stack<int>();
    for (int i = 0; i < 10; i++) {
        std::cout<<"Pushing element: "<<i<<std::endl;
        stack->Push(i);
    }
    for (int i = 0; i < 10; i++) {
        std::cout<<"Pop element: "<<stack->Pop()<<std::endl;
    }
    return 0;
}
