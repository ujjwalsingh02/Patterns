// INPUT
// 5
// Output: 
//     *   
//    * *  
//   * * * 
//  * * * *
// * * * * *
// * * * * *
//  * * * * 
//   * * *  
//    * *   
//     *   

class Solution {
  public:
    void printDiamond(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(j=1;j<=(2*i)-1;j++){
                if (j%2==0)
                cout<<" ";
                else
                cout<<"*";
            }
            for(j=1;j<=n-i;j++){
                cout<<" ";
            }
            cout<<endl;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=i-1;j++){
                cout<<" ";
            }
            for(j=1;j<=(2*(n-i+1));j++){
                if (j%2==0)
                cout<<" ";
                else
                cout<<"*";
            }
            for(j=1;j<=i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};
