// Input: 5

// Output:
// A
// BB
// CCC
// DDDD
// EEEEE

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<char(64+i);
            }
            cout<<endl;
        }
    }
};
