#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)// Displaying method
{                     
    list<int>::iterator it; // making iterator

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
        
    }
    cout << endl;
}
int main()
{

    // Adding Elements With push_back method
    list<int> list1;
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(5);
    list1.push_back(9);

    list1.pop_back();  // for remove last value
    list1.pop_front(); // for delete front value
    list1.remove(5);   // dlete any select middle value

    display(list1); // Calling Display Function for print

    list<int> list2;
    list2.push_back(1);
    list2.push_back(4);
    list2.push_back(6);
    list2.push_back(8);
    list2.push_back(5);
    list2.push_back(9);

    list1.merge(list2); // Merging two different list
    cout << "After merging List 1:";
    display(list1);
 
    list1.reverse();//Reverse a List
    display(list1);
 
    list1.sort();//Sorting a list
    display(list1);
 
 
    return 0;
}
