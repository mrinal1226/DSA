#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
       count=count+n-1;
       cout<<count;
        col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
    }
