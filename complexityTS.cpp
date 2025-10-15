//time complexity

#include <iostream>
using namespace std;
//time complexity : number of calculations in worst case time complexity
//same as space complexity...
//O(n) etc etc.

//an example for optimising time complexity
//calculate sum in range of x,y
int sumInRange(int x,int y){//simple bruteforce
    int sum=0;
    for(int i=x;i<=y;i++){
        sum+=i;
    }
    return sum;
}

int sumInRangeOptimised(int x,int y){
    int n=y-x+1, d=1;
    int sum=(n)*(2*x+(n-1)*d)/2;
    return sum;
}

int main(){
    int x,y;
    cin>>x>>y;
    //int res=sumInRange(x,y);
    int res=sumInRangeOptimised(x,y);
    cout<<res<<endl;
    return 0;
}



//space complexity--------

//def - extra memory space taken by program apart from input outputmemory
//analised using asymtopic (same as time complexity)

/*1.worst case memory complexity(O(n)) -:
    constant
    log(n)
    sqrt(n)
    n
    nlog(n)
    n*n
    n*n*n
    2^n
    etc...*/
/*best case time complexity(big omega(1))*/

/*average case time complexity (big theta(n))*/
