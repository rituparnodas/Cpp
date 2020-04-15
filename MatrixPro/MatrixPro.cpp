#include <iostream>
using namespace std;

int main()
{
int a1, b1, a2, b2, r, c, x, M1[10][10], M2[10][10],  pro[10][10] ;

cout<<"enter the row and colum of first matrix : \n";
cin>>a1>>b1;

cout<<"enter the row and colum of 2nd matrix : \n";
cin>>a2>>b2;

if (b1==a2)
{

cout<< "enter the first matrix : \n";

for(r=0; r<a1; r++)
 for(c=0; c<b1; c++)
 {
     cin>>M1[r][c];
 }

cout<< "enter the 2nd matrix : \n";

for(r=0; r<a2; r++)
 for(c=0; c<b2; c++)
 {
     cin>>M2[r][c];
 }

//initialize product matrix to zero
  for(r=0; r<a1; r++)
   for(c=0; c<b2; c++)
    {
    pro[r][c] = 0;
    }

//multiplying the matrix
for(r=0; r<a1; r++)
    for(c=0; c<b2; c++)
        for (x=0;x<a2;x++)  //x is equall to either the number of column of matrix 1 or row of matrix 2
   {
       pro[r][c] += M1[r][x] * M2[x][c];  // M COLUM MUST BE SAME WITH ROW OF M2 THATS WHY X IS HERE OR HOW MANY MULTIPLICATION WILL DO THE FIRST MATRIX AND SECOND
   }

cout<< "the product of these matrix is : \n";

for(r=0; r<a1; r++)
   for(c=0; c<b2; c++)
   {
   cout<<pro[r][c] <<endl;
   }
}
else
{
cout<< " Syntax Error! " ;
}

return 0;
}