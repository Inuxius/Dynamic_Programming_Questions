#include <iostream>
using namespace std;


int coinchange(int x,int arr[],int i)
{
if(x==0)
return 1;


if(x<0)
return 0;


if(x>0&&i<0)
return 0;

return coinchange(x-arr[i],arr,i)+coinchange(x,arr,i-1);
}

int coinchange_2(int x,int arr[],int n)
{
int table[x+1][n];

for(int i=0;i<n;i++)
table[0][i]=1;

for(int i=1;i<x+1;i++)
{
for(int j=0;j<n;j++)
{
int q = (i-arr[j]>=0)?table[i-arr[j]][j]:0;

int y = (j>=1)?table[i][j-1]:0;

table[i][j]=q+y;

}
}
return table[x][n-1];
}   
int main()
{
int arr[]={1,2,3};
int count=0;
int x=4;


cout<<coinchange_2(x,arr,3)<<endl;

}
