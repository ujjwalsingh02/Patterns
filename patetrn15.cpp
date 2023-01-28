// Input: 5

// Output:
// ABCDE
// ABCD
// ABC
// AB
// A

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i+1;j++){
                cout<<char(64+j);
            }
            cout<<endl;
        }
    }
};
