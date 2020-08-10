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
    float c=1,n;
    cout<<"Enter the number for which you want to find the factorial :";
    cin>>n;
    while(ion(n)==false){
        cout<<"Please enter a non-negative integer "<<endl;
        cin>>n;
    }
    for(int i=n;i>0;i--)
    {
        c*=i;
    }
    cout<<"The factorial is "<<c;
    
    

}