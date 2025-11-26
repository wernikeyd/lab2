#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    const char* filename[]={"file1.txt","file2.txt","file3.txt"};
    const int numb =3;
    for (int i = 0; i < numb; ++i){
        ofstream outfile(filename[i]);
        for (int j = 0; j < 10; ++j){
            int randomNum = (rand()%10)+1;
            outfile << randomNum << " ";

        }
        outfile.close();
    }
    return 0;
}
