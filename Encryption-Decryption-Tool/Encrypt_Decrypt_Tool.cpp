#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void encrypt(char *c);
void decrypt(char *c);

int main()
{
back:
char c[50]=" ";	
int x,choice;
cout<<"ENCRYPTION/DECRYPTION TOOL\n";
cout<<"**************************\n";
cout<<"~(Developed by Anuj Das)~\n"<<endl;
cout<<"Enter the String: ";
gets(c);
cout<<"\nCHOOSE YOUR TOOL\n";
cout<<"****************\n";
cout<<"1. Encrypt The String.\n2. Decrypt The String.\n3. Exit";
cout<<"\nEnter your Choice: ";
cin>>x;



switch(x)
{
	case 1: cout<<"ENCRYPTION TOOL\n";
            cout<<"***************\n";
            break;
    case 2: cout<<"DECRYPTION TOOL\n";
            cout<<"***************\n";
            break;
    case 3: cout<<"\nAgain Press ENTER to Exit......\n";
            exit(0);
    default: cout<<"\n\nInvalid Choice...!!!\nEnter Again.......!!!\n";
}
if(x==1)
{
		system("cls");
cout<<"Original String: ";
puts(c);
encrypt(c);
cout<<"Encrypted String: "<<c;

}
else if(x==2)
{
	system("cls");
cout<<"Original String: ";
puts(c);
decrypt(c);
cout<<"Decrypted String: "<<c;
}
decision:
cout<<"\n\nDo you want to continue ?\n1.Yes \t 2.No\n"<<endl;
cout<<"-->";
cin>>choice;
if(choice==1)
{
system("cls");
gets(c);	
goto back;
system("cls");
}
else if(choice==2)
{
	cout<<"\nExiting...";
	exit(0);
}
else
{
	system("cls");
	cout<<"\nInvalid Choice!!";
	goto decision;
}
}

void encrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr + 9; 
        ptr++;
    }
}
void decrypt(char *c)
{
    char *ptr = c;
    while(*ptr!='\0'){
        *ptr = *ptr - 9; 
        ptr++;
    }
}
