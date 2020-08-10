#include<iostream>
using namespace std;
int main(){
    double c=0;
    double i=1;
    double p;
    cout<<"Enter the desired accuracy: ";
    cin>>p;
    while(1/i>p){
        double k=1/i;
        c=c+k;
        i++;
    }
    cout<<"The sum upto "<<p<<" accuracy is "<<c<<endl;
    cout<<"The number of terms we need to add is "<<i<<endl;
    
}