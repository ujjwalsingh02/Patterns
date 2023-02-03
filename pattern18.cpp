// Input: 5

// Output:
// E
// E D
// E D C
// E D C B
// E D C B A

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++){
            for(j=n;j>=n-i;j--){
                cout<<char(64+j)<<" ";
            }
            cout<<endl;
        }
    }
};
