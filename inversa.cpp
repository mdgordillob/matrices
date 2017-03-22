#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
   std::cout.precision(11);
   std::cout.setf(std::ios::scientific);
   Matrix3d A;
   Matrix3d B;
   Matrix3d C;
   A << 4,-2,1,
     3,6,-4,
        2, 1,8;
  
   cout << "Here is the matrix A:\n" << A << endl;
   B=A.inverse();
   cout << "Here is the inverse matrix b:\n" << B << endl;
   cout << "The determinant is:\n" << A.determinant() << endl;
   C=A*B;
   cout<< " The product of the matrix A*B is:\n"<<C<<endl;
}
