/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   long long n;
//   cin>>n;
  
//   int x=(n/2)+1;
//   vector<long long> nums;
//   int i=0;
//   nums.push_back(3);
//   nums.push_back(4);
//   while(i<x){
//       long long first=nums[i];
//       first=first*10;

//       nums.push_back(first+nums[0]);
//       nums.push_back(first+nums[1]);
//       i++;
//   }
//   for(int i=0;i<nums.size();i++){
//       cout<<nums[i]<<" ";
//   }
//   cout<<endl;
//   cout<<"The "<<n<<"th term is "<<nums[n-1];

//     return 0;
// }


// int main()
// {
//   long long n;
//   cin>>n;
//   int first=3;
//   int second=4;
//   long long ans;
//   int pv=1;
//   while(n!=0){
//       int rem=n%2;
//       if(rem==1){
//           ans=pv*3 + ans;
//           n=n/2;
//       }
//       else{
//           n=n-1;
//           ans=pv*4+ans;
//           n=n/2;
//       }
//       pv*=10;
//   }
//     cout<<ans;
//     return 0;
// }


int main()
{
  long long n;
  cin>>n;
  int first=2;
  int second=5;
  int third=7;
  long long ans=0;
  int pv=1;
  while(n!=0){
      int rem=n%3;
      if(rem==1){
          ans=pv*first+ ans;
          n=n/3;
      }
      else if(rem==2){
          ans=pv*second+ans;
          n=n/3;
      }
      else{
          n=n-1;
          ans=pv*third+ans;
          n=n/3;
      }
      pv*=10;
  }
    cout<<ans;
    return 0;
}