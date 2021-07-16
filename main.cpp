#include <iostream>

using namespace std;

int main(){


//    int A[7] = {2,3,4,5,6,7,8};
//    int B[4] = {2,5,7,9};

    int i, j, ASize, BSize, A[10], B[10];


    cout<<"Enter The Size Of A"<<endl;
    cin>> ASize;

    cout<<"Please Enter the elements of A"<<endl;

    for(int i=0; i<ASize; i++){

        cin>>A[i];
    }

    cout<<"Enter The Size Of B"<<endl;
    cin>> BSize;

    cout<<"Please Enter the elements of B"<<endl;

    for(int j=0; j<BSize; j++){

        cin>>B[j];
    }



//    int ASize = sizeof (A)/sizeof (int);
//    int BSize = sizeof(B)/sizeof (int);

    cout<<"A = { ";
    for (int i = 0; i<ASize; i++){
        cout<<A[i]<<" ";
    }
    cout<<"}"<<endl;

    cout<<"B = { ";
    for (int j = 0; j<BSize; j++){
        cout<<B[j]<<" ";
    }
    cout<<"}"<<endl;

   //union

    cout<<"Union Of A and B: ";


//    int i =0, j=0;
    for ( i=0, j=0 ; (i<ASize) && (j<BSize) ; ){
        if ( A[i] < B[j] ){
            cout<< A[i++] <<" ";
        }
        else if( B[j] < A[i] ){
            cout<< B[j++] << " ";
        }
        else{
            cout<< B[j++] << " ";
            i++;
        }
    }


    for ( ; i<ASize ;i++ ){
        cout<< A[i]<<" ";
    }
    for ( ; j<BSize ;j++ ){
        cout<< B[j]<<" ";
    }

    cout<<endl;

    //Intersection

    cout<<"Intersection Of A and B: ";

    for (int i = 0; i < ASize; i++)
    {
        for (int j = 0; j < BSize; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i]<<" ";
            }
        }
    }
    cout<<""<<endl;


//     A Except B
    cout<<"A Except B: ";
    for (int i = 0; i < ASize; i++)
    {
        bool run = false;
        for (int j = 0; j<BSize; j++){
            if (A[i] == B[j]){
                run = true;
            }
        }

        if(!run){
            cout<<A[i]<<" ";
        }

    }
    cout<<""<<endl;


//     B Except A
    cout<<"B Except A: ";
    for (int j = 0; j < BSize; j++)
    {
        bool run = false;
        for (int i = 0; i<ASize; i++){
            if (B[j] == A[i]){
                run = true;
            }
        }

        if(!run){
            cout<<B[j]<<" ";
        }

    }
    cout<<""<<endl;

    return 0;
}
