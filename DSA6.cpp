# include<iostream>
using namespace std;
int main(){
    int n,sum,i,sq;
    cout<<"Enter the number here:"<<endl;
    cin>>n;
    sum=0;
    for(i=1; i<=n; i+=1){
        sq=i*i;
        sum+=sq;
    }
    cout<<"The Sum Of square of "<<n<<"Natural Numbers are "<<sum;

}