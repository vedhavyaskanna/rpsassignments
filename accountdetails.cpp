#include<iostream>
#include<cstring>
using namespace std;
class Account
{
int aid;
char name[20];
double balance;
public:
Account ();
Account(int, char*, double); 
void accept();
void display();
void deposit(int);
void withdraw(int);
int getAid();
}:
int Account::getAid()
{
return aid;
}

void Account::deposit(int amount)
{
balance = balance + amount;
}
void Account::accept()
{
cout<<'enter account info "<<endl;
cin>>aid>>name>>balance;
}
void Account::display()
{
cout<<aid<<"\t"<<name<<"\t"<<balance<<endl;
}
Account::Account(int id, char *n, double b)
{
aid = id;
strcpy(name,n);
balance = b;
}
Account::Account()
{
aid=1001;
strcpy(name,"abc");
balance=1000;
}

int main()
{
int choice,cnt=0,accno,amt;
Account accounts[500;
while(true)
{
cout<< "a. ADD NEW ACCOUNT"<<endl;
cout<<"b.deposit "<<endl;
cout<<"c.withdraw"<<endl;
cout<<"d. find account with max balance"<<endl;
cout<<"e.display"<<endl;;
cout << "exit"<<endl;
cin>>choice;
switch(choice)
{
case '1': {
if(cnt<50)
{
accounts[cnt++].accept();
break;
case '2':
cout<<"enter accout number"<<endl;
cin>>accno;
cout<<"enter amount to be deposited"<<endl;
cin>>amt;
for(int i=0;i<cnt;i++)
{
if(accounts[i].getAid()==accno)
{
accounts[i].deposit(amt);
break;
}
}
break;
case 3:
case 4:
case 5:
for(int i=0;i<cnt;i++)
{
accounts[i].display();
}
break;
case 6:
exit(0);
}
}
return 0;
}

