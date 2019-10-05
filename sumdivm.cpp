#include <iostream>
using namespace std;


int sumdivm(int arr[],int m,int n)
{

long int count=0;
for (int i=0;i<n;i++)
count+=arr[i];

bool table[n+1][count+1];

for (int i=0;i<=n;i++)
table[i][0]=true;
for(int j=1;j<=count;j++)
table[0][j]=false;

for (int i=1;i<=n;i++)
for (int j=1;j<=count;j++)
table[i][j] = (arr[i-1]>j)?table[i-1][j]:table[i-1][j]||table[i-1][j-arr[i-1]];

for(int i=1;i<=count;i++)
if(i%m==0&&table[n][i]!=0)
return 1;
return -1;

}

int main()
{
int arr[]={1,2,3,4,5};
int n=5;
int m=5;
cout<<sumdivm( arr,m,n)<<endl;

}


