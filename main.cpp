#include <iostream>
#include <algorithm>

//#define SIZE 5

using namespace std;

int main()
{
    int SIZE;
    cout<<"enter how many numbers of your calc: ";
    cin>>SIZE;

    int data[SIZE];
    int i;
    char oper;
    for (i=0; i<SIZE; i++)
    {
        cout<< "enter num "<<i+1<<": ";
        cin>> data[i];
    }

    do
    {
        int mult=1, sum=0;

        cout << "\nplease enter s for Sum , m for Multiply , d for descending order , a for Ascending order, or e for Exit: ";
        cin>> oper;

        switch (oper)
        {
        case's':
        case'S':
            for (i=0; i<SIZE; i++)
                sum+=data[i];
            cout<< "sum is: "<<sum;
            break;

        case'm':
        case'M':
            for (i=0; i<SIZE; i++)
                mult*=data[i];
            cout<< "mult is: "<<mult;
            break;

        case 'd':
        case 'D':

            sort(data,data+SIZE,greater<int>());
            cout << "Descending Sorted array: ";
            for (i = 0; i < SIZE; i++)
            {
                cout << data[i] << " ";
            }
            cout << endl;
            break;

        case 'a':
        case 'A':

            sort(data,data+SIZE,less <int>());
            cout << "Ascending Sorted array: ";
            for (i=0; i<SIZE; i++)
            {
                cout<<data[i]<<" ";
            }
            cout << endl;
            break;

        }

    }
    while (oper!='e');

    return 0;
}
