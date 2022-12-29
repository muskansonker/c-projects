#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    cout<<endl;

}
int main()
{
    int arr[100];
    int size;
    cin>>size;


    cout<<"Enter the values in an array: "<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<reverse(arr,size)<<endl;
    cout<<printArray(arr,size)<<endl;
 
return 0;
}