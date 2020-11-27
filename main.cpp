#include <iostream>
#include <algorithm>
#include <vector>
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int f1(int** , int , int);
void f2(int** , int, int);


int main()
{
    int n,m;
    cout << "row - >" << endl;
    cin >> n;
    cout << "column->";
    cin >> m;
    int i;
    int j;
    int ** ptrarray = new int * [n]; // две строки в массиве
    for (int count = 0; count < n; count++)
        ptrarray[count] = new  int[m];

    srand(time(NULL));
    for ( i = 0; i<n; i++) {
        for (j = 0; j < m; j++) {
            ptrarray[i][j] = 1+rand()%10;
            cout << "arr[" << i << "] "<< "[" << j<< "]="<< ptrarray [i][j] << endl;
        }
        cout <<"\n ";
    }
    int h;
    h = f1(ptrarray, n, m);
    cout <<"trace  =  " <<  h;

    for (i=0; i<n; i++){
        delete ptrarray[i];
    }
    delete(ptrarray);
    return 0;

}

int f1(int** a,int r, int c){
    int i,j;

    int trace = 0; // след матрицы
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (i == j)
                trace += a[i][j];


    cout << "trace  = d " << trace << endl;
    return trace;
}





