#include <iostream>
using namespace std;

int main()
{ 
    int A [5];
    for (int i = 0; i < 5;i++){ 
        cout<<"A["<<i<<"]=";
        cin>>A[i];
    }
    for (int i=0 ;i<5;i++)
        cout<<"A["<<i<<"]="<<A[i]<<endl;
}