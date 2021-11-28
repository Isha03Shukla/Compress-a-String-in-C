//WAP to compress a String "AAAAABBBCCCCDDDDD" =>  "A5B3C4D5"
#include<stdio.h>
char * strCompress(char mystr[])
{
	char *s,*in;
	int count=1;
	s=mystr;
	in=mystr;
	while(*s!='\0')
	{
		if(*s==*(s+1))
		{
			count++;
		}
		else
		{
			*in=*s;
			in++;
			*in=count+48;
			in++;
			count=1;
		}
		s++;
	}
	*in='\0';
	return mystr;
}
int main()
{
	char mystr[100];
	printf("Enter a String :");
	gets(mystr);
	printf("Compressed String : %s",strCompress(mystr));
	return 0;
}

