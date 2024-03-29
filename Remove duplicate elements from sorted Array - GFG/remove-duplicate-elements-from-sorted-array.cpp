//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    int remove_duplicate(int a[],int n){
        if(n < 2) return 1;
        
        int i = 0, j = 1;
        
        while(i < n && j < n) {
            if(a[i] == a[j]) {
                // If same, move "j" ahead
                j += 1;
            } else {
                // if not same, increment "i" to its next position
                // put the value of a[j] to a[i]
                // move ahead "j"
                i += 1;
                a[i] = a[j];
                j += 1;
            }
        }
        
        return i + 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }
    Solution ob;
    int n = ob.remove_duplicate(a,N);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}
// } Driver Code Ends