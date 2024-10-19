#include<iostream>
using namespace std;

int main()
{
	int array[7] = { 1,2,6,0,1,7,1 };
	int s1 = 0;
	int s2 = 0;
	int temp;
	int flag = false;

	for (int i = 0; i < 7; i++)
	{
		s1 = 0;
		s2 = 0;
		for (int j = 0; j < i; j++)
		{
			s1 = s1 + array[j];
		}
		for (int j = i+1; j < 7; j++)
		{
			s2 = s2 + array[j];
		}
		if (s1 == s2)
		{
			temp = i;
			flag = true;
			break;
		}



	}

	if (flag == true)
		cout << temp;
	else
		cout << "-1";
	return 0;





}
