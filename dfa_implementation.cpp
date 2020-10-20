#include<iostream>
using namespace std;

void error();

main()
{
	int NoChar;
	char word[NoChar];
	int state = 1;

	cout << "Enter the number of char:";
	cin >> NoChar;


	for (int i = 0; i < NoChar; i++)
	{
		cout << "Enter " << i << " character: ";
		cin >> word[i];
	}
	
/*	for (int i = 0; i < NoChar; i++)
	{
		cout << word[i];
	}
*/	
	for (int i = 0; word[i] != NULL; i++)
	{
		switch (state)
		{
			case 1:
				if(word[i]=='a')
				{
					state = 2;
				}
				else 
				{
					error();
				}
			break;
			
			case 2:
				if(word[i]=='a')
				{
					state = 5;
				}
				else if(word[i]=='b')
				{
					state = 3;
				}
				else
				{
					error();
				}
			break;
			
			case 3:
				if(word[i]=='a')
				{
					state = 5;
				}
				else if(word[i]=='b')
				{
					state = 4;
				}
				else
				{
					error();
				}
			break;
			
			case 4:
				if(word[i]=='a')
				{
					state = 6;
				}
				else if(word[i]=='b')
				{
					state = 4;
				}
				else if(word[i]=='c')
				{
					//cout << "arrived";
					state = 7;
				}
				else
				{
					error();
				}
				
			break;
			
			case 5:
				if(word[i]=='a')
				{
					state = 6;
				}
				else if(word[i]=='b')
				{
					state = 3;
				}
				else
				{
					error();
				}
			break;
			
			case 6:
				if(word[i]=='a')
				{
					state = 6;
				}
				else if(word[i]=='b')
				{
					state = 4;
				}
				else if(word[i]=='c')
				{
					state = 7;
				}
				else
				{
					error();
				}
			break;			
		}
		
	}
	
	if(state == 7)
	{
		cout << "Your string is valid";
	}

}


void error()
{
	cout << "Your string is invalid";
}
