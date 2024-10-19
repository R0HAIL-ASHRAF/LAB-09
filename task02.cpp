#include<iostream>
using namespace std;

int main()
{
	const int size = 5;
	char arr1[size] = { 'a','x','a','1','+' };
	char arr2[size] = { '1' ,'x','a','a','+' };
	int count = 0;

	int temp_size = size;


	for (int i = 0; i < temp_size; i++)
	{
		for (int j = 0; j < temp_size; j++)
		{
			if (arr1[i] == arr2[j])
			{
				for (int k = i; k < size; k++)
				{
					arr1[k] = arr1[k + 1];
					
				}
				for (int k = j; k < size; k++)
				{
					arr2[k] = arr2[k + 1];

				}
				i--;
				count++;
				break;

			}

		}
		temp_size--;
	}

	if (count == size)
	{
		cout << "true";
	}
	else
		cout << "false";





	return 0;
}