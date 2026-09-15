# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number Here:"<<endl;
    cin>>n;
    char ch='a';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j+=1){
            cout<<ch<<" ";
            
        }
        ch+=1;
        cout<<endl;
    }
}