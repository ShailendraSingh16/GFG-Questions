//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
    int power(int a, int b){
    if(b!=0){
        return a*power(a,b-1);
    }
    return 1;
}

int armStrong(int n, int size){
    int ans=0;

    if(n==0){
        return ans;
    }

        int c=n%10;
        ans+=power(c,size)+armStrong(n/10,size);    
}
  public:
    string armstrongNumber(int n){
        
    int digits=0;
    int a=n;

    while(a!=0){
        digits++;
        a/=10;
    }

   int ans=armStrong(n,digits);
   
    if(ans==n){
        return "Yes";
    }
    return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends