#include<iostream>
using namespace std; 
int findUnique(int a[],int size){
    int ans=0;
    for(int i =0; i<size; i++){
        cout<<ans<<endl;
        ans=ans^a[i]; // ! {3,3,4,5,5}
        cout<<ans<<endl;

    }
    return ans;
}

int main()
{
    int a[5]={3,3,4,5,5};
   
    cout<<findUnique(a,5);
    
return 0;
}