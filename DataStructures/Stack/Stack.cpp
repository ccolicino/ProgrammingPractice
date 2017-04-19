#include <stdlib.h>
#include "Stack.h"


template<class T> StackNode<T>::StackNode(StackNode<T> *prev, T element)
{
    Prev = prev;
    Element = element;
}

template<class T> Stack<T>::Stack()
{
    Top = NULL;
}

template<class T> void Stack<T>::Push(T element)
{
    StackNode<T> *node = new StackNode<T>(Top, element);
    Top = node;
}

template<class T> T Stack<T>::Pop()
{
    StackNode<T> *node = Top;
    T element = node->Element;
    Top = node->Prev;
    delete node;
    return element;
}
