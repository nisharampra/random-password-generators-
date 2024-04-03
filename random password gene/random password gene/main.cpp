#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void password(int length) {
    char result[length];
    const char word[] = "abcdefghijkImnopqrstuvwxyz1234567890!@#$^&*"; // length 43
    srand(static_cast<unsigned int>(time(NULL)));
    cout << "Generated password: ";
    for(int i = 0; i < length; i++)
        result[i] = word[rand()%43];
    for(int i = 0; i < length; i++)
        cout << result[i];
    cout << endl;
}


int main() {
    cout << "Random password generator\n";
    int passLength;
    cout << "Enter length of password: ";
    cin >> passLength;
    password(passLength);
    return 0;
}
