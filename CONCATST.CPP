#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>

const int SZ=80;

class String
{
char str[20];
public:
String()
{strcpy(str,""); }
String(char s[])
{strcpy(str,s);}
void disp()
{cout<<str;}

String operator+(String ss)
{

if(strlen(str)+strlen(ss.str)<SZ)
{String temp;
strcpy(temp.str,str);
strcat(temp.str,ss.str);
return temp;
}
else
cout<<"\n String Overflow";
}

};

void main()
{clrscr();
String s1= "\nMerry Christmas!";
String s2="\nHappy New Year!\n";
String s3;

s1.disp();
s2.disp();


s3=s1+s2;

s3.disp();
exit(0);
}