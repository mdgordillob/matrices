#include <iostream>
#include <Eigen/Dense>
#include <cstdlib>
using namespace std;
using namespace Eigen;

int main(int argc, char *argv[])
{
   const int N=atoi(argv[1]);
   MatrixXd A = MatrixXd::Random(N,N);
   MatrixXd b = MatrixXd::Random(N,N/2);
   MatrixXd x = A.fullPivLu().solve(b);
   double relative_error = (A*x - b).norm() / b.norm(); // norm() is L2 norm
   cout << "The relative error is:\n" << relative_error << endl;
}
