﻿/*
   Copyright Mager 2023
   All rights reserved lmao
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>
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
///////2) Sub Array sum
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
///////3) Reverse List
std::list<int> Mirror_List(std::list<int>& nums, int first)
{
	nums.reverse();
	nums.pop_back();
	nums.push_front(first);
	return nums;
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
        //3)
	std::list<int> nums{ 5, 6, 7, 1, 12, 9, 5, 3, 2 };
	int first{ nums.front() };
	Mirror_List(nums, first);
	std::cout << "result:\n";
	for (int n : nums)
		std::cout << n << "\t";
	*/
}
