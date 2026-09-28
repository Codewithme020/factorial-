#include<iostream>
using namespace std;
int main(){
    int n , rev, mux=1;
    cout<<"enter the number";
    cin>>n;
    while(n==1){
        rev =n-1;
        mux*= n;
        n = rev;

    }
    cout<<mux;
cout<<"hello";
}