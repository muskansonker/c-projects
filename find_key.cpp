#include<iostream>
using namespace std;
 
 bool search(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
 }
int main()
{
    int arr[100];
    int size;
    cin>>size;


    cout<<"Enter the values in an array: "<<endl;
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int key;
    cin>>key;

    bool found=search(arr,size,key);
    if (found){
        cout<<"Found the Key";
    }
    else{
        cout<<"Not Found the Key";
    }
return 0;
}