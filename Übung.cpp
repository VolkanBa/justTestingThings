#include <iostream>
#include <string>
using namespace std;
template<typename T, typename U>
auto max(T name1, U name2){
    return (name1 > name2) ? name1 : name2;
}
int main(){
   int alter;
   scanf("%d", &alter);
   printf("Du bist %d Jahre alt", alter);
    return 0;
}