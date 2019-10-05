#include <iostream>
using namespace std;
int table[100][100]={0};
int pascal(int p)
{
table[0][0]=1;
for(int i=1;i<p;i++)
for(int j=i;j>=0;j--)
table[i][j]=(j==0)?table[i-1][j]:table[i-1][j-1]+table[i-1][j];

}

int lucas(int n,int r,int p)
{
if(n==0)
return 1;
int ni=n%p;
int ri=r%p;
return lucas(n/p,r/p,p)*table[ni][ri] ;
}



int main()
{

pascal(10);
cout<<lucas(10,1,10);
}
