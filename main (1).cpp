/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin>>n;
  
   int x=(n/2)+1;
   vector<long long> nums;
   int i=0;
   nums.push_back(3);
   nums.push_back(4);
   while(i<x){
       long long first=nums[i];
       first=first*10;

       nums.push_back(first+nums[0]);
       nums.push_back(first+nums[1]);
       i++;
   }
   for(int i=0;i<nums.size();i++){
       cout<<nums[i]<<" ";
   }
   cout<<endl;
   cout<<"The "<<n<<"th term is "<<nums[n-1];

    return 0;
}