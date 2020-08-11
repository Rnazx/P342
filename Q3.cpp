#include<iostream>
using namespace std;
float hsum(int n){
    float sum=0;
    for(float i=1;i<=n;i++){
        sum=sum+1/i;
    }
    return sum;
}
int main(){
    int i=1;
    double p;
    cout<<"Enter the desired accuracy: ";
    cin>>p;
    while(hsum(i+1)-hsum(i)>p){
        i++;
    }
    cout<<"The sum upto "<<p<<" accuracy is "<<hsum(i+1)<<endl;
    cout<<"The number of terms we need to add is "<<i+1<<endl;
    
}