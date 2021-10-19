#include<iostream>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
using namespace std;
#define MIN_BALANCE 500
class InsufficientFunds{};
class Account
{
private:
long accountNumber;
string firstName;
string lastName;
float balance;
static long NextAccountNumber;
public:
Account(){}
Account(string fname,string lname,float balance);
long getAccNo(){return accountNumber;}
string getFirstName(){return firstName;}
string getLastName(){return lastName;}
float getBalance(){return balance;}
void Deposit(float amount);
void Withdraw(float amount);
static void setLastAccountNumber(long accountNumber);
static long getLastAccountNumber();
friend ofstream & operator<<(ofstream &ofs,Account &acc);
friend ifstream & operator>>(ifstream &ifs,Account &acc);
friend ostream & operator<<(ostream &os,Account &acc);
};
long Account::NextAccountNumber=0;
class Bank
{
private:
map<long,Account> accounts;
public:
Bank();
Account OpenAccount(string fname,string lname,float balance);
Account BalanceEnquiry(long accountNumber);
Account Deposit(long accountNumber,float amount);
Account Withdraw(long accountNumber,float amount);
void CloseAccount(long accountNumber);
void ShowAllAccounts();
~Bank();
};
int main()
{
Bank b;
Account acc;
int choice;
string fname,lname;
long accountNumber;
float balance;
float amount;
system("COLOR 0B");
cout<<"----BANK MANAGEMENT SYSTEM----"<<endl;
cout<<"******************************"<<endl;
cout<<"(!!..DEVELOPED BY ANUJ DAS..!!)\n\n"<<endl;
do
{
cout<<"\nSELECT ONE OPTION BELOW: ";
cout<<"\n------------------------ ";
cout<<"\n1. Open an Account";
cout<<"\n2. Balance Enquiry";
cout<<"\n3. Deposit";
cout<<"\n4. Withdraw";
cout<<"\n5. Close an Account";
cout<<"\n6. Show All Accounts";
cout<<"\n7. Exit";
cout<<"\n\nEnter Your Choice: ";
cin>>choice;
system("cls");
switch(choice)
{
case 1:
cout<<"CREATE A NEW ACCOUNT:"<<endl;
cout<<"---------------------\n"<<endl;
cout<<"Enter First Name: ";
cin>>fname;
cout<<"Enter Last Name: ";
cin>>lname;
cout<<"Enter Initial Balance: ";
cin>>balance;
acc=b.OpenAccount(fname,lname,balance);
cout<<endl<<"Congratulations!! Your Account Have Been Successfully Created. \n"<<endl;
cout<<"Your Account Details: "<<endl;
cout<<"---------------------"<<endl;
cout<<acc;
cout<<"---------------------"<<endl;
break;
case 2:
cout<<"BALANCE ENQUIRY OF AN ACCOUNT:"<<endl;
cout<<"------------------------------\n"<<endl;
cout<<"Enter Account Number:";
cin>>accountNumber;
acc=b.BalanceEnquiry(accountNumber);
cout<<endl<<"Your Account Details: "<<endl;
cout<<"---------------------"<<endl;
cout<<acc;
cout<<"---------------------"<<endl;

break;
case 3:
cout<<"DEPOSIT MONEY TO AN ACCOUNT:"<<endl;
cout<<"----------------------------\n"<<endl;
cout<<"Enter Account Number:";
cin>>accountNumber;
cout<<"Enter Amount to Deposit: ";
cin>>amount;
acc=b.Deposit(accountNumber, amount);
cout<<endl<<"INR "<<amount<<" is Deposited to Account Number: "<<accountNumber<<endl;
cout<<endl<<"Current Balance After Deposit: "<<endl;
cout<<"-----------------------------------"<<endl;
cout<<acc;
cout<<"-----------------------------------"<<endl;
break;
case 4:
cout<<"WITHDRAW MONEY FROM AN ACCOUNT:"<<endl;
cout<<"-------------------------------\n"<<endl;
cout<<"Enter Account Number:";
cin>>accountNumber;
cout<<"Enter Amount to Withdraw: ";
cin>>amount;
acc=b.Withdraw(accountNumber, amount);
cout<<endl<<"INR "<<amount<<" is Successfully Withdrawn From Account Number: "<<accountNumber<<endl;
cout<<endl<<"Remaining Balance After Withdrawal: "<<endl;
cout<<"-----------------------------------"<<endl;
cout<<acc;
cout<<"-----------------------------------"<<endl;
break;
case 5:
cout<<"CLOSE AN EXISTING ACCOUNT:"<<endl;
cout<<"--------------------------\n"<<endl;
cout<<"Enter Account Number:";
cin>>accountNumber;
b.CloseAccount(accountNumber);
cout<<"--------------------------------------------------------"<<endl;
cout<<endl<<"Your Account is Successfully Closed!!\n\n"<<endl;
break;
case 6:
b.ShowAllAccounts();
break;
case 7: break;
default:
cout<<"\nEnter Correct Choice: ";
exit(0);
}
}while(choice!=7);
return 0;
}
Account::Account(string fname,string lname,float balance)
{
NextAccountNumber++;
accountNumber=NextAccountNumber;
firstName=fname;
lastName=lname;
this->balance=balance;
}
void Account::Deposit(float amount)
{
balance+=amount;
}
void Account::Withdraw(float amount)
{
if(balance-amount<MIN_BALANCE)
throw InsufficientFunds();
balance-=amount;
}
void Account::setLastAccountNumber(long accountNumber)
{
NextAccountNumber=accountNumber;
}
long Account::getLastAccountNumber()
{
return NextAccountNumber;
}
ofstream & operator<<(ofstream &ofs,Account &acc)
{
ofs<<acc.accountNumber<<endl;
ofs<<acc.firstName<<endl;
ofs<<acc.lastName<<endl;
ofs<<acc.balance<<endl;
return ofs;
}
ifstream & operator>>(ifstream &ifs,Account &acc)
{
ifs>>acc.accountNumber;
ifs>>acc.firstName;
ifs>>acc.lastName;
ifs>>acc.balance;
return ifs;
}
ostream & operator<<(ostream &os,Account &acc)
{
os<<"First Name:"<<acc.getFirstName()<<endl;
os<<"Last Name:"<<acc.getLastName()<<endl;
os<<"Account Number:"<<acc.getAccNo()<<endl;
os<<"Balance:"<<acc.getBalance()<<endl;
return os;
}
Bank::Bank()
{
Account account;
ifstream infile;
infile.open("Bank.data");
if(!infile)
{
//cout<<"Error in Opening! File Not Found!!"<<endl;
return;
}
while(!infile.eof())
{
infile>>account;
accounts.insert(pair<long,Account>(account.getAccNo(),account));
}
Account::setLastAccountNumber(account.getAccNo());
infile.close();
}
Account Bank::OpenAccount(string fname,string lname,float balance)
{
ofstream outfile;
Account account(fname,lname,balance);
accounts.insert(pair<long,Account>(account.getAccNo(),account));
outfile.open("Bank.data", ios::trunc);
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
outfile<<itr->second;
}
outfile.close();
return account;
}
Account Bank::BalanceEnquiry(long accountNumber)
{
map<long,Account>::iterator itr=accounts.find(accountNumber);
return itr->second;
}
Account Bank::Deposit(long accountNumber,float amount)
{
map<long,Account>::iterator itr=accounts.find(accountNumber);
itr->second.Deposit(amount);
return itr->second;
}
Account Bank::Withdraw(long accountNumber,float amount)
{
map<long,Account>::iterator itr=accounts.find(accountNumber);
itr->second.Withdraw(amount);
return itr->second;
}
void Bank::CloseAccount(long accountNumber)
{
map<long,Account>::iterator itr=accounts.find(accountNumber);
cout<<"\nDetails of the Account that Has Been Deleted Permanently! \n--------------------------------------------------------\n"<<itr->second;
accounts.erase(accountNumber);
}
void Bank::ShowAllAccounts()
{
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
cout<<"Account "<<itr->first<<endl<<itr->second<<endl;
}
}
Bank::~Bank()
{
ofstream outfile;
outfile.open("Bank.data", ios::trunc);
map<long,Account>::iterator itr;
for(itr=accounts.begin();itr!=accounts.end();itr++)
{
outfile<<itr->second;
}
outfile.close();
}
