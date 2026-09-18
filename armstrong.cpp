# include<iostream>
# include<cmath>
using namespace std;
int count_digit(int num){
    int count=0;
    while(num){
        count+=1;
        num/=10;


    }
    return count;

}
bool armstrong(int num,int digit){
    int n=num, ans=0;
    while(n){
        int rem=n%10;
        n/=10;
        ans=ans+pow(rem,digit);
    }
    if (num==ans)
    return 1;
    else
    return 0;

}

int main(){
    int num;
    cout<<"Enter the number here:"<<endl;
    cin>>num;
    int digit=count_digit(num);
    // cout<<count_digit(num);
    cout<<armstrong(num,digit);

}