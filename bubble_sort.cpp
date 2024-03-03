#include<iostream>
using namespace std;
int main(){
    int arr[]={5,4,5,2,3,6,70,8,7};
    int count=1;
    for(int i=0;i<9;i++){
        for(int j=0;j<9-count;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        count+=1;
    }
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}