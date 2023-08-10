//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char>s;
        
        for(int i=0;i<x.length();i++){
            char ch = x[i];
            
            // if opening bracket, push it in stack
            // if closing bracket check stack top and pop it
            
            if(ch == '{' || ch == '(' || ch == '['){
                s.push(ch);
            }
            else{
                // cl;osing brackets
                if(!s.empty()){
                    char top = s.top();
                    if( (ch ==')' && top =='(' ) || (ch =='}' && top =='{' ) || (ch ==']' && top =='[' )  
                        ){
                        s.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        
        if(s.empty()){
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends