#include<bits/stdc++.h>
using namespace std;

int main(){

  int a;
  cin>>a;

  int*arr=new int[a];

  for(int i=0;i<a;i++){
    int num;
    cin>>num;

    arr[i]=num;
  }

  return 0;
}
