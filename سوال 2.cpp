#include <iostream> 
#include <conio.h> 
 
using namespace std; 
 
int main() 
{ 
 int h = 0, m = 0, s = 0; 
 cout << "saat ra vared konid : daghighe : sanieh\n"; 
 cin >> h >> m >> s; 
 
 int seconds = (h * 3600) + (m * 60) + (s); 
 
 cout << "natayej (darv sanieh) : " << seconds; 
 
 return 0; 
}