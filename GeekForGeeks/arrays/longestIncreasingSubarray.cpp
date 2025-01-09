//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:                          
    // Function to find the length of longest increasing subarray
    int lenOfLongIncSubArr(vector<int> &arr) {
        // Your code goes here.
        
        int mx = 1, cnt = 1;
        
        for(int i = 1;i<arr.size();i++)
        {
            if (arr[i-1] < arr[i])
            {
                cnt++;
            }
            
            else 
            {
                if(mx < cnt)
                {
                    mx = cnt;
                }
                
                cnt = 1;
            }
        }
        
        //check the last element comparison
        
        if(mx<cnt)
        
        {
            mx = cnt;
        }
        
        return mx;
    }
    
    /*
    Input: arr[] = [5, 6, 3, 5, 7, 8, 9, 1, 2]
    Output: 5
    
    cnt = 1, mx = 1
    1. 5<6 c=2,  m=2
    2. 6<3 c=1, m=2
    3. 3<5 c=2, m=2
    4. 5<7 c=3, m=2
    5. 7<8 c=4, m=2
    6. 8<9 c=5, m=2
    7. 9<1 m=5, c=1
    8. 1<2 c=2, m=5 loop end
    
    now compare outside the loop
    if(mx<cnt)
    
    */
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num) {
            arr.push_back(num);
        }
        Solution ob;
        int ans = ob.lenOfLongIncSubArr(arr);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends
