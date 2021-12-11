#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void fibonachi(int a, int b, int c, int z) 
{
  z = b + c;
  c = b;
  b = z;
  if (z > 1000) 
  {
    return;
  }
  cout << z << endl;
  fibonachi(a + 1, b, c, z);

}

int main()
{
  cout << "1" << endl << "1" << endl;
  fibonachi(2, 1, 1, 1);
  return 0;
}
