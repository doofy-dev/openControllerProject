//
// Created by teeebor on 2017-09-05.
//

#pragma once
template <typename T>
class LinkedList{
public:
    T* item;
    LinkedList<T> *prev;
    LinkedList<T> *next;
    const LinkedList<T> *first;

    LinkedList():first(this){};
    LinkedList(LinkedList<T> firstItem):first(firstItem){};


};