#include <iostream>
using namespace std;

int main()
{

    string name;
    int num;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Enter a number between 1 and 10: " << endl;
    cin >> num;

    if(num == 1){
        cout << name << ", you don't expect much but you deserve everything!" << endl;
    } else if(num == 2){
        cout << name << ", very Intelligent but very stubbern!" << endl;
    } else if(num == 3){
        cout << name << ", kind and sweet but " << endl;
    } else if(num == 4){
    
    }
    return 0;
}