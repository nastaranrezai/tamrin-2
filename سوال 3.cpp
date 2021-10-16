#include <iostream> 
#include <conio.h> 
 
using namespace std; 
 
int main() 
{ 
    int t; 
    int h, m, s; 
    cout << "entrer votre numero en second : "; 
    cin >> t; 
 
    h = t / 3600; 
    t = t % 3600; 
    m = t / 60; 
    s = t % 60; 
 
    cout << h << ":" << m << ":" << s; 
 
    return 0; 
}