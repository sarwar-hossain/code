
// C++ code to find the largest rectangle area in a histogram
#include <iostream>
#include <stack>
#include <vector>
#include "bits/stdc++.h"

using namespace std;

int largestRectangleArea(vector<int> &a) {
    int n = a.size();
    stack<int> s;
    int ans = 0;
    a.push_back(0);
    int i=0;

   while (i<n)
   {
      while (!s.empty() && a[s.top()>a[i]])
      {
         int t=s.top();
         int h=a[t];
         s.pop();
         if(s.empty()){
            ans=max(ans,h*i);
         }
         else{
            int len=i-s.top()-1;
            ans=max(ans,h*len);
         }
      }
      s.push(i);
      
   }
   

    return ans;
}

int main() {
    vector<int> a = {2, 1, 5, 6, 2, 3};

    int maxArea = largestRectangleArea(a);

    cout << "The largest rectangle area is: " << maxArea << endl;

    return 0;
}
        