# include<iostream>
using namespace std;
int main(){
    int n,i,factorial;
    cout<<"Enter The Number Here"<<endl;
    cin>>n;
    factorial=1;
    for(i=n; i>0; i-=1){
        factorial=i*factorial;
    }
    cout<<"The Factorial of a given number "<<n<< " is " <<factorial;
}
