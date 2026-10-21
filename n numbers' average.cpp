#include<iostream>
using namespace std;
int main () {
int i,n,num,sum=0;
float ave;
cout<<"n?";
cin>>n;
for(i=0;i<n;i++){
        cout<<"inter number"<<i+1<<"?";
        cin>>num;
        sum=sum+num;
}
ave=sum/n;
cout<<"sum="<<sum<<"\n";
cout<<"ave="<<ave;
return 0;
}
