#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 5, 6, 2, 7, 8, 2, 9};
    for(int i=1;i<8;i++){
        int j=i-1;
        int current=arr[i];
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];    
            j--;
        }
        arr[j+1]=current;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}