#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(i%n==0)
        cout<<"Not a prime no"<<endl;
        break;
    }
    if(isprime==0){
        cout<<"not a prime no"<<endl;
    }
    else{
        cout<<"is a prime no"<<endl;

    }
}