#ifndef SORTED_H_INCLUDED
#define SORTED_H_INCLUDED

#include<iostream>
using namespace std;

 const int max_item  = 100;

template<class T>

class SortedList
{
    private:

           T data[max_item];
           int length;
           int currentPos;
    public:
      SortedList();
      bool isEmpty();
      bool isFull();
      void makeEmpty();
      int isLength();
      void Insert(T);
      void Delete(T);
      void getNextItem(T&);
      void retriveLIst(T&,bool&);
      void resetList();


};

#endif
