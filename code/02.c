#include<stdio.h>
#include<string.h>
int string_length(char*);
int reverse(char*);
int main()
{
	char s[100];
	printf("Enter a string\n");
	gets(s);
	reverse(s);
	printf("Reverse of the string is \"%s\".\n", s);
	return 0;
}

int reverse(char *s)
{
	int length, c;
	char *begin, *end, temp;
	length = string_length(s);
	begin = s;
	end = s;
	for(c=0; c<length-1;c++)
	{
		end++;
	}
	for(c=0; c<length/2;c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	return 0;
}

int string_length(char *pointer)
{
	int c=0;
	while(*(pointer + c)!='\0')
	    c++;
	return c;
}

