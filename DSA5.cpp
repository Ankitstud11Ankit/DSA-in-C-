# include<iostream>
using namespace std;
int main(){
    int sum,n,i;
    cout<<"Enter The Number Here:"<<endl;
    cin>>n;
    sum=0;
    for(i=1; i<=n; i+=1 ){
        sum+=i;
    }
    cout<<"The sum of "<<n<<"Natural Numbers are "<< sum;

}