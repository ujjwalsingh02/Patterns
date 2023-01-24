// Input: 5

// Output:
//     *
//    ***  
//   *****
//  *******
// *********

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(j=0;j<2*i+1;j++){
                cout<<"*";
            }
            for(j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};
