#include <iostream>
using namespace std;

int main()
{
    int a, b, r, c, M1[10][10], M2[10][10], Sum[10][10];

    cout<< "   +   enter the number of rows and Columns of matrix  \n";
    cin>> a >> b;

    cout << "   +   Enter the elements of first matrix \n";
 
   for (  r = 0 ; r < a ; r++ )
     for ( c = 0 ; c < b ; c++ )
      
    cin >> M1[r][c];
    cout << "   +   enter the second matrix \n";
    
    for (r=0; r<a; r++ )
     for(c=0; c<b; c++ ) 
    cin >> M2[r][c];

  for (r=0; r<a; r++ )
    for(c=0; c<b; c++ )
   Sum[r][c] = M1[r][c] + M2[r][c]  ;

 cout << "   +   The Sum of these matrix row wise :  \n"  ;

for (r=0; r<a; r++ )
   {
      for(c=0; c<b; c++ )

cout << Sum[r][c] << "\t";
   }

return 0 ;
}
