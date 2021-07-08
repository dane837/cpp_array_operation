#include <iostream>

using namespace std;

int main()
{
    int A[5] = {1,2,3,5,6};
    int B[8] = {1,5,6,8,5,3,6,3};

    int ASize = sizeof (A)/sizeof (int);
    int BSize = sizeof (B)/sizeof (int);

    // Union
    int Union[ASize + BSize];

    for(int i = 0 ; i < ASize ; i++){
        Union[i] = A[i];
    }
    for(int i = ASize, j = 0 ; i < (ASize + BSize) - 1 , j < BSize ; i++, j++){
        Union[i] = B[j];
    }
    cout<<"Union of A and B: ";
    for(int i = 0 ; i < ASize + BSize; i++){
        cout<<Union[i];
    }

    // Intersect

    // A Except B

    // B Except A
    return 0;
}
