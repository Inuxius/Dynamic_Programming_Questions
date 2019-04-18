#include <iostream>
using namespace std;
int max(int a,int b)
{return a>b?a:b;
}
int mine(int i,int j,int n,int m,int arr[][100],int rra[][100])
{
if(j==m-1&&i>=0&&i<=n-1)
return arr[i][j];
if(i<0||i>n-1||j<0||j>m-1)
return 0;
if(rra[i][j]!=-1)
return rra[i][j];
int a=max(max(mine(i+1,j+1,n,m,arr,rra),mine(i+1,j,n,m,arr,rra)),mine(i-1,j-1,n,m,arr,rra)) +  arr[i][j];
rra[i][j]=a;
return a;
}

int main()
{

}
