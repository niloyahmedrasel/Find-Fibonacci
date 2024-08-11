// brute force 

class Solution {
public:
    int fib(int n) {
       int x = 0;
       int y = 1;
       int sum = 0;
       if(n==1){
        return 1;
       }

       for(int i =1;i<n;i++){
            sum = x + y;
            x = y;
            y = sum;
       }
       return sum;
    }
};

//using recursion

class Solution {
public:
    int fib(int n) {
       if(n==0){
        return 0;
       }
       if(n==1){
        return 1;
       }
       return fib(n-1)+fib(n-2);
    }
};
