#include<bits/stdc++.h>

using namespace std;

int sizebucket=1000;

void delay(int delay) 
{ 
 int now=time(NULL); 
 int later=now+delay; 
 while(now<=later)now=time(NULL); 
} 

void size(int a,int b) {
 if(a>sizebucket) {
 	cout<<"\n\t\tBucket overflow";
 	return;
 }
 else {
	 delay(1);
	 while(a>b){
		 cout<<"\n\t\t"<<b<<" bytes outputted.";
		 a-=b;
		 delay(1);
 	}
 	
  if(a>0) {
  	cout<<"\n\t\tLast "<<a<<" bytes sent\t";
  }
  
  cout<<"\n\t\tBucket output successful";
 }
 
}

int main() {
	 int outputrate, packetSize;
	 cout<<"Enter output rate : "; 
	 cin>>outputrate;
	 for(int i=1;i<=5;i++){
		 delay(1);
		  cout<<"\nEnter packet size of packet  "<<i<<": \n"; 
		  cin>>packetSize;		
		 cout<<"\nPacket no "<<i<<"\tPacket size = "<<packetSize;
		 size(packetSize,outputrate);
	 }
	 return 0;
} 
