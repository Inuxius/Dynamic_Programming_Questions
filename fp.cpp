#include <iostream>
using namespace std;

int fp(int n)
{
int table[n],s;

table[0]=1;

for(int i=1;i<=n-1;i++)
{
if(i-2>=0)
s=(i)*table[i-2];
else
s=1;
table[i]=table[i-1]+s;
}
return table[n-1];
}




int main()
{
int n = 4;
cout << fp(n) << endl; 
return 0; 
}
