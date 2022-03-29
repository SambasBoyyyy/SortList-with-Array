
#include<iostream>
#include "sorted_h.h"
using namespace std;



template<class T>
SortedList<T>::SortedList()
{
    length=0;
    currentPos=-1;
}

template<class T>
bool SortedList<T>::isEmpty()
{
    return length==0;
}

template <class T>
bool SortedList<T>::isFull()
{
    return length== max_item;
}

template <class T>
int SortedList<T>::isLength()
{
    return length;
}

template <class T>
void SortedList<T>::makeEmpty()
{
    length=0;
}
template<class T>
void SortedList<T>::Insert(T item)
{
    int location = 0;
    for (int i = 0; i < length; i++)
    {
        if(item > data[i])
        {
            location++;
        }
        else{
            break;
        }
    }

    for (int i = length-1; i>=location; i--)
    {
         data[i+1]=data[i];
    }
    data[location]=item;
    length++;

}

template<class T>
void SortedList<T>::Delete(T item)
{
    int location = 0;
    for(int i=0;i < length; i++)
    {
        if(item == data[i] )
        {
            location=i;
        }
    }

    for(int i = location; i<length; i++)
    {
        data[i]=data[i+1];
    }
    length--;
}

template<class T>
void SortedList<T>::getNextItem(T& item)
{
    currentPos ++;
    item = data[currentPos];
}
template <class T>
void SortedList<T>::retriveLIst(T& item ,bool& isFound)
{
     int first=0;
     int last=length-1;

     while (first<=last)
     {
        int mid=first+last/2;
        if (data[mid]==item)
        {
            isFound=true;
            item = data[mid];
        }
        else if (item>data[mid])
        {
            first=mid+1;
        }
        else{
            last=mid-1;
        }

         }

}
template<class T>
void SortedList<T>::resetList()
{
    currentPos=-1;
}
