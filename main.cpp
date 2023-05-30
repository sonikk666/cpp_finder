#include <iostream>
#include <string>

using namespace std;

int main() 
    int document_count;
    cin >> document_count;

    string message = to_string(document_count) + " documents found"s;
    cout << message << endl;
}