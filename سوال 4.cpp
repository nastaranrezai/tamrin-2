
#include <iostream> 
#include <conio.h>  
#include <string.h> 
 
using namespace std; 
 
int main()
{
  int n, i, j, min= 21, max= 0, sum = 0;
  cout <<"tedad daneshjo:";
  cin >> n;
  for(i = 0; i < a; i++)
  {
    cin >> j;
    sum += j;
    if(j <= min )  min = j;
    if(j >= max)  max = j;
  }
  float avg = (float)sum / n;
  cout <<"avg :"<< avg << "\n";
  cout <<"min :"<< min << "\n";
  cout <<"max :"<< max << "\n";  
  return 0;  
}