//
// Created by Vika on 12/2/17.
//

#ifndef DISKMAT3_LIST_H
#define DISKMAT3_LIST_H

#endif //DISKMAT3_LIST_H

#include <iostream>

using namespace std;

//
//struct Item
//{
//    int data;
//    Item* next;
//    Item* previous; //для двозвязних списків
//};
//Item *head, *temp, *front, *rear;
//

struct List
{
    int x;
    List *Next,*Head;
};

void Add(int x, List *&MyList) // а це силка на вказівникб алтернатива двойному вказівнику  ??? доробити по тому дізнатися про це більше
{
    List *temp=new List;
    temp->x=x;
    temp->Next=MyList->Head;
    MyList->Head=temp;
}

void Show(List *MyList) // вказівник на сам стек
{
    List *temp=MyList->Head;

    while (temp!=NULL)
    {
        cout<<temp->x<<" " ;
        temp=temp->Next;
    }
    cout << " " << endl;
}

void ClearList(List *MyList)
{
    int minus = 0;
//    while (MyList->Head!=NULL)
    while(minus++ < 1)
    {
        List *temp=MyList->Head->Next;
        delete MyList->Head;
        MyList->Head=temp;
        //minus++;
    }
}
