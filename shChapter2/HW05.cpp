#include <iostream>

using namespace std;

int useRecursive(int N,int RN){
    if(RN == 0)
        return 0;
    for(int k=0;k<RN-1;k++)
        cout<<" ";

    for(int j=0;j<N-RN+1;j++)
        cout<<"*";

    cout<<endl;

    return useRecursive(N,RN-1);
}

int main(){

    int N;

    cout<<"Write the value of N : ";
    cin>>N;

    useRecursive(N,N);

    return 0;
}