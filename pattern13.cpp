// Input: 5

// Output:
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j,count=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<count<<" ";
                count++;
            }
            cout<<endl;
        }
    }
};
