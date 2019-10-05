#include <bits/stdc++.h>
using namespace std;

int tiling(int n)
{

int arr[n+1],brr[n+1];
arr[0]=0;arr[1]=1;
brr[0]=0;brr[1]=1;
for(int i=2;i<n+1;i++)
{
arr[i]=arr[i-2]+2*brr[i-1];
brr[i]=arr[i-2]+brr[i-2];
}
}

int main()
{

}
