#include<stdio.h>
#include<string.h>
#include<dos.h>
main()
{
	char st[30];
	int i,r=0,c=30;
	printf("enter any string..:");
	gets(st);
	gotoxy(c,r);puts(st);
	for(i=0;i<strlen(st);i++);
	{
		for(r=0;r<=24;r++)
		{
			gotoxy(c,r+1);printf("%c",st[i]);
			gotoxy(c,r);printf(" ");
			delay(100);
			sound(r*50);
		}
		c++;
	}
	nosound();	
}
