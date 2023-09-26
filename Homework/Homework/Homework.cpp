/*
   Copyright Mager 2023
   All rights reserved lmao
*/
// ------------------ THATHS ONLY PROTOTYPES ------------------
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
void Staples(std::string s)
{// ))(())(( answer:4 (())
	int count = 0;
	int max = 0;
	for (int i = 0; i < s.length(); i++)
	{
		
		if (s[i] == '(')
		{
			count++;
			if (count > max)
				max = count;
		}
		else if (s[i] == ')')
		{
			count--;
			if (count < 0)
				break;
		}
	}
	if (count != 0)
		std::cout << "Not correct\n";
	else
		std::cout << "OK: " << max << std::endl;

}
int main()
{
	//1)
	/*int n, m;
	std::cin >> n >> m;
	int* dinamich_array = new int[n];
	for (int i = 0; i < n; i++)
		std::cin >> dinamich_array[i];
	Sub_Array(dinamich_array, n, m);
	//2)
	std::string s;
	std::cin >> s;
	Staples(s);
	*/
}
