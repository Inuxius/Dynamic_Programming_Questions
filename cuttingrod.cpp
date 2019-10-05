#include <bits/stdc++.h>
using namespace std;


int cuttingrod(int price[],int n)
{
int i=0;int k=0;
int arr[100]={0};
int max=0;
arr[0]=price[0];
for(int i=1;i<n+1;i++)
{
k=0;
if(i<n)
max=price[i];
else
max=0;
while(k<(i+1)/2)
{
max=(max>arr[k]+arr[i-k-1])?max:arr[k]+arr[i-k-1];
k++;
}
arr[i]=max;
}
cout<<arr[n-1]<<endl;
}


int main()
{

 int arr[] = {1, 5, 8, 9, 10, 17, 17, 20}; 
 cuttingrod(arr,8);
}
