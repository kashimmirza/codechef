#include<bits/stdc++.h>
using namespace std;
int main(){
 int k;
 cin>>k;
 while(k--){
  int n;
  cin>>n;
  int c=0;
  int re=0;
  while(n!=0){
     re=n%10;
     if(re==4){

        c++;
     }
     n=n/10;



  }
  cout<<c<<endl;
 }



  }





