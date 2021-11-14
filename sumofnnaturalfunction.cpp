#include<iostream>

using namespace std;

int Sumofnaturalnumber(int num){
    int su=0,i;
    for(i=1;i<=num;i++){
        su+=i;
    }
    return su;
}

int main()
{
    int n;
    cout<<"Enter Your Number\n";
    cin>>n;
    int sum=Sumofnaturalnumber(n);
    cout<<"Sum of n natural number\n"<<sum<<endl;
}