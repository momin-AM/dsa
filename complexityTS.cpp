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


//CALCULATING TIME COPLEXITY : -------------------------------------------------------------




//time complexity--------
//calculating time complexity
#include <iostream>
using namespace std;
// 1

    int v=0;
    int n; cin>>n;
    for(int i=1;i<=n;i*=2){
        v++;
    }

/*i goes with 2^1,2^2..2^k
    2^k<=n
    log2^k=log n [base 2 log]
    klog2=logn
    k=log n [log2 of base 2 =1]*/
    //-------O(log n) whenever multiplied by a constant in loop

// 2

int val=0;
for(int i=1;i<=N;i+=i){
    val++;
}
/*same as before , 2's exponential 
... O(log(n))*/

// 3
int val=0;
for(int i=1;i<=N;i*=2){
    for(int j=1;j<=i;j++){
        val++;
    }
}/*a matrix :
    i=1 : j - 1,
    i=2 : j-2
    i=4 : j-4
    i=k : j-k
    so, it's :
    1+2+4+..+n
    2^0+2^1+2^2+...+2^k -> gp(geometric progression)
    = a(r^n -1)/r-1
    =1(2^k-1)/2-1
    =2^k approx

    k<=log N
    2^k<=2^(log N)
    2^k = N
    so - O(N)
    */

// 4
int val=0;
for(int i=1;i<=N;i*=2){
    for(int j=N;j>i;j--){
        val++;
    }
}/*i -1 : j -N-1
    i -2 : j -N-2
    i -4 : j -N-4
    i -k : j -N-k
    so the seris is :
    (N-1)+(N-2)+(N-4)+...(N-k)
    =k*N-(1+2+4...+k)
    =k*N-(2^0+2^1+2^2+...+2^k)
    =k*N-(2^k)
    =k*N-(N)[from q no. 2, 2^k=N]
    =N(k-1)
    =Nk = N*log N
    O(NlogN)
    */

// 5
int val=0;
for(int i=N;i>0;i/=2){
    for(int j=0;j<i;j++){
        val++;
    }
}/*i=N : j -N 
   i=N/2 : j -N/2
   i=N/4 : j -N/4
   i=N/k : j -N/k
   so, series : 
   N + N/2 + N/4 +...+N/k
   =N(1+1/2 + 1/4 +...1/k)
   =N * 1(1/2 ^k-1)/1/2 -1
   =N (0.5^k)/(-2)
   =n
   O(N)
   */

   // 6

   int val=0;
   for(int i=2;i<=N;i*=i){
    val++;
   }/*i=2 : iter =1
      i=4 : iter=1+1
      i=16 : iter=2+1
      i=N : iter= T
      ...
      2^1 -> 2^2 -> 2^4 -> 2^8... ->2^k -(1)
      so 2^k<=N
      klog2=log N
      k=log N
      now from series 1 - :
        2^2^0 -> 2^2^1 -> 2^2^2 -> ... -> 2^2^T [2^T=k]
      so... -
      2^T=k
      log 2^T= log k
      T log2 = log k
      T= log k
      so -
      T= logk =log log N
      ans : O(log log N)
        */

