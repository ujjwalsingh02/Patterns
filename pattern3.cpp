// Input: 5

// Output:
// 1
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5
  
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
