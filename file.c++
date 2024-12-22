#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file;
    file.open("filename.txt");
    file<<"blal sallame";
    file.close();
}