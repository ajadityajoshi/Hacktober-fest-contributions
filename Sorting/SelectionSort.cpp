#include<iostream>
using namespace std;
void SS( int arr[],int n){
    
     for(int i=0;i<n-1;i++){
         
         for (int j = i+1; j <n; j++)
         {
              if(arr[j]<arr[i]){
              int temp=arr[i];
              arr[i] = arr[j];
              arr[j]=temp;

          }
            
     }
     }
     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }
     
     
}

int main(){
    int n,arr[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SS(arr,n);
    return 0;
}