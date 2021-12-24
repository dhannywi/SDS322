//Program for vector 2d
//Author Dhanny Indrakusuma

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main()
{
   vector<float> row(20);
   vector<vector<float>> N(20,row);

   int n=0;
   for (int i=0; i<10; i++)   
   {
      for (int j=0; j<10; j++)
      {
         N[i][j] = n++;
      }
   }

   for (int i=0; i<10; i++)
   {
      for (int j=0; j<10; j++)
      {
         cout << N[i][j] << " ";
      }
      cout << endl;
   }
   return 0;
}
