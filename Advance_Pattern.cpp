# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number here"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
            }
        for(int k=1; k<=i; k++){
                cout<<"* ";


        }
        cout<<endl;
    }

    cout<<endl;
    cout<<"New Answer"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
            }
        for(int k=1; k<=i; k++){
                cout<<i<<" ";


        }
        cout<<endl;
 
    }
    cout<<endl;
    cout<<"New Answer of new question"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
            }
        for(int k=1; k<=i; k++){
                cout<<k<<" ";


        }
        cout<<endl;
 
    }
    cout<<endl;
    cout<<"New Question Answer"<<endl;
        

}