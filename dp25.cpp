#include <iostream>
using namespace std;



bool subset(int arr[],int sum,int n)
{
bool table[n+1][sum+1]; //only going to store true or false

for(int i=0;i<=n;i++)
{
	table[i][0]=1; //Scenario where the sum we need to find is 
			 // 0 hence its always true regardless of our set of numbers
}

for (int j=1;j<=sum;j++)
{
	table[0][j] = 0; //Scenarios where we have no number in our subset.Hence always 0
}

for(int i=1;i<=n;i++)
{
for (int j=1;j<=sum;j++)
{
	table[i][j]=(arr[i-1]>sum)?table[i-1][j]:table[i-1][j]||table[i-1][j-arr[i-1]];
}

}
return table[n][sum];
}

bool subsetv2(int arr[],int sum,int n)
{
	bool table[2][sum+1]; //only going to store true or false

	for(int i=0;i<=1;i++)
	{
		table[i][0] = 1;
	}
	
	for(int j=1;j<=sum;j++)
	{
		table[0][j] = 0;
	}
	
	for(int i=1;i<=n;i++)
	{
	for (int j=1;j<=sum;j++)
	{
		table[i%2][j]=(arr[i-1]>sum)?table[(i-1)%2][j]:table[(i-1)%2][j]||table[(i-1)%2][j-arr[i-1]];
	}

	}
	return table[n%2][sum];
}




int main() 
{ 
  int set[] = {3, 34, 4, 12, 5, 2}; 
  int sum = 9; 
  int n = sizeof(set)/sizeof(set[0]); 
  if (subsetv2(set,sum,n) == true) 
     printf("Found a subset with given sum"); 
  else
     printf("No subset with given sum"); 
  return 0; 
} 
