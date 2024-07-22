#include<iostream>
int main()
{
int n,rem,result=0,originalnum;
std::cout<<"ENTER A NUMBER: ";
std::cin>>n;
originalnum=n;
while(originalnum !=0)
{
rem=originalnum % 10;
result += rem * rem *rem;
originalnum /= 10;
}
if(result == n)
std::cout<<n<<"is an armstrong number: "<<std::endl;
else
std::cout<<n<<"is not an armstrong num:"<<std::endl;
return 0;
}

