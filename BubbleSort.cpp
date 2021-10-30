#include<iostream>
using namespace std;
void BS(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++)

            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
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
BS(arr,n);

}
