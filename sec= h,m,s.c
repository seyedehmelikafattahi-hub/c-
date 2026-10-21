#include<iostream>
using namespace std;
int main() {
int h,m,s;
cout<<"how many seconds?";
cin>>s;
h=s/3600;
s=s-(h*3600);
m=s/60;
s=s-(m*60);
cout<<"hour="<<h<<"\n"<<"minute="<<m<<"\n"<<"second="<<s;
return 0;
}


