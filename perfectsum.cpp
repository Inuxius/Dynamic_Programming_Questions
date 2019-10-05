#include <iostream>
using namespace std;






int recur(bool table[100][100],int n,int sum,int set[],int arr[],int top)
{

//cout<<n<<" "<<sum<<endl;


if(sum == 0)
{
while(top--)
cout<<arr[top]<<" ";
cout<<endl;
return -1;
}


if(table[n-1][sum]){int *sarr=arr;
recur(table,n-1,sum,set,sarr,top);}
if(sum >= set[n-1] && table[n-1][sum-set[n-1]]){
arr[top++]=set[n-1];
recur(table,n-1,sum-set[n-1],set,arr,0);
}

}






int perfectsum(int arr[],int sum,int n)
{
bool table[100][100];

for(int i=0;i<=n;i++)
table[i][0]=1;

for(int j=1;j<=sum;j++)
table[0][j]=0;

for(int i=1;i<=n;i++)
{
for(int j=1;j<=sum;j++)
{
table[i][j] = (arr[i-1]>sum)?table[i-1][j]:table[i-1][j]||table[i-1][j-arr[i-1]];
}
}

int a2r[100]={0};
recur(table,n,sum,arr,a2r,0);



}
int main()
{int arr[]={1,2,3,4,5};
int sum=9;
perfectsum(arr,sum,5);
}
