
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 int t;
 cin>>t;
 while(t--){
 cin>>n;
 int flag=0;
 int a[n];
 for(int i=0;i<n;i++){

    cin>>a[i];
 }


vector<int>dif;
for(int i=0;i<n;i++){

    if(a[i]==1){
        dif.push_back(i+1);


    }
}

for(int i=1;i<dif.size();i++){
    if(dif[i]-dif[i-1]<6){
        flag=1;

        break;

    }


}
if(flag==1){

    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
}

