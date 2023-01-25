// Input: 5

// Output:
// * 
// * * 
// * * * 
// * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *


class Solution{
public:
    void printTriangle(int n) {
        // code here
        int i,j;
        for(i=1;i<=n;i++){
            for(j=1;j<(2*i)+1;j++){
                if (j%2==0)
                cout<<" ";
                else cout<<"*";
            }
            cout<<endl;
        }
        for(i=n;i>1;i--){
           for(j=1;j<(2*i)-1;j++){
                if (j%2==0)
                cout<<" ";
                else cout<<"*";
            }
            cout<<endl; 
        }
    }
};
