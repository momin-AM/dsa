#include <iostream>
#include <vector>
using namespace std;

//search algorithm for sorted 1D arrays(logic - mostly dividing the array in half with recursion)

bool isPresent(vector <int> &arr, int startPtr, int midPtr, int endPtr, int target){
    //base case
    if(endPtr-startPtr==1 || endPtr-startPtr==2){
        for(int i=startPtr;i<=endPtr;i++){
            if(arr[i]==target) return 1;
        }
        return 0;
    }
    //reccurance 
    if(target==arr[midPtr]) return 1;
    else if(target>arr[startPtr] && target<arr[midPtr]){
        endPtr=midPtr;
    }else{
        startPtr=midPtr;
    }
    midPtr=(startPtr+endPtr)/2;
    return isPresent(arr,startPtr,midPtr,endPtr,target);
}

int main(){
    int n;
    cout <<"number of elements : ";
    cin>>n;
    vector <int> v(n);
    cout<<"enter elements : ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target; cout<<"enter target element : ";
    cin>>target;
    int midptr=n/2;
    if(isPresent(v,0,midptr,n-1, target)) cout<<target<<" present"<<endl;
    else cout<<target<<" not present"<<endl;
    return 0;
    
}
