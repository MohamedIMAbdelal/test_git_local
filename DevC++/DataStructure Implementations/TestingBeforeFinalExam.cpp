#include<iostream>

using namespace std;
int sum(int num)
{
	if(num == 0)
	{
		return 1;
	}
	else 
		return num * sum(num - 1);
}

int main()
{
cout <<sum(5);

}
