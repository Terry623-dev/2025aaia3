///week05-3b.cpp Part1:Input,Part:Output
///Part3:stringstream Part:reverse�ϹL��
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line;
    while ( getline(cin, line) ){
        stringstream ss(line);
        string word;
        while ( ss >> word ) {
            reverse( word.begin(), word.end() );///Part 4
            cout << "Ū��F" <<  word << endl; ///Part 3
        }
        cout << line << endl;///Part 2:Output
    }
}
