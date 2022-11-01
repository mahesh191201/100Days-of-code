// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Example 1:

// Input: haystack = "sadbutsad", needle = "sad"
// Output: 0
// Explanation: "sad" occurs at index 0 and 6.
// The first occurrence is at index 0, so we return 0.


	class Solution
{
public:
	int strStr(string haystack, string needle)
	{
		int needle_len = needle.length();
		int haystack_len = haystack.length();
		if (needle_len == 0)
		{
			return 0;
		}
		int j = 0;
		for (int i = 0; i < haystack_len; i++)
		{

			if (haystack[i] == needle[j])
			{
				j++;
			}
			else
			{
				i = i - j;
				j = 0;
			}
			if (j == needle_len)
			{
				return i - j + 1;
			}
		}
		return -1;
	}
};