#include <iostream>
using namespace std;

int binom(int n,int k,int arr[][100])
{
if(n==k||k==0)
return 1;
if(k==1)
return n;
arr[n][k]=binom(n-1,k-1,arr)+binom(n-1,k,arr);
return arr[n][k];
}

int main()
{int n,k,arr[100][100]={0};
cout<<"Type some input"<<endl;
cin>>n>>k;
cout<<binom(n,k,arr)<<endl;
return 0;
}
