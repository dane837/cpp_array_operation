#ifndef UNION_H
#define UNION_H
#include <iostream>

using namespace std;
int Union(){
    int A[4] = {1,2,3,5};
    int B[8] = {1,5,6,8,5,3,6,3};


    int ASize = sizeof (A)/sizeof (int);
    int BSize = sizeof(B)/sizeof (int);

   //union
    int Union [ASize + BSize];
    for (int i =0; i<ASize; i++){
        Union[i] = A[i];
    }
    for(int i = ASize, j = 0 ; i < (ASize + BSize) - 1, j < BSize ; i++, j++){
        Union[i] = B[j];
    }
    cout<<"Union Of A and B"<<endl;
    for(int i = 0; i<ASize + BSize; i++){
        cout<<Union[i];
}

#endif // UNION_H
