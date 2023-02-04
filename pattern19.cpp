// Input: 5

// Output:
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            for(j=1;j<i;j++){
                cout<<"  ";
            }
            for(j=1;j<=n-i+1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            for(j=1;j<n-i+1;j++){
                cout<<"  ";
            }
            for(j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
