#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("filename.txt", ios::app);
    file<<"mohamed";
    file.close();
}