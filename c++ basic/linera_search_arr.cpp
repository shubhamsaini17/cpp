#include <iostream>
#include <list> // to use list we have to include list header
using namespace std;

int linear_search(int array[], int element)
{
    for (int i = 0; i < 10; i++)
    {
        if (element == array[i])
        {
            cout << "element found at the index no: " << i;
        }
    }
}

int main()
{

    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int element;
    cout << "enter the elemet you want to search" << endl;

    cin >> element;
    linear_search(array, element);

    return 0;
}