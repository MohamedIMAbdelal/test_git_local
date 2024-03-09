#include<iostream>
#include<string>
using namespace std ;

int main()
{
	string word;
	unsigned short int word_length ;
	short int rounds ;
//	cout<<"Enter how many words : ";
	cin>>rounds;
	for(int i = 1; i <= rounds;i++)
{
//	cout<<"Enter word : ";
	cin>>word;
	
	word_length = word.length();
	
	if(word_length > 10 ) 
		
	cout<<word[0]<<(word_length-2)<<word[word_length-1]<<"\n";
	
	else
	cout<<word<<"\n";
}
	return 0 ;
}
