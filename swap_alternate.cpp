#include<iostream>
using namespace std;
 
int main()
{
    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter the values in an array: "<<endl;
    for(int k=0;k<size;k++)
        cin>>arr[k];
    
    int i=0;
    while(i<size-1){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
        i=i+2;
    }
    cout<<"Array list after swapping: "<<endl;
    for(int j=0;j<size;j++){
        cout<<arr[i]<<" ";
    }
 
return 0;
}