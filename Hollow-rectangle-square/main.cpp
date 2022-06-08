//Hollow rectangle or square

#include <iostream>
using namespace std;
int main() {
    cout<<"Enter the amount of rows and coloumns seprated wuth a space : ";
    int rows,cols;
    cin>>rows>>cols;
    for(int i=1 ; i<=rows;++i){
        for(int j = 1; j<=cols;j++){
            if(i == 1 || i==rows || j ==cols || j==1)
                cout<<"    *";
            else 
                cout<<"     ";
    }cout<<endl;
}
return 0;
}