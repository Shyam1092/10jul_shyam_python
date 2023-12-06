#include<iostream>
#include<string>
using namespace std;

char fn[15], ln[15], gn[15];
int sc, nog, nm;
float cos1, cos2, cos3, fc, ac, tc, da;

int main()
{
	
	
cout<<"\n****************************Event Management System****************************";

cout<<"\n\nEnter the name of the event : ";
cin>> gn;

cout <<"Enter first name :";
cin>>fn;

cout <<"Enter last name :";
cin>>ln;

cout <<"Enter number of guests :";
cin>>nog;

cout <<"Enter numbers of minutes :";
cin>>nm;


cout<<"\n\n****************************";
cout<<"Event estimate for "<<fn;
cout<<"****************************";

sc=nog/20;

cout<<"\n\n\nnumber of Servers is : "<<sc;


cos1=(nm/60)*18.50;
cos2=(nm%60)*0.40;
cos3=cos1+cos2;
cout<<"\nThe cost for servers is : "<<cos3;


fc=nog*20.70;

cout<<"\nThe cost for Food is : "<<fc;


ac=fc/nog;

cout<<"\nAverage cost per person is : "<<ac;


tc=fc+(cos3*sc);

cout<<"\n\nThe total cost is : "<<tc;

cout<<"\n\nPlease deposit 25% to reserve the event";


da=tc*.25;
cout<<"\n\nThe deposite needed is : "<<da;

return 0;

}
