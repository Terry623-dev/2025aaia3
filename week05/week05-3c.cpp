///week05-3c.cpp Part1:Input,Part:Output
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
        ss >> word;
        cout << word;
        reverse( word.begin(), word.end() );
        while ( ss >> word ) {
            reverse( word.begin(), word.end() );///Part 4
            cout << " " << word;
            ///cout << "Ū��F" <<  word << endl; ///Part 3
        }
        cout << endl;///Part 2:Output
    }
}
