//WAP to generate the Caesar Cipher text of given plain text and also decrypt the 
// generated cipher text. Also give the user the facility to change the value of key

//Testing Data::
//					Plain Text:: MEET ME AFTER THE TOGA PARTY
//                  Cipher Text:: PHHW PH DIWHUWKH WKH WRJD SDUWB (n=3)
//																	Key
// Required logic :: for encryption => (x+k)(mod 26) = y
//                   for decryption => (y-k)(mod 26) = x
// Starting program .................
#include<stdio.h>
#include<conio.h>
#include<string.h>
char alpha[30]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int k=3;
int getpos(char ch)
{
	int i;
	int n=strlen(alpha);
	for(i=0;i<n;i++)
	{
		if(ch==alpha[i])
		return i ;
	}
}	
void encrypt(char ch)
{
	int pos =getpos(ch);
	char l= alpha[(pos+k)%26];
	printf("%c",l);
}

void decrypt(char ch)
{
	int pos =getpos(ch);
	char l= alpha[(pos-k)%26];
	printf("%c",l);
}
int main()
{
	char input[100];
	printf("\n Please Enter a string");
	gets(input);
	int i=0;
	int len = strlen(input);
	
	switch(a)
	{
	case '1':
	printf("Encrypted String is:");
	for(i=0;i<len;i++)
	{
		char ch = input[i];
		encrypt(ch);
	}
	break;
	case '2':
		printf("Decrypted String is:");
		for(i=0;i<len;i++)
	{
		char ch = input[i];
		decrypt(ch);
	}	
	break;
	}
}

