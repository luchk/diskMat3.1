#include <iostream>
#include "List.h"

using namespace std;


int main()
{


    List *MyList=new List;


    MyList->Head=NULL;
//
//    for (int i=0;i<=10;i++) Add(i,MyList);
//    Show(MyList);
//
//    ClearList(MyList);

    int howMuch = 0;

    while(true)
    {
        int counter;

        cout << "Add - 1 " << endl;
        cout << "Show - 2" << endl;
        if (howMuch != 0)
        {
            cout << "Clear - 3" << endl;
        }
        cout << "end program - 4" << endl;
        cin >> counter;

        if(counter == 1)
        {
            int newElem;
            cout << "enter number " ;
            cin >> newElem;
            Add(newElem, MyList);
            Show(MyList);
            howMuch++;
        }
        if(counter == 2)
        {
            Show(MyList);
        }
        if(howMuch != 0)
        {
            if (counter == 3)
            {
                howMuch--;
                ClearList(MyList);
                if(howMuch == 0)
                {
                    cout << "empty" << endl;
                } else
                {
                    Show(MyList);
                }
            }
        }
        if(counter == 4 )
        {
            break;
        }
    }




    delete MyList->Head;
    delete MyList;
}