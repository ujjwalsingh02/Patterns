// Input: 5

// Output:
// 1 
// 0 1 
// 1 0 1
// 0 1 0 1 
// 1 0 1 0 1

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        int i,j,count=1;
        for(i=1;i<=n;i++){
            for(j=1;j<=2*(i)-1;j++){
                if (j%2==0) cout<<" ";
                else {
                    if (count%2==0) {
                        cout<<"0";
                        count++;
                    }
                    else {
                    cout<<"1";
                    count++;
                    }
                    
                }
            }
            if (i%2==0){
            count++;
            }
            cout<<endl;
        }
    }
};
