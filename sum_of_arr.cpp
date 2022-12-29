#include<iostream>
using namespace std;
 
int sumPrint(int arr[],int size){
    int sum=0;
    for (int i=0;i<size;i++){
        sum=sum+arr[i];

    }
    return sum;
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter the values in an array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum of array is : "<<sumPrint(arr,size)<<endl;


 
return 0;
}