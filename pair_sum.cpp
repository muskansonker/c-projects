#include<iostream>

using namespace std;
 int getPairCount(int arr[],int n, int sum){
    unordered_map=<int,int>m;
    int ans=0;
    for(int i=0;i<n;i++){
        int b=sum-arr[i];
        if(m[b]){
            ans+=m[b];
        }
        m[arr[i]]++;
    }
    return ans;
 }

int main()
{
    int arr[100];
    int size;
    cin>>size;
    cout<<"Enter the values in an array: "<<endl;
    for(int k=0;k<size;k++)
        cin>>arr[k];
    int sum;
    cin>>sum;
    cout<<getPairCount(arr,size,sum);
return 0;
}