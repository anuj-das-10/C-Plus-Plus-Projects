#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<process.h>

using namespace std;

  int main()

    {
    //Displaying Introduction
    
    system("COLOR 0B");  //Background and Font Colour Control
    
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tWELCOME\a";
    Sleep(3000);
    system("cls");

	{
                       Sleep(10);
                       system("cls");
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t MODERN PERIODIC TABLE USING C++";
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t!!....DEVELOPED BY ANUJ DAS....!!\a";
                       Sleep(5000);
    }

   {
    system("cls");
 	int a,ch;
 	char sym[10],name[20];

         do {
            ch=0;   //To Clear Previous Details in the output
            a=0;
            strcpy(name," "); //Clear previous results and allow to re-enter the name of the element
            strcpy(sym," ");  //Clear previous results and allow to re-enter the symbol of the element

     //Displaying the modern periodic table
     
    cout<<"\n\t\t\t\t\t\tTHE MODERN PERIODIC TABLE\n";
    cout<<"\t\t\t\t\t\t-------------------------\n";
    cout<<"\t\t\t\t\t\t (DEVELOPED BY ANUJ DAS)\n\n";
    cout<<"\n \t1     2       3       4     5    6     7     8     9     10    11    12    13    14    15    16    17   18"<<endl;
 	cout<<"\n 1\tH                                                                                                       He";
 	cout<<"\n 2\tLi    Be                                                                   B     C     N     O     F    Ne";
 	cout<<"\n 3\tNa    Mg                                                                   Al    Si    P     S     Cl   Ar";
 	cout<<"\n 4\tK     Ca      Sc      Ti    V    Cr    Mn    Fe    Co    Ni    Cu    Zn    Ga    Ge    As    Se    Br   Kr";
 	cout<<"\n 5\tRb    Sr      Y       Zr    Nb   Mo    Tc    Ru    Rh    Pd    Ag    Cd    In    Sn    Sb    Te    I    Xe";
 	cout<<"\n 6\tCs    Ba   *(57-71)   Hf    Ta   W     Re    Os    Ir    Pt    Au    Hg    Ti    Pb    Bi    Po    At   Rn";
 	cout<<"\n 7\tFr    Ra  **(89-103)  Rf    Db   Sg    Bh    Hs    Mt    Ds    Rg    Cn    Nh    FI    Mc    Lv    Ts   Og";
 	cout<<"\n \n\t\t*Lanthanides: La    Ce   Pr    Nd    Pm    Sm    Eu    Gd    Tb    Dy    Ho    Er    Tm    Yb   Lu";
 	cout<<"\n \t\t **Actinides: Ac    Th   Pa    U     Np    Pu    Am    Cm    Bk    Cf    Es    Fm    Md    No   Lr\a"<<endl;
    cout<<"\n------------------------------------------------------------";
 	cout<<"\nSEARCH DETAILS OF AN ELEMENT BY USING THE FOLLOWING METHODS:";
 	cout<<"\n------------------------------------------------------------";
    cout<<"\n1.Search by Atomic Number \n2.Search by Element Symbol \n3.Search by Element Name(Eg: Carbon) \n4.Exit \n\nEnter Your Choice: ";
 	cin>>ch;
 	
 	//Initializing Condition for Choice
 	
	switch(ch)
 	{
 	    case 1: cout<<"\nEnter Atomic Number of the Element: ";
                cin>>a;
                cout<<"\n------------------------------------------";
                break;
        case 2: cout<<"\nEnter the Symbol of the Element: ";
                cin>>sym;
                cout<<"\n------------------------------------------";
                break;
        case 3: cout<<"\nEnter the Name of the Element: ";
                cin>>name;
                cout<<"\n------------------------------------------";
                break;
        case 4: cout<<"\nAgain Press ENTER to Exit......\n";
                exit(1);
                break;
        default: cout<<"\n\nInvalid Choice...!!!\nEnter Again.......!!!\n";

 	}

	 //Initializing Search Algorithm along with details of the Element


 	   while(a==1||strcmp(sym,"H")==0||strcmp(name,"Hydrogen")==0)
 	   {
 		cout<<"\nAtomic Number: 1\n";
		cout<<"Name: Hydrogen\n";
 		cout<<"Latin Name: Hydrogenium\n";
 		cout<<"Symbol: H\n";
 		cout<<"Atomic Mass/Weight: 1.0079 g/mol\n";
 		cout<<"Period: 1\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==2||strcmp(sym,"He")==0||strcmp(name,"Helium")==0)
 	   {
 		cout<<"\nAtomic Number: 2\n";
		cout<<"Name: Helium\n";
 		cout<<"Latin Name: Helium\n";
 		cout<<"Symbol: He\n";
 		cout<<"Atomic Mass/Weight: 4.0026 g/mol\n";
 		cout<<"Period: 1\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==3||strcmp(sym,"Li")==0||strcmp(name,"Lithium")==0)
 	   {
 		cout<<"\nAtomic Number: 3\n";
		cout<<"Name: Lithium\n";
 		cout<<"Latin Name: Lithium\n";
 		cout<<"Symbol: Li\n";
 		cout<<"Atomic Mass/Weight: 6.941 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==4||strcmp(sym,"Be")==0||strcmp(name,"Beryllium")==0)
 	   {
 		cout<<"\nAtomic Number: 4\n";
		cout<<"Name: Beryllium\n";
 		cout<<"Latin Name: Beryllium\n";
 		cout<<"Symbol: Be\n";
 		cout<<"Atomic Mass/Weight: 9.0121 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==5||strcmp(sym,"B")==0||strcmp(name,"Boron")==0)
 	   {
 		cout<<"\nAtomic Number: 5\n";
		cout<<"Name: Boron\n";
 		cout<<"Latin Name: Borum\n";
 		cout<<"Symbol: B\n";
 		cout<<"Atomic Mass/Weight: 10.811 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==6||strcmp(sym,"C")==0||strcmp(name,"Carbon")==0)
 	   {
 		cout<<"\nAtomic Number: 6\n";
		cout<<"Name: Carbon\n";
 		cout<<"Latin Name: Carbonium\n";
 		cout<<"Symbol: C\n";
 		cout<<"Atomic Mass/Weight: 12.0107 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==7||strcmp(sym,"N")==0||strcmp(name,"Nitrogen")==0)
 	   {
 		cout<<"\nAtomic Number: 7\n";
		cout<<"Name: Nitrogen\n";
 		cout<<"Latin Name: Nitrogenium\n";
 		cout<<"Symbol: N\n";
 		cout<<"Atomic Mass/Weight: 14.0067 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==8||strcmp(sym,"O")==0||strcmp(name,"Oxygen")==0)
 	   {
 		cout<<"\nAtomic Number: 8\n";
		cout<<"Name: Oxygen\n";
 		cout<<"Latin Name: Oxygenium\n";
 		cout<<"Symbol: O\n";
 		cout<<"Atomic Mass/Weight: 15.9994 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==9||strcmp(sym,"F")==0||strcmp(name,"Fluorine")==0)
 	   {
 		cout<<"\nAtomic Number: 9\n";
		cout<<"Name: Fluorine\n";
 		cout<<"Latin Name: Fluorum\n";
 		cout<<"Symbol: F\n";
 		cout<<"Atomic Mass/Weight: 18.9984 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==10||strcmp(sym,"Ne")==0||strcmp(name,"Neon")==0)
 	   {
 		cout<<"\nAtomic Number: 10\n";
		cout<<"Name: Neon\n";
 		cout<<"Latin Name: Neon\n";
 		cout<<"Symbol: Ne\n";
 		cout<<"Atomic Mass/Weight: 20.1797 g/mol\n";
 		cout<<"Period: 2\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==11||strcmp(sym,"Na")==0||strcmp(name,"Sodium")==0)
 	   {
 		cout<<"\nAtomic Number: 11\n";
		cout<<"Name: Sodium\n";
 		cout<<"Latin Name: Natrium\n";
 		cout<<"Symbol: Na\n";
 		cout<<"Atomic Mass/Weight: 22.9897 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==12||strcmp(sym,"Mg")==0||strcmp(name,"Magnesium")==0)
 	   {
 		cout<<"\nAtomic Number: 12\n";
		cout<<"Name: Magnesium\n";
 		cout<<"Latin Name: Magnesium\n";
 		cout<<"Symbol: Mg\n";
 		cout<<"Atomic Mass/Weight: 24.3050 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==13||strcmp(sym,"Al")==0||strcmp(name,"Aluminum")==0)
 	   {
 		cout<<"\nAtomic Number: 13\n";
		cout<<"Name: Aluminum\n";
 		cout<<"Latin Name: Aluminium\n";
 		cout<<"Symbol: Al\n";
 		cout<<"Atomic Mass/Weight: 26.9815 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==14||strcmp(sym,"Si")==0||strcmp(name,"Silicon")==0)
 	   {
 		cout<<"\nAtomic Number: 14\n";
		cout<<"Name: Silicon\n";
 		cout<<"Latin Name: Silicium\n";
 		cout<<"Symbol: Si\n";
 		cout<<"Atomic Mass/Weight: 28.0855 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==15||strcmp(sym,"P")==0||strcmp(name,"Phosphorus")==0)
 	   {
 		cout<<"\nAtomic Number: 15\n";
		cout<<"Name: Phosphorus\n";
 		cout<<"Latin Name: Phosphorus\n";
 		cout<<"Symbol: P\n";
 		cout<<"Atomic Mass/Weight: 30.9737 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==16||strcmp(sym,"S")==0||strcmp(name,"Sulphur")==0)
 	   {
 		cout<<"\nAtomic Number: 16\n";
		cout<<"Name: Sulphur\n";
 		cout<<"Latin Name: Sulphur\n";
 		cout<<"Symbol: S\n";
 		cout<<"Atomic Mass/Weight: 32.065 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==17||strcmp(sym,"Cl")==0||strcmp(name,"Chlorine")==0)
 	   {
 		cout<<"\nAtomic Number: 17\n";
		cout<<"Name: Chlorine\n";
 		cout<<"Latin Name: Chlorum\n";
 		cout<<"Symbol: Cl\n";
 		cout<<"Atomic Mass/Weight: 35.453 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==18||strcmp(sym,"Ar")==0||strcmp(name,"Argon")==0)
 	   {
 		cout<<"\nAtomic Number: 18\n";
		cout<<"Name: Argon\n";
 		cout<<"Latin Name: Argon\n";
 		cout<<"Symbol: Ar\n";
 		cout<<"Atomic Mass/Weight: 39.948 g/mol\n";
 		cout<<"Period: 3\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==19||strcmp(sym,"K")==0||strcmp(name,"Potassium")==0)
 	   {
 		cout<<"\nAtomic Number: 19\n";
		cout<<"Name: Potassium\n";
 		cout<<"Latin Name: Kalium\n";
 		cout<<"Symbol: K\n";
 		cout<<"Atomic Mass/Weight: 39.0983 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==20||strcmp(sym,"Ca")==0||strcmp(name,"Calcium")==0)
 	   {
 		cout<<"\nAtomic Number: 20\n";
		cout<<"Name: Calcium\n";
 		cout<<"Latin Name: Calcium\n";
 		cout<<"Symbol: Ca\n";
 		cout<<"Atomic Mass/Weight: 40.078 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==21||strcmp(sym,"Sc")==0||strcmp(name,"Scandium")==0)
 	   {
 		cout<<"\nAtomic Number: 21\n";
		cout<<"Name: Scandium\n";
 		cout<<"Latin Name: Scandium\n";
 		cout<<"Symbol: Sc\n";
 		cout<<"Atomic Mass/Weight: 444.9559 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==22||strcmp(sym,"Ti")==0||strcmp(name,"Titanium")==0)
 	   {
 		cout<<"\nAtomic Number: 22\n";
		cout<<"Name: Titanium\n";
 		cout<<"Latin Name: Titanium\n";
 		cout<<"Symbol: Ti\n";
 		cout<<"Atomic Mass/Weight: 47.867 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 4\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==23||strcmp(sym,"V")==0||strcmp(name,"Vanadium")==0)
 	   {
 		cout<<"\nAtomic Number: 23\n";
		cout<<"Name: Vanadium\n";
 		cout<<"Latin Name: Vanadium\n";
 		cout<<"Symbol: V\n";
 		cout<<"Atomic Mass/Weight: 50.9415 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 5\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==24||strcmp(sym,"Cr")==0||strcmp(name,"Chromium")==0)
 	   {
 		cout<<"\nAtomic Number: 24\n";
		cout<<"Name: Chromium\n";
 		cout<<"Latin Name: Chromium\n";
 		cout<<"Symbol: Cr\n";
 		cout<<"Atomic Mass/Weight: 51.9961 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 6\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==25||strcmp(sym,"Mn")==0||strcmp(name,"Manganese")==0)
 	   {
 		cout<<"\nAtomic Number: 25\n";
		cout<<"Name: Manganese\n";
 		cout<<"Latin Name: Manganum\n";
 		cout<<"Symbol: Mn\n";
 		cout<<"Atomic Mass/Weight: 54.9380 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 7\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==26||strcmp(sym,"Fe")==0||strcmp(name,"Iron")==0)
 	   {
 		cout<<"\nAtomic Number: 26\n";
		cout<<"Name: Iron\n";
 		cout<<"Latin Name: Ferrum\n";
 		cout<<"Symbol: Fe\n";
 		cout<<"Atomic Mass/Weight: 55.845 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 8\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==27||strcmp(sym,"Co")==0||strcmp(name,"Cobalt")==0)
 	   {
 		cout<<"\nAtomic Number: 27\n";
		cout<<"Name: Cobalt\n";
 		cout<<"Latin Name: Cobaltum\n";
 		cout<<"Symbol: Co\n";
 		cout<<"Atomic Mass/Weight: 58.9331 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 9\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==28||strcmp(sym,"Ni")==0||strcmp(name,"Nickel")==0)
 	   {
 		cout<<"\nAtomic Number: 28\n";
		cout<<"Name: Nickel\n";
 		cout<<"Latin Name: Niccolum\n";
 		cout<<"Symbol: Ni\n";
 		cout<<"Atomic Mass/Weight: 58.6934 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 10\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==29||strcmp(sym,"Cu")==0||strcmp(name,"Copper")==0)
 	   {
 		cout<<"\nAtomic Number: 29\n";
		cout<<"Name: Copper\n";
 		cout<<"Latin Name: Cuprum\n";
 		cout<<"Symbol: Cu\n";
 		cout<<"Atomic Mass/Weight: 63.456 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 11\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==30||strcmp(sym,"Zn")==0||strcmp(name,"Zinc")==0)
 	   {
 		cout<<"\nAtomic Number: 30\n";
		cout<<"Name: Zinc\n";
 		cout<<"Latin Name: Zincum\n";
 		cout<<"Symbol: Zn\n";
 		cout<<"Atomic Mass/Weight: 65.409 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 12\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==31||strcmp(sym,"Ga")==0||strcmp(name,"Gallium")==0)
 	   {
 		cout<<"\nAtomic Number: 31\n";
		cout<<"Name: Gallium\n";
 		cout<<"Latin Name: Gallium\n";
 		cout<<"Symbol: Ga\n";
 		cout<<"Atomic Mass/Weight: 69.723 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==32||strcmp(sym,"Ge")==0||strcmp(name,"Germanium")==0)
 	   {
 		cout<<"\nAtomic Number: 32\n";
		cout<<"Name: Germanium\n";
 		cout<<"Latin Name: Germanium\n";
 		cout<<"Symbol: Ge\n";
 		cout<<"Atomic Mass/Weight: 72.64 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==33||strcmp(sym,"As")==0||strcmp(name,"Arsenic")==0)
 	   {
 		cout<<"\nAtomic Number: 33\n";
		cout<<"Name: Arsenic\n";
 		cout<<"Latin Name: Arsenicum\n";
 		cout<<"Symbol: As\n";
 		cout<<"Atomic Mass/Weight: 74.9216 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==34||strcmp(sym,"Se")==0||strcmp(name,"Selenium")==0)
 	   {
 		cout<<"\nAtomic Number: 34\n";
		cout<<"Name: Selenium\n";
 		cout<<"Latin Name: Selenium\n";
 		cout<<"Symbol: Se\n";
 		cout<<"Atomic Mass/Weight: 78.96 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==35||strcmp(sym,"Br")==0||strcmp(name,"Bromine")==0)
 	   {
 		cout<<"\nAtomic Number: 35\n";
		cout<<"Name: Bromine\n";
 		cout<<"Latin Name: Bromum\n";
 		cout<<"Symbol: Br\n";
 		cout<<"Atomic Mass/Weight: 79.904 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==36||strcmp(sym,"Kr")==0||strcmp(name,"Krypton")==0)
 	   {
 		cout<<"\nAtomic Number: 36\n";
		cout<<"Name: Krypton\n";
 		cout<<"Latin Name: Krypton\n";
 		cout<<"Symbol: Kr\n";
 		cout<<"Atomic Mass/Weight: 83.798 g/mol\n";
 		cout<<"Period: 4\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==37||strcmp(sym,"Rb")==0||strcmp(name,"Rubidium")==0)
 	   {
 		cout<<"\nAtomic Number: 37\n";
		cout<<"Name: Rubidium\n";
 		cout<<"Latin Name: Rubidium\n";
 		cout<<"Symbol: Rb\n";
 		cout<<"Atomic Mass/Weight: 85.467 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==38||strcmp(sym,"Sr")==0||strcmp(name,"Strontium")==0)
 	   {
 		cout<<"\nAtomic Number: 38\n";
		cout<<"Name: Strontium\n";
 		cout<<"Latin Name: Strontium\n";
 		cout<<"Symbol: Sr\n";
 		cout<<"Atomic Mass/Weight: 87.62 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==39||strcmp(sym,"Y")==0||strcmp(name,"Yttrium")==0)
 	   {
 		cout<<"\nAtomic Number: 39\n";
		cout<<"Name: Yttrium\n";
 		cout<<"Latin Name: Yttrium\n";
 		cout<<"Symbol: Y\n";
 		cout<<"Atomic Mass/Weight: 88.905 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==40||strcmp(sym,"Zr")==0||strcmp(name,"Zirconium")==0)
 	   {
 		cout<<"\nAtomic Number: 40\n";
		cout<<"Name: Zirconium\n";
 		cout<<"Latin Name: Zirconium\n";
 		cout<<"Symbol: Zr\n";
 		cout<<"Atomic Mass/Weight:  g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 4\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==41||strcmp(sym,"Nb")==0||strcmp(name,"Niobium")==0)
 	   {
 		cout<<"\nAtomic Number: 41\n";
		cout<<"Name: Niobium\n";
 		cout<<"Latin Name: Niobium\n";
 		cout<<"Symbol: Nb\n";
 		cout<<"Atomic Mass/Weight: 92.906 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 5\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==42||strcmp(sym,"Mo")==0||strcmp(name,"Molybdenum")==0)
 	   {
 		cout<<"\nAtomic Number: 42\n";
		cout<<"Name: Molybdenum\n";
 		cout<<"Latin Name: Molybdaenum\n";
 		cout<<"Symbol: Mo\n";
 		cout<<"Atomic Mass/Weight: 95.94 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 6\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==43||strcmp(sym,"Tc")==0||strcmp(name,"Technetium")==0)
 	   {
 		cout<<"\nAtomic Number: 43\n";
		cout<<"Name: Technetium\n";
 		cout<<"Latin Name: Technetium\n";
 		cout<<"Symbol: Tc\n";
 		cout<<"Atomic Mass/Weight: 98.906 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 7\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==44||strcmp(sym,"Ru")==0||strcmp(name,"Ruthenium")==0)
 	   {
 		cout<<"\nAtomic Number: 44\n";
		cout<<"Name: Ruthenium\n";
 		cout<<"Latin Name: Ruthenium\n";
 		cout<<"Symbol: Ru\n";
 		cout<<"Atomic Mass/Weight: 101.07 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 8\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==45||strcmp(sym,"Rh")==0||strcmp(name,"Rhodium")==0)
 	   {
 		cout<<"\nAtomic Number: 45\n";
		cout<<"Name: Rhodium\n";
 		cout<<"Latin Name: Rhodium\n";
 		cout<<"Symbol: Rh\n";
 		cout<<"Atomic Mass/Weight: 102.905 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 9\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==46||strcmp(sym,"Pd")==0||strcmp(name,"Palladium")==0)
 	   {
 		cout<<"\nAtomic Number: 46\n";
		cout<<"Name: Palladium\n";
 		cout<<"Latin Name: Palladium\n";
 		cout<<"Symbol: Pd\n";
 		cout<<"Atomic Mass/Weight: 106.42 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 10\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==47||strcmp(sym,"Ag")==0||strcmp(name,"Silver")==0)
 	   {
 		cout<<"\nAtomic Number: 47\n";
		cout<<"Name: Silver\n";
 		cout<<"Latin Name: Argentum\n";
 		cout<<"Symbol: Ag\n";
 		cout<<"Atomic Mass/Weight: 107.868 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 11\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==48||strcmp(sym,"Cd")==0||strcmp(name,"Cadmium")==0)
 	   {
 		cout<<"\nAtomic Number: 48\n";
		cout<<"Name: Cadmium\n";
 		cout<<"Latin Name: Cadmium\n";
 		cout<<"Symbol: Cd\n";
 		cout<<"Atomic Mass/Weight: 112.411 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 12\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==49||strcmp(sym,"In")==0||strcmp(name,"Indium")==0)
 	   {
 		cout<<"\nAtomic Number: 49\n";
		cout<<"Name: Indium\n";
 		cout<<"Latin Name: Indium\n";
 		cout<<"Symbol: In\n";
 		cout<<"Atomic Mass/Weight: 114.818 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==50||strcmp(sym,"Sn")==0||strcmp(name,"Tin")==0)
 	   {
 		cout<<"\nAtomic Number: 50\n";
		cout<<"Name: Tin\n";
 		cout<<"Latin Name: Stannum\n";
 		cout<<"Symbol: Sn\n";
 		cout<<"Atomic Mass/Weight: 118.710 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==51||strcmp(sym,"Sb")==0||strcmp(name,"Antimony")==0)
 	   {
 		cout<<"\nAtomic Number: 51\n";
		cout<<"Name: Antimony\n";
 		cout<<"Latin Name: Stibium\n";
 		cout<<"Symbol: Sb\n";
 		cout<<"Atomic Mass/Weight: 121.760 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==52||strcmp(sym,"Te")==0||strcmp(name,"Tellurium")==0)
 	   {
 		cout<<"\nAtomic Number: 52\n";
		cout<<"Name: Tellurium\n";
 		cout<<"Latin Name: Tellurium\n";
 		cout<<"Symbol: Te\n";
 		cout<<"Atomic Mass/Weight: 127.60 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==53||strcmp(sym,"I")==0||strcmp(name,"Iodine")==0)
 	   {
 		cout<<"\nAtomic Number: 53\n";
		cout<<"Name: Iodine\n";
 		cout<<"Latin Name: Iodium\n";
 		cout<<"Symbol: I\n";
 		cout<<"Atomic Mass/Weight: 126.904 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==54||strcmp(sym,"Xe")==0||strcmp(name,"Xenon")==0)
 	   {
 		cout<<"\nAtomic Number: 54\n";
		cout<<"Name: Xenon\n";
 		cout<<"Latin Name: Xenon\n";
 		cout<<"Symbol: Xe\n";
 		cout<<"Atomic Mass/Weight: 131.293 g/mol\n";
 		cout<<"Period: 5\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==55||strcmp(sym,"Cs")==0||strcmp(name,"Cesium")==0)
 	   {
 		cout<<"\nAtomic Number: 55\n";
		cout<<"Name: Cesium\n";
 		cout<<"Latin Name: Caesium\n";
 		cout<<"Symbol: Cs\n";
 		cout<<"Atomic Mass/Weight: 132.905 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==56||strcmp(sym,"Ba")==0||strcmp(name,"Barium")==0)
 	   {
 		cout<<"\nAtomic Number: 56\n";
		cout<<"Name: Barium\n";
 		cout<<"Latin Name: Barium\n";
 		cout<<"Symbol: Ba\n";
 		cout<<"Atomic Mass/Weight: 137.327 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==57||strcmp(sym,"La")==0||strcmp(name,"Lanthanum")==0)
 	   {
 		cout<<"\nAtomic Number: 57\n";
		cout<<"Name: Lanthanum\n";
 		cout<<"Latin Name: Lanthanum\n";
 		cout<<"Symbol: La\n";
 		cout<<"Atomic Mass/Weight: 138.905 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==58||strcmp(sym,"Ce")==0||strcmp(name,"Cerium")==0)
 	   {
 		cout<<"\nAtomic Number: 58\n";
		cout<<"Name: Cerium\n";
 		cout<<"Latin Name: Cerium\n";
 		cout<<"Symbol: Ce\n";
 		cout<<"Atomic Mass/Weight: 140.116 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==59||strcmp(sym,"Pr")==0||strcmp(name,"Praseodymium")==0)
 	   {
 		cout<<"\nAtomic Number: 59\n";
		cout<<"Name: Praseodymium\n";
 		cout<<"Latin Name: Praseodymium\n";
 		cout<<"Symbol: Pr\n";
 		cout<<"Atomic Mass/Weight: 140.904 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==60||strcmp(sym,"Nd")==0||strcmp(name,"Neodymium")==0)
 	   {
 		cout<<"\nAtomic Number: 60\n";
		cout<<"Name: Neodymium\n";
 		cout<<"Latin Name: Neodymium\n";
 		cout<<"Symbol: Nd\n";
 		cout<<"Atomic Mass/Weight: 144.242 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==61||strcmp(sym,"Pm")==0||strcmp(name,"Promethium")==0)
 	   {
 		cout<<"\nAtomic Number: 61\n";
		cout<<"Name: Promethium\n";
 		cout<<"Latin Name: Promethium\n";
 		cout<<"Symbol: Pm\n";
 		cout<<"Atomic Mass/Weight: 146.915 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==62||strcmp(sym,"Sm")==0||strcmp(name,"Samarium")==0)
 	   {
 		cout<<"\nAtomic Number: 62\n";
		cout<<"Name: Samarium\n";
 		cout<<"Latin Name: Samarium\n";
 		cout<<"Symbol: Sm\n";
 		cout<<"Atomic Mass/Weight: 150.36 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==63||strcmp(sym,"Eu")==0||strcmp(name,"Europium")==0)
 	   {
 		cout<<"\nAtomic Number: 63\n";
		cout<<"Name: Europium\n";
 		cout<<"Latin Name: Europium\n";
 		cout<<"Symbol: Eu\n";
 		cout<<"Atomic Mass/Weight: 151.964 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==64||strcmp(sym,"Gd")==0||strcmp(name,"Gadolinium")==0)
 	   {
 		cout<<"\nAtomic Number: 64\n";
		cout<<"Name: Gadolinium\n";
 		cout<<"Latin Name: Gadolinium\n";
 		cout<<"Symbol: Gd\n";
 		cout<<"Atomic Mass/Weight: 157.25 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==65||strcmp(sym,"Tb")==0||strcmp(name,"Terbium")==0)
 	   {
 		cout<<"\nAtomic Number: 65\n";
		cout<<"Name: Terbium\n";
 		cout<<"Latin Name: Terbium\n";
 		cout<<"Symbol: Tb\n";
 		cout<<"Atomic Mass/Weight: 158.925 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==66||strcmp(sym,"Dy")==0||strcmp(name,"Dysprosium")==0)
 	   {
 		cout<<"\nAtomic Number: 66\n";
		cout<<"Name: Dysprosium\n";
 		cout<<"Latin Name: Dysprosium\n";
 		cout<<"Symbol: Dy\n";
 		cout<<"Atomic Mass/Weight: 162.500 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==67||strcmp(sym,"Ho")==0||strcmp(name,"Holmium")==0)
 	   {
 		cout<<"\nAtomic Number: 67\n";
		cout<<"Name: Holmium\n";
 		cout<<"Latin Name: Holmium\n";
 		cout<<"Symbol: Ho\n";
 		cout<<"Atomic Mass/Weight: 164.93 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==68||strcmp(sym,"Er")==0||strcmp(name,"Erbium")==0)
 	   {
 		cout<<"\nAtomic Number: 68\n";
		cout<<"Name: Erbium\n";
 		cout<<"Latin Name: Erbium\n";
 		cout<<"Symbol: Er\n";
 		cout<<"Atomic Mass/Weight: 167.259 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==69||strcmp(sym,"Tm")==0||strcmp(name,"Thulium")==0)
 	   {
 		cout<<"\nAtomic Number: 69\n";
		cout<<"Name: Thulium\n";
 		cout<<"Latin Name: Thulium\n";
 		cout<<"Symbol: Tm\n";
 		cout<<"Atomic Mass/Weight: 168.934 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==70||strcmp(sym,"Yb")==0||strcmp(name,"Ytterbium")==0)
 	   {
 		cout<<"\nAtomic Number: 70\n";
		cout<<"Name: Ytterbium\n";
 		cout<<"Latin Name: Ytterbium\n";
 		cout<<"Symbol: Yb\n";
 		cout<<"Atomic Mass/Weight: 173.04 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==71||strcmp(sym,"Lu")==0||strcmp(name,"Lutetium")==0)
 	   {
 		cout<<"\nAtomic Number: 71\n";
		cout<<"Name: Lutetium\n";
 		cout<<"Latin Name: Lutetium\n";
 		cout<<"Symbol: Lu\n";
 		cout<<"Atomic Mass/Weight: 174.967 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==72||strcmp(sym,"Hf")==0||strcmp(name,"Hafnium")==0)
 	   {
 		cout<<"\nAtomic Number: 72\n";
		cout<<"Name: Hafnium\n";
 		cout<<"Latin Name: Hafnium\n";
 		cout<<"Symbol: Hf\n";
 		cout<<"Atomic Mass/Weight: 178.49 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 4\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==73||strcmp(sym,"Ta")==0||strcmp(name,"Tantalum")==0)
 	   {
 		cout<<"\nAtomic Number: 73\n";
		cout<<"Name: Tantalum\n";
 		cout<<"Latin Name: Tantalum\n";
 		cout<<"Symbol: Ta\n";
 		cout<<"Atomic Mass/Weight: 180.947 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 5\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==74||strcmp(sym,"W")==0||strcmp(name,"Tungsten")==0)
 	   {
 		cout<<"\nAtomic Number: 74\n";
		cout<<"Name: Tungsten\n";
 		cout<<"Latin Name: Wolframium\n";
 		cout<<"Symbol: W\n";
 		cout<<"Atomic Mass/Weight: 183.84 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 6\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==75||strcmp(sym,"Re")==0||strcmp(name,"Rhenium")==0)
 	   {
 		cout<<"\nAtomic Number: 75\n";
		cout<<"Name: Rhenium\n";
 		cout<<"Latin Name: Rhenium\n";
 		cout<<"Symbol: Re\n";
 		cout<<"Atomic Mass/Weight: 186.207 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 7\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==76||strcmp(sym,"Os")==0||strcmp(name,"Osmium")==0)
 	   {
 		cout<<"\nAtomic Number: 76\n";
		cout<<"Name: Osmium\n";
 		cout<<"Latin Name: Osmium\n";
 		cout<<"Symbol: Os\n";
 		cout<<"Atomic Mass/Weight: 190.23 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 8\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==77||strcmp(sym,"Ir")==0||strcmp(name,"Iridium")==0)
 	   {
 		cout<<"\nAtomic Number: 77\n";
		cout<<"Name: Iridium\n";
 		cout<<"Latin Name: Iridium\n";
 		cout<<"Symbol: Ir\n";
 		cout<<"Atomic Mass/Weight: 192.217 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 9\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==78||strcmp(sym,"Pt")==0||strcmp(name,"Platinum")==0)
 	   {
 		cout<<"\nAtomic Number: 78\n";
		cout<<"Name: Platinum\n";
 		cout<<"Latin Name: Platinum\n";
 		cout<<"Symbol: Pt\n";
 		cout<<"Atomic Mass/Weight: 195.084 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 10\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==79||strcmp(sym,"Au")==0||strcmp(name,"Gold")==0)
 	   {
 		cout<<"\nAtomic Number: 79\n";
		cout<<"Name: Gold\n";
 		cout<<"Latin Name: Aurum\n";
 		cout<<"Symbol: Au\n";
 		cout<<"Atomic Mass/Weight: 196.966 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 11\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==80||strcmp(sym,"Hg")==0||strcmp(name,"Mercury")==0)
 	   {
 		cout<<"\nAtomic Number: 80\n";
		cout<<"Name: Mercury\n";
 		cout<<"Latin Name: Hydrargyrum\n";
 		cout<<"Symbol: Hg\n";
 		cout<<"Atomic Mass/Weight: 200.59 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 12\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==81||strcmp(sym,"Tl")==0||strcmp(name,"Thallium")==0)
 	   {
 		cout<<"\nAtomic Number: 81\n";
		cout<<"Name: Thallium\n";
 		cout<<"Latin Name: Thallium\n";
 		cout<<"Symbol: Tl\n";
 		cout<<"Atomic Mass/Weight: 204.383 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==82||strcmp(sym,"Pb")==0||strcmp(name,"Lead")==0)
 	   {
 		cout<<"\nAtomic Number: 82\n";
		cout<<"Name: Lead\n";
 		cout<<"Latin Name: Plumbum\n";
 		cout<<"Symbol: Pb\n";
 		cout<<"Atomic Mass/Weight: 207.2 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==83||strcmp(sym,"Bi")==0||strcmp(name,"Bismuth")==0)
 	   {
 		cout<<"\nAtomic Number: 83\n";
		cout<<"Name: Bismuth\n";
 		cout<<"Latin Name: Bisemutum\n";
 		cout<<"Symbol: Bi\n";
 		cout<<"Atomic Mass/Weight: 208.9804 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==84||strcmp(sym,"Po")==0||strcmp(name,"Polonium")==0)
 	   {
 		cout<<"\nAtomic Number: 84\n";
		cout<<"Name: Polonium\n";
 		cout<<"Latin Name: Polonium\n";
 		cout<<"Symbol: Po\n";
 		cout<<"Atomic Mass/Weight: 208.9824 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==85||strcmp(sym,"At")==0||strcmp(name,"Astatine")==0)
 	   {
 		cout<<"\nAtomic Number: 85\n";
		cout<<"Name: Astatine\n";
 		cout<<"Latin Name: Astatum\n";
 		cout<<"Symbol: At\n";
 		cout<<"Atomic Mass/Weight: 209.9871 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==86||strcmp(sym,"Rn")==0||strcmp(name,"Radon")==0)
 	   {
 		cout<<"\nAtomic Number: 86\n";
		cout<<"Name: Radon\n";
 		cout<<"Latin Name: Radon\n";
 		cout<<"Symbol: Rn\n";
 		cout<<"Atomic Mass/Weight: 222.0176 g/mol\n";
 		cout<<"Period: 6\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==87||strcmp(sym,"Fr")==0||strcmp(name,"Francium")==0)
 	   {
 		cout<<"\nAtomic Number: 87\n";
		cout<<"Name: Francium\n";
 		cout<<"Latin Name: Francium\n";
 		cout<<"Symbol: Fr\n";
 		cout<<"Atomic Mass/Weight: 223.0197 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==88||strcmp(sym,"Ra")==0||strcmp(name,"Radium")==0)
 	   {
 		cout<<"\nAtomic Number: 88\n";
		cout<<"Name: Radium\n";
 		cout<<"Latin Name: Radium\n";
 		cout<<"Symbol: Ra\n";
 		cout<<"Atomic Mass/Weight: 226.0254 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==89||strcmp(sym,"Ac")==0||strcmp(name,"Actinium")==0)
 	   {
 		cout<<"\nAtomic Number: 89\n";
		cout<<"Name: Actinium\n";
 		cout<<"Latin Name: Actinium\n";
 		cout<<"Symbol: Ac\n";
 		cout<<"Atomic Mass/Weight: 227.0278 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==90||strcmp(sym,"Th")==0||strcmp(name,"Thorium")==0)
 	   {
 		cout<<"\nAtomic Number: 90\n";
		cout<<"Name: Thorium\n";
 		cout<<"Latin Name: Thorium\n";
 		cout<<"Symbol: Th\n";
 		cout<<"Atomic Mass/Weight: 232.0380 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==91||strcmp(sym,"Pa")==0||strcmp(name,"Protactinium")==0)
 	   {
 		cout<<"\nAtomic Number: 91\n";
		cout<<"Name: Protactinium\n";
 		cout<<"Latin Name: Protactinium\n";
 		cout<<"Symbol: Pa\n";
 		cout<<"Atomic Mass/Weight: 231.0358 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==92||strcmp(sym,"U")==0||strcmp(name,"Uranium")==0)
 	   {
 		cout<<"\nAtomic Number: 92\n";
		cout<<"Name: Uranium\n";
 		cout<<"Latin Name: Uranium\n";
 		cout<<"Symbol: U\n";
 		cout<<"Atomic Mass/Weight: 238.0289 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==93||strcmp(sym,"Np")==0||strcmp(name,"Neptunium")==0)
 	   {
 		cout<<"\nAtomic Number: 93\n";
		cout<<"Name: Neptunium\n";
 		cout<<"Latin Name: Neptunium\n";
 		cout<<"Symbol: Np\n";
 		cout<<"Atomic Mass/Weight: 237.0482 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==94||strcmp(sym,"Pu")==0||strcmp(name,"Plutonium")==0)
 	   {
 		cout<<"\nAtomic Number: 94\n";
		cout<<"Name: Plutonium\n";
 		cout<<"Latin Name: Plutonium\n";
 		cout<<"Symbol: Pu\n";
 		cout<<"Atomic Mass/Weight: 244.0642 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==95||strcmp(sym,"Am")==0||strcmp(name,"Americium")==0)
 	   {
 		cout<<"\nAtomic Number: 95\n";
		cout<<"Name: Americium\n";
 		cout<<"Latin Name: Americium\n";
 		cout<<"Symbol: Am\n";
 		cout<<"Atomic Mass/Weight: 243.0614 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==96||strcmp(sym,"Cm")==0||strcmp(name,"Curium")==0)
 	   {
 		cout<<"\nAtomic Number: 96\n";
		cout<<"Name: Curium\n";
 		cout<<"Latin Name: Curium\n";
 		cout<<"Symbol: Cm\n";
 		cout<<"Atomic Mass/Weight: 247.703 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==97||strcmp(sym,"Bk")==0||strcmp(name,"Berkelium")==0)
 	   {
 		cout<<"\nAtomic Number: 97\n";
		cout<<"Name: Berkelium\n";
 		cout<<"Latin Name: Berkelium\n";
 		cout<<"Symbol: Bk\n";
 		cout<<"Atomic Mass/Weight: 247.0703 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==98||strcmp(sym,"Cf")==0||strcmp(name,"Californium")==0)
 	   {
 		cout<<"\nAtomic Number: 98\n";
		cout<<"Name: Californium\n";
 		cout<<"Latin Name: Californium\n";
 		cout<<"Symbol: Cf\n";
 		cout<<"Atomic Mass/Weight: 251.0796 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==99||strcmp(sym,"Es")==0||strcmp(name,"Einsteinium")==0)
 	   {
 		cout<<"\nAtomic Number: 99\n";
		cout<<"Name: Einsteinium\n";
 		cout<<"Latin Name: Einsteinium\n";
 		cout<<"Symbol: Es\n";
 		cout<<"Atomic Mass/Weight: 252.0829 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==100||strcmp(sym,"Fm")==0||strcmp(name,"Fermium")==0)
 	   {
 		cout<<"\nAtomic Number: 100\n";
		cout<<"Name: Fermium\n";
 		cout<<"Latin Name: Fermium\n";
 		cout<<"Symbol: Fm\n";
 		cout<<"Atomic Mass/Weight: 257.0951 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==101||strcmp(sym,"Md")==0||strcmp(name,"Mendelevium")==0)
 	   {
 		cout<<"\nAtomic Number: 101\n";
		cout<<"Name: Mendelevium\n";
 		cout<<"Latin Name: Mendelevium\n";
 		cout<<"Symbol: Md\n";
 		cout<<"Atomic Mass/Weight: 258.0951 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==102||strcmp(sym,"No")==0||strcmp(name,"Nobelium")==0)
 	   {
 		cout<<"\nAtomic Number: 102\n";
		cout<<"Name: Nobelium\n";
 		cout<<"Latin Name: Nobelium\n";
 		cout<<"Symbol: No\n";
 		cout<<"Atomic Mass/Weight: 259.1009 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: F-Block Element\n";
 		break;
       }
       while(a==103||strcmp(sym,"Lr")==0||strcmp(name,"Lawrencium")==0)
 	   {
 		cout<<"\nAtomic Number: 103\n";
		cout<<"Name: Lawrencium\n";
 		cout<<"Latin Name: Lawrencium\n";
 		cout<<"Symbol: Lr\n";
 		cout<<"Atomic Mass/Weight: 266.1193 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==104||strcmp(sym,"Rf")==0||strcmp(name,"Rutherfordium")==0)
 	   {
 		cout<<"\nAtomic Number: 104\n";
		cout<<"Name: Rutherfordium\n";
 		cout<<"Latin Name: Rutherfordium\n";
 		cout<<"Symbol: Rf\n";
 		cout<<"Atomic Mass/Weight: 261 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 4\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==105||strcmp(sym,"Db")==0||strcmp(name,"Dubnium")==0)
 	   {
 		cout<<"\nAtomic Number: 105\n";
		cout<<"Name: Dubnium\n";
 		cout<<"Latin Name: Dubnium\n";
 		cout<<"Symbol: Db\n";
 		cout<<"Atomic Mass/Weight: 262 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 5\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==106||strcmp(sym,"Sg")==0||strcmp(name,"Seaborgium")==0)
 	   {
 		cout<<"\nAtomic Number: 106\n";
		cout<<"Name: Seaborgium\n";
 		cout<<"Latin Name: Seaborgium\n";
 		cout<<"Symbol: Sg\n";
 		cout<<"Atomic Mass/Weight: 262 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 6\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==107||strcmp(sym,"Bh")==0||strcmp(name,"Bohrium")==0)
 	   {
 		cout<<"\nAtomic Number: 107\n";
		cout<<"Name: Bohrium\n";
 		cout<<"Latin Name: Bohrium\n";
 		cout<<"Symbol: Bh\n";
 		cout<<"Atomic Mass/Weight: 267 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 7\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==108||strcmp(sym,"Hs")==0||strcmp(name,"Hassium")==0)
 	   {
 		cout<<"\nAtomic Number: 108\n";
		cout<<"Name: Hassium\n";
 		cout<<"Latin Name: Hassium\n";
 		cout<<"Symbol: Hs\n";
 		cout<<"Atomic Mass/Weight: 269 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 8\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==109||strcmp(sym,"Mt")==0||strcmp(name,"Meitnerium")==0)
 	   {
 		cout<<"\nAtomic Number: 109\n";
		cout<<"Name: Meitnerium\n";
 		cout<<"Latin Name: Meitnerium\n";
 		cout<<"Symbol: Mt\n";
 		cout<<"Atomic Mass/Weight: 268 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 9\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==110||strcmp(sym,"Ds")==0||strcmp(name,"Darmstadtium")==0)
 	   {
 		cout<<"\nAtomic Number: 110\n";
		cout<<"Name: Darmstadtium\n";
 		cout<<"Latin Name: Darmstadtium\n";
 		cout<<"Symbol: Ds\n";
 		cout<<"Atomic Mass/Weight: 281.1620 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 10\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==111||strcmp(sym,"Rg")==0||strcmp(name,"Roentgenium")==0)
 	   {
 		cout<<"\nAtomic Number: 111\n";
		cout<<"Name: Roentgenium\n";
 		cout<<"Latin Name: Roentgenium\n";
 		cout<<"Symbol: Rg\n";
 		cout<<"Atomic Mass/Weight: 281.1684 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 11\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==112||strcmp(sym,"Cn")==0||strcmp(name,"Copernicium")==0)
 	   {
 		cout<<"\nAtomic Number: 112\n";
		cout<<"Name: Copernicium\n";
 		cout<<"Latin Name: Copernicium\n";
 		cout<<"Symbol: Cn\n";
 		cout<<"Atomic Mass/Weight: 285.1744 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 12\n";
 		cout<<"Block: D-Block Element\n";
 		break;
       }
       while(a==113||strcmp(sym,"Nh")==0||strcmp(name,"Nihonium")==0)
 	   {
 		cout<<"\nAtomic Number: 113\n";
		cout<<"Name: Nihonium\n";
 		cout<<"Latin Name: Nihonium\n";
 		cout<<"Symbol: Nh\n";
 		cout<<"Atomic Mass/Weight: 286.1810 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 13\n";
 		cout<<"Block: P-Block Element\n";
 		break;
       }
       while(a==114||strcmp(sym,"Fl")==0||strcmp(name,"Flerovium")==0)
 	   {
 		cout<<"\nAtomic Number: 114\n";
		cout<<"Name: Flerovium\n";
 		cout<<"Latin Name: Flerovium\n";
 		cout<<"Symbol: Fl\n";
 		cout<<"Atomic Mass/Weight: 289 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 14\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==115||strcmp(sym,"Mc")==0||strcmp(name,"Moscovium")==0)
 	   {
 		cout<<"\nAtomic Number: 115\n";
		cout<<"Name: Moscovium\n";
 		cout<<"Latin Name: Moscovium\n";
 		cout<<"Symbol: Mc\n";
 		cout<<"Atomic Mass/Weight: 289 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 15\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==116||strcmp(sym,"Lv")==0||strcmp(name,"Livermorium")==0)
 	   {
 		cout<<"\nAtomic Number: 116\n";
		cout<<"Name: Livermorium\n";
 		cout<<"Latin Name: Livermorium\n";
 		cout<<"Symbol: Lv\n";
 		cout<<"Atomic Mass/Weight: 293 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 16\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==117||strcmp(sym,"Ts")==0||strcmp(name,"Tennessine")==0)
 	   {
 		cout<<"\nAtomic Number: 117\n";
		cout<<"Name: Tennessine\n";
 		cout<<"Latin Name: Tennessine\n";
 		cout<<"Symbol: Ts\n";
 		cout<<"Atomic Mass/Weight: 294 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 17\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==118||strcmp(sym,"Og")==0||strcmp(name,"Oganesson")==0)
 	   {
 		cout<<"\nAtomic Number: 118\n";
		cout<<"Name: Oganesson\n";
 		cout<<"Latin Name: Oganesson\n";
 		cout<<"Symbol: Og\n";
 		cout<<"Atomic Mass/Weight: 294 g/mol\n";
 		cout<<"Period: 7\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==119||strcmp(sym,"Uue")==0||strcmp(name,"Ununennium")==0)
 	   {
 		cout<<"\nAtomic Number: 119\n";
		cout<<"Name: Ununennium\n";
 		cout<<"Latin Name: Ununennium\n";
 		cout<<"Symbol: Uue\n";
 		cout<<"Atomic Mass/Weight: 316 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==120||strcmp(sym,"Ubn")==0||strcmp(name,"Unbinilium")==0)
 	   {
 		cout<<"\nAtomic Number: 120\n";
		cout<<"Name: Unbinilium\n";
 		cout<<"Latin Name: Unbinilium\n";
 		cout<<"Symbol: Ubn\n";
 		cout<<"Atomic Mass/Weight: 320 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 18\n";
 		cout<<"Block: S-Block Element\n";
 		break;
       }
       while(a==121||strcmp(sym,"Ubu")==0||strcmp(name,"Unbiunium")==0)
 	   {
 		cout<<"\nAtomic Number: 121\n";
		cout<<"Name: Unbiunium\n";
 		cout<<"Latin Name: Unbiunium\n";
 		cout<<"Symbol: Ubu\n";
 		cout<<"Atomic Mass/Weight: 320 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 1\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }
       while(a==122||strcmp(sym,"Ubb")==0||strcmp(name,"Unbibium")==0)
 	   {
 		cout<<"\nAtomic Number: 122\n";
		cout<<"Name: Unbibium\n";
 		cout<<"Latin Name: Unbibium\n";
 		cout<<"Symbol: Ubb\n";
 		cout<<"Atomic Mass/Weight: 321 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 2\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }
       while(a==123||strcmp(sym,"Ubt")==0||strcmp(name,"Unbitrium")==0)
 	   {
 		cout<<"\nAtomic Number: 123\n";
		cout<<"Name: Unbitrium\n";
 		cout<<"Latin Name: Unbitrium\n";
 		cout<<"Symbol: Ubt\n";
 		cout<<"Atomic Mass/Weight: 325 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 3\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }
       while(a==124||strcmp(sym,"Ubq")==0||strcmp(name,"Unbiquadium")==0)
 	   {
 		cout<<"\nAtomic Number: 124\n";
		cout<<"Name: Unbiquadium\n";
 		cout<<"Latin Name: Unbiquadium\n";
 		cout<<"Symbol: Ubq\n";
 		cout<<"Atomic Mass/Weight: 330 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 4\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }while(a==125||strcmp(sym,"Ubp")==0||strcmp(name,"Unbipentium")==0)
 	   {
 		cout<<"\nAtomic Number: 125\n";
		cout<<"Name: Unbipentium\n";
 		cout<<"Latin Name: Unbipentium\n";
 		cout<<"Symbol: Ubp\n";
 		cout<<"Atomic Mass/Weight: 332 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 5\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }while(a==126||strcmp(sym,"Ubh")==0||strcmp(name,"Unbihexium")==0)
 	   {
 		cout<<"\nAtomic Number: 126\n";
		cout<<"Name: Unbihexium\n";
 		cout<<"Latin Name: Unbihexium\n";
 		cout<<"Symbol: Ubh\n";
 		cout<<"Atomic Mass/Weight: 334 g/mol\n";
 		cout<<"Period: 8\n";
 		cout<<"Group: 6\n";
 		cout<<"Block: G-Block Element\n";
 		break;
       }
	   while(a>126)
 	   {
 		cout<<"\nSorry, No Element was Found..\n";
 		break;
       }
       cout<<"------------------------------------------";
       cout<<"\n\n\nPress ENTER to Continue and Search Again....";
    getch();
    system("cls");
    }
    while(ch!=4);

 	return 0;
   }
}
