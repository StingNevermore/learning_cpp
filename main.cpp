#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;
int main() {
    string s("a");
    auto len = s.size();
    decltype(len) size_t;
    cout << size_t << endl;
}
