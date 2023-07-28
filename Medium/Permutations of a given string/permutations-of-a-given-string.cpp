//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{   private:
        void solve(string s, vector<string>& ans, int i){
            
            if(i>=s.length()){
                ans.push_back(s);
                return;
            }
            
            for(int j=i;j<s.length();j++){
                swap(s[i],s[j]);
                solve(s,ans,i+1);
                swap(s[i],s[j]);
            }
            
        }
        
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    int index=0;
		    
		    solve(S,ans,index);
		    
		    set<string>a;
		    vector<string>final;
		    
		    for(int i=0;i<ans.size();i++){
		        a.insert(ans[i]);
		    }
           
           for(auto it=a.begin(); it!=a.end();it++){
               final.push_back(*it);
           }
		    
		    return final;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends