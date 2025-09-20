#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // int marks[100];//syntax
    // int marks[5]={100,20,39,99,88};//syntax
    // int sz = sizeof(marks) / sizeof(marks[0]);
    // int sz = 5;
    // int marks[sz];

    // for (int i = 0; i < sz; i++)//taking user inout
    // {
    //     cin>>marks[i];
    // }

    // for (int i = 0; i < sz; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }

    // WAP to find Smallest number in array 
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int smallest = 1000000000;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
        
    }
    cout<<"The smallest number is"<<smallest;
    return 0;
}
