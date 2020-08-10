#include<iostream>
using namespace std;
bool ion(float n){
    while(n>=0){
        if(n==0)return true;
        n--;
    }
    return false;
}
int main(){
    float c=0,n;
    cout<<"Enter the last number of the sum:";
    cin>>n;
    while(ion(n)==false){
        cout<<"Please enter a non-negative integer \n";
        cout<<"Enter the last number of the sum:";
        cin>>n;
    }
        for(int i=1;i<=n;i++)
    {
        c+=i;
    }
    cout<<"The sum is "<<c;
    }
    

