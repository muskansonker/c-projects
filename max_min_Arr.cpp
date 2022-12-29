#include<iostream>
#include<limits.h>

using namespace std;

int getMax(int arr[],int size){
    int max = INT_MIN;
    cout<<"start here"<<endl<<endl;
    for(int i=0;i<size;i++){
       
        if(arr[i]>max){
        
        max=arr[i];
        
        }
    }
    return max;
}
int getMin(int arr[], int size){
    int mini=INT_MAX;
    for(int i=0; i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    return mini;
}


int main()
{
    int size;
    cin>>size;
    int arr[100];
    // ! Taking Input from user...
    for(int i =0 ; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Maximum value is: "<<getMax(arr,size)<<endl;
    cout<<"Minimum value is: "<<getMin(arr,size)<<endl;
return 0;
}