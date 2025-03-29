#include <iostream>
#include <string>
using namespace std;
int main(){
    string *pName = &"Volkan";

    std::cout << pName;

    return 0;
}