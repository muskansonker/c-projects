#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    } 
}

int main()
{
    /*
    int a[5]={8,9,0,5,6}; // * Initialising an array of size 5
    cout<<"Value at 3 index: "<<a[3]<<endl;
    cout<<"Value at 6 index: "<<a[6]<<endl;

    int b[8]={3,7};
    int n=8;
    cout<<"Printing the array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

    int c[9]={0}; // ! Initialising all element of array with zero.
    int m=9;
    cout<<"Printing the array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
    */
    int e[8]={9,8};
    int o=8;
    printArray(e,8);
return 0;
}