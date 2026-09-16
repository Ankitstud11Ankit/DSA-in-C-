# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number here:"<<endl;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j-=1 ){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Another Answer"<<endl;
    char ch= 'a' ;
    for(int i=1; i<=n; i++ ){
        for(int j=1; j<=i; j++){
            cout<<ch<<" ";

        }
        ch+=1;
        cout<<endl;
    }
    cout<<endl;
    cout<<"Another Answer "<<endl;

    
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"Anothet Answer"<<endl;
    int count=1;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Another Answer"<<endl;

    for(int i=1; i<=n; i++){
        for(int j=n; j>=n-i+1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }

        
    
    

}