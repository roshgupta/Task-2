#include <iostream>
using namespace std;

int main()
{
    int ar[5];
    int *p;
    cout << "Enter 5 elements of the array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << (i + 1) << " element : ";
        cin >> ar[i];
    }
    cout << endl;
    p = ar;
    for (int i = 0; i < 5; i++)
    {
        cout << (i + 1) << " element is " << *(p + i) << endl;
    }

    return 0;
}