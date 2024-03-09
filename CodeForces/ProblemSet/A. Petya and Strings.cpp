#include<iostream>
#include<string>


using namespace std;

int main()
{
	
	string first_word , second_word ;
	cin>>first_word>>second_word;
	short int f_len , s_len ;
	
	f_len = first_word.length();
	s_len = second_word.length();
	char f_arr[f_len] , s_arr[s_len];
	
	for(int i = 0;i < f_len;i++)
	{
		f_arr[i] = first_word[i];
		s_arr[i] = second_word[i];
		
	}
	
/*	
//	|| f_arr[j] == s_arr[j] - 32
//	cout<<int('a')<<int('A');
	//97 - 65 = 32
	
	for(int j = 0;j < f_len;j++)
	{
		
		if(f_arr[j] != s_arr[j] || f_arr[j] != s_arr[j] + 32 )
			{
				if(f_arr[j] == s_arr[j]  || f_arr[j] == s_arr[j] + 32 )
				{
					cout<<"0"<<"\n";
//					break;
				}
				
			if(f_arr[j] > s_arr[j] || f_arr[j] > s_arr[j] + 32)
				{
					cout<<"1"<<"\n";
//					break;
				}
			if(f_arr[j] < s_arr[j] || f_arr[j] < s_arr[j] + 32)
				{
					cout<<"-1"<<"\n";
//					break;
				}
			}
		
	}
	
//	if(j == f_len - 1)
//		{
//		
//		}
*/

//------------------------------------------------------------------------------------------------------------
//another solution 
	int f_sum = 0;
	int s_sum = 0;
	int upper = 0;
	int minus = 0;
//	cout<<int('z')<<int('Z');// 122 90 25-letters
	
	for(int i = 0;i < f_len;i++)
	{
		if(s_arr[i] >= 65 && s_arr[i] <= 90 )
		{
			upper++;
		}
		f_sum += f_arr[i];
		s_sum += s_arr[i];
	}
	
	for(int j = 0;j < f_len;j++)
	{
		if(f_arr[j] != s_arr[j])
		{
			minus = f_arr[j] - s_arr[j];
//			break;
		}
		cout<<minus <<" ";
	}
	
//	cout<<f_sum<<" "<<s_sum + (upper * 32)<<"\n";
//	cout<<upper<<"\n"<<minus<<"\n";
	
	
	
	
	if(f_sum == s_sum + (upper * 32))
		cout<<"0"<<"\n";
		
	if(f_sum > s_sum + (upper * 32))
		cout<<"1"<<"\n";
		
	if(f_sum < s_sum + (upper * 32))
		cout<<"-1"<<"\n";
		
	return 0;
}
