# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Number Here"<<endl;
    cin>>n;
    int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;

    // }while(i<=10);
    int sum=0;
    do{
        sum+=i;
        i++;


    }while(i<=n);
    cout<<sum;

}
