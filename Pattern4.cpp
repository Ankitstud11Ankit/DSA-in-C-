# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Here"<<endl;
    cin>>n;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<"*"<<" ";

        }
        cout<<endl;
    }
}