#include<iostream>
#include<algorithm>
#include<set>
#include<vector>


using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int arr[a][b];
    int l=0;
    int k=0;
    int i=a-1;

    int j=b-1;
    int i1=0;
    int j1=0;
    
int count=0;
for(int row=0;row<a;row++){
    for(int couloumn=0;couloumn<b;couloumn++){
        cin>>arr[row][couloumn];
    }
}



while(count<a*b){
            if(k==j & l!=i){
                cout<<arr[l][b]<<" ";
                l++;

            }

            

            if(l==i & k!=j1){
                cout<<arr[l][b]<<" ";
                k--;
            }

            if(l!=i1 & k==j){
                cout<<arr[l][b]<<" ";
                l--;

            }

            if(l==i1 & k!= j){
                cout<<arr[l][b]<<" ";
                k++;
            }
            if(l==i1 & k==j){
                
                i1++;
                j--;
            }

            if(l==i & k==j1){
                i++;
                j1--;

            }
            if(l==i & k==j){
                i--;
                j--;
            }
            if(l==i1 & k==j1){
                i1++;
                j1++;
            }
            count++;

}
return 0;
}   
