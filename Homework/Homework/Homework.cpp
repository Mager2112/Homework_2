/*
   Copyright Mager 2023
   All rights reserved lmao
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>
//HomeWork2
///////1) Sub Array sum
void Sub_Array(int arr[], int n, int m)
{
	int h = m;
	int q = 0;
	int sum = 0;
	while (q < n)
	{
		for (int l = 0; l < n; l += m)
		{
			for (int i = l; i < h; i++)
			{
				if (i < n)
				{
					sum += arr[i];
					q++;
					
				}
			}
			std::cout << "Sub Array #" << h / m << ". Sum is " << sum << std::endl;
			sum = 0;
			h += m;
		}
	}
}

int main()
{
	//1)
	/*int n, m;
	std::cin >> n >> m;
	int* dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	Sub_Array(dinamich_array, n, m);*/
}
