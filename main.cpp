#include <iostream>

using namespace std;

int main()
{
//Task-1
/*
   int size;
   cout<<"Enter array size: ";
   cin>>size;
   int *array = new int[size];

   cout<<"Enter array elements: "<<endl;
   for(int i = 0;i<size;i++){
    cin>>array[i];
   }
   cout<<"Print array elements: "<<endl;
   for(int i=0;i<size;i++){
   cout<<array[i]<<" "<<endl;
   }
    delete[]array;
*/
//Task-2
/*
    int rows,columns;
    cout<<"Enter the row size: ";
    cin>>rows;
    cout<<"Enter the column size: ";
    cin>>columns;
    char **CharArray = new char*[rows];
    for(int i=0;i<rows;i++){
        CharArray[i]=new char[columns];
    }
    for(int i= 0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>CharArray[i][j];
        }
    }
    for(int i= 0;i<rows;i++){
            cout<<"\n";
        for(int j=0;j<columns;j++){
            cout<<CharArray[i][j]<<" ";
        }
    }
    for(int i=0;i<rows;i++){
        delete CharArray[i];
    }
    delete []CharArray;

  */
//Task-3
int rows,columns;
int go=0;
    cout<<"Enter the row size: ";
    cin>>rows;
    int **snickers= new int*[row];
    int *lays = new int[row];

    for(int i=0;i<rows;i++){
        cout<<"Enter column number now: "<<i+1;
        cin>>lays[i];
        snickers[i]=new int[lays[i]];
    }
    for(int i;i<rows;i++){
        go=lays[i];
        for(int j=0;j<go;j++){
            cin>>
        }
    }





     return 0;
}
