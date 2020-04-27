
// Matrix read and print test
// Press <CTRL+C> and append <input/test-x.txt


#include<iostream>
using namespace std;

void Matrix() {
    int collum = 3;
    int row;
    cin >> row;
    int intArray[99][99];
    cout << "Getting matrix with "<< collum << " collums and " << row << " rows" << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < collum; j++) {
            cin >> intArray[i][j];
        }
    }
    for(int i = 0; i < row; i++) {
      for(int j = 0; j < collum; j++) {
         cout << intArray[i][j] << " ";
      }
    cout << endl;
    }
}

int main() 
{
    Matrix();
    return 0;
}
