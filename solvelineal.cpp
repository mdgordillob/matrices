#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
   std::cout.precision(11);
   std::cout.setf(std::ios::scientific);
   Matrix4d A;
   Vector4d b;
   A << 0.18,0.60,0.57,0.96,
        0.41,0.24,0.99,0.58,
        0.14,0.30,0.97,0.66,
        0.51,0.13,0.19,0.85;
   b << 1, 2, 3, 4;
   cout << "Here is the matrix A:\n" << A << endl;
   cout << "Here is the vector b:\n" << b << endl;
   Vector4d x = A.colPivHouseholderQr().solve(b);
   cout << "The solution is:\n" << x << endl;
}
