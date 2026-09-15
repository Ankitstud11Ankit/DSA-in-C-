# include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number here:"<<endl;
    cin>>num;
    int i;
    cout<<"Enter how much power:"<<endl;
    cin>>i;
    int n;
    n=num;
    for(int j=1; j<i; j+=1){
        n=num*n;    
    }
    cout<<n;

}