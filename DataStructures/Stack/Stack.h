#ifndef _STACK_H
#define _STACK_H

template<class T> class StackNode
{
    public:
        StackNode(StackNode<T> *prev, T element);
        StackNode<T> *Prev;
        T Element;
};

template<class T> class Stack
{
    public:
        StackNode<T> *Top;
        Stack();
        void Push(T element);
        T Pop();
};

#endif
