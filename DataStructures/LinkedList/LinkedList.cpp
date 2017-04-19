#include <stdlib.h>
#include "LinkedList.h"

template<class T> LinkedListNode<T>::LinkedListNode(LinkedListNode<T> *next, T element)
{
    _Next = next;
    _Element = element;
}

template<class T> LinkedList<T>::LinkedList()
{
    _Head = NULL;
    _Tail = NULL;
}

template<class T> void LinkedList<T>::InsertAtHead(T element)
{
    LinkedListNode<T> *node = new LinkedListNode<T>(_Head, element);
    _Head = node;
    if (_Tail == NULL)
        _Tail = node;
}

template<class T> void LinkedList<T>::InsertAtTail(T element)
{
    LinkedList<T> *node = new LinkedList<T>(NULL, element);
    _Tail->_Next = node;
    _Tail = node;
    if (_Head == NULL)
        _Head = node;
}
