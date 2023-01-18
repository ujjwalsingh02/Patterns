// Input: 5

// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

class Solution {
  public:
    void printSquare(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};
