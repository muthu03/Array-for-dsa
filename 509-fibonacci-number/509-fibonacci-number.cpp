class Solution {
public:
    int fib(int n) {
        int a=0;
        int temp=0;
        int b=1;
        if(n==1){
            return 1;
        }
        for(int i=2;i<=n;i++){
            temp=a+b;
            a=b;
            b=temp;
            
        }
        return temp;
    }
};