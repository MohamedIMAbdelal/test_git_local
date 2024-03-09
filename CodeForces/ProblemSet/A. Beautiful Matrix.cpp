#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	
	
int rows = 5 , cols = 5;
int mat[rows][cols];
int row_pos , col_pos ;
int mid_pos = 2;
int count = 0;
for(int i = 0;i < rows;i++)
{
	for(int j = 0;j < cols;j++)
	{
		cin>>mat[i][j];
	}
}	
	
		
for(int i = 0;i < rows;i++)
{
	for(int j = 0;j < cols;j++)
	{
		if(mat[i][j] == 1)
		{
//			cout<<i<<" "<<j<<"\n";
			row_pos = i;
			col_pos = j;
		}
		
		count = abs(mid_pos - row_pos) + abs(mid_pos - col_pos);
	}
	cout<<"\n";
}		
	
cout<<count<<"\n";	
	return 0 ;
}
