
#include<iostream>
#include <stdio.h>
#include <string.h>
#include<time.h>
#include <regex>
int word_Count(char* str);
int find_Glass_Charact(char* str);
int find_Soglass_Charact(char* str);
int find_Digits(char* str);
int other_Character(char* str);

using namespace std;
void main()
{
	char* str = new char[50];
	cout << " enter some text:\n";
	cin.getline(str, 49);
	cout << "Quantety word = " << word_Count(str) << endl;
	cout << "Quantety characters = " << strlen(str) << endl;
	cout << "Quantety glass = " << find_Glass_Charact(str) << endl;
	cout << "Quantety glass = " << find_Soglass_Charact(str) << endl;
	cout << "Quantety digits = " << find_Digits(str) << endl;
	cout << "Quantety other = " << other_Character(str) << endl;
}

int word_Count(char* str)
{
	char digits[]{ '1','2','3','4','5','6','7','8','9','\0' };
	char punctuashon[]{ ' ',',','.','-','!','?',';',':','\0' };
	int count_word = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(punctuashon); j++)
		{
			if (str[i] == punctuashon[j] && str[i + 1] != punctuashon[j] && i != 0 && str[i + 1] != digits[j])
			{
				++count_word;
			}
		}
	}
	return count_word;
}
int find_Glass_Charact(char* str)
{
	char glass_characters[]{ 'A', 'E', 'I', 'O',' U','\0' };
	int count_glass = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(glass_characters); j++)
		{
			if (toupper(str[i]) == toupper(glass_characters[j]))
			{
				count_glass++;
			}
		}
	}
	return count_glass;
}
int find_Soglass_Charact(char* str)
{
	char soglass_characters[]{ 'B', 'C', 'D',' F', 'G',' H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W',' X', 'Y', 'Z','\0' };
	int  count_soglass = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(soglass_characters); j++)
		{
			if (toupper(str[i]) == toupper(soglass_characters[j]))
			{
				count_soglass++;
			}
		}
	}
	return count_soglass;
}
int find_Digits(char* str)
{
	char digits[]{ '1','2','3','4','5','6','7','8','9','\0' };
	int count_Digits = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(digits); j++)
		{
			if (str[i] == digits[j])
			{
				count_Digits++;
			}
		}
	}
	return count_Digits;
}
int other_Character(char* str)
{
	char other[]{ '@','#','$','%','^','&','*','(',')','[',']','+','<','>','|','/','\0' };
	int count_other = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		for (int j = 0; j < strlen(other); j++)
		{
			if (str[i] == other[j])
			{
				count_other++;
			}
		}
	}
	return count_other;
}
