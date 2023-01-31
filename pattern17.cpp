// Input: 4

// Output:
//    A
//   ABA
//  ABCBA
// ABCDCBA


class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j=1;
        for(i=1;i<=n;i++){
            for(j=i;j<n;j++){
                cout<<" ";
            }
            for(j=1;j<i;j++){
                cout<<char(64+j);
            }
            // cout<<char(64+j);
            for(j=i;j>=1;j--){
                cout<<char(64+j);
            }
            for(j=i;j<n;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};
