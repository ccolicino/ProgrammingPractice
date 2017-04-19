#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

template<class T> class LinkedListNode
{
    public:
        LinkedListNode<T> *_Next;
        T _Element;
        LinkedListNode(LinkedListNode<T> *next, T element);
};

template<class T> class LinkedList
{
    private:
        LinkedListNode<T> *_Head;
        LinkedListNode<T> *_Tail;
    public:
        LinkedList<T>();
        void InsertAtHead(T element);
        void InsertAtTail(T element);
        void InsertAfter(T newElement, T checkElement);
        void Delete(T element);
        void DeleteAll(T element);
};

#endif
