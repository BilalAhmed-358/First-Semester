#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100],temp;
	printf("Enter the first string\n");
	gets(str1);
	printf("Enter the second string\n");
	gets(str2);
	int i=strlen(str1),j=strlen(str2),a=0,b=0,count=0;
	if(i==j)
	{	
		for(a=0;a<i;a++)
		{
			for(b=a+1;b<i;b++)
			{
				if(str1[a]>str1[b])
				{
					temp=str1[a];
					str1[a]=str1[b];
					str1[b]=temp;
					
				}
			}
		}
		for(a=0;a<j;a++)
		{
			for(b=a+1;b<j;b++)
			{
				if(str2[a]>str2[b])
				{
					temp=str2[a];
					str2[a]=str2[b];
					str2[b]=temp;
					
				}
			}
		}
		for(a=0;a<i;a++)
		{
			if(str1[a]==str2[a])
			count++;
			else
			break;
		}
		if(count==i)
		printf("The strings are anagram\n");
		else
		printf("The strings are not anagram\n");
	}
	else
	printf("The strings are not anagram since their numbers of letters are not same\n");
}
