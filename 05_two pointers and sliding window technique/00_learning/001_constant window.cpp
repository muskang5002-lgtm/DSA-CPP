/*
  problem: take k as a input and find the substring of k length which give max sum
  plateform: striver pointer basic video 
  topic: constant window
  difficulty : easy

  problem link: https://www.youtube.com/watch?v=9kdHxplyl5I&list=PLgUwDviBIf0q7vrFA_HEWcqRqMpCXzYAL&index=3&t=127s

  key idea: take initial as l and kth index as r and while going further substract l and add r till n-1
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

  int l=0;
  int r=k-1;
  int sum=0;

  for(int i=l;i<=r;i++){
    sum+=arr[i];
  }
  int maxsum=sum;

  while(r<n-1){
    sum=sum-arr[l];
    l++;
    r++;
    sum=sum+arr[r];
    

    if(maxsum<sum){
      maxsum=sum;
    }
  }

  cout<<maxsum<<endl;
  return 0;
}




