#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
   std::cout.precision(11);
   std::cout.setf(std::ios::scientific);
   int N=100000;
   int k=0;
   int s=0;
   int m=0;
   int n=0;
   Matrix2d A;
   double t=0,d=0;
   int i=0;
   while(i<N){
     srand((unsigned int) time(0));
   A.setRandom();
   t=A.trace();
   d=A.determinant();
   cout << "Here is the matrix A:\n" << A << endl;
   cout << "traceHere :\n" << t << endl;
   cout << "determinantHere:\n" << d << endl;

   if((d>0) && abs((t*t -4*d))<0.001) s=s+1;
   if((d>0) && ((t*t -4*d)<0)) k=k+1;
   if(d<0) m=m+1;
   if((d>0) && ((t*t - 4*d)>0)) n=n+1;
   i++;
   }
   cout<<s<<endl;
   cout<<k<<endl;
   cout<<m<<endl;
   cout<<n<<endl;
   return 0;
}
