#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	string d;
	int idx =0;
	string lagi;
	do{
	 lagi="n";
	 if(idx==0){
	 cin>>a>>b;
	 }else if(idx>=1){
	 	a=c;
	 	c=0;
	 	cin>>b;
	 }
	 cout<<endl;
	 cin>>d;
	 	if(d=="+"){c=a+b;
	} else if(d=="-"){
		c=a-b;
	} else if(d=="/"){
		c=a/b;
	} else if(d=="x"){
		c=a*b;
	} else if(d=="sqrt"){
		c=sqrt(a+b);
	} else if(d=="qua"){
		c=pow(a,b);
	} else cout<<"maaf tidak dideteksi operasi yang anda inginkan\n";
	cin>>lagi;
	idx++;
	}while(lagi=="y"||lagi=="y");
	cout<<c;
	cout<<"elnigma";
	return 0;
}

