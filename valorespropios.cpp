#include <iostream>
#include <Eigen/Dense>
using namespace std;
using namespace Eigen;
int main()
{
   Matrix2f A;
   A << 1, 2, 2, 3;
   cout << "Here is the matrix A:\n" << A << endl;
   SelfAdjointEigenSolver<Matrix2f> eigensolver(A);
   if (eigensolver.info() != Success) abort();
   cout << "The eigenvalues of A are:\n" << eigensolver.eigenvalues() << endl;
   cout << "Here's a matrix whose columns are eigenvectors of A \n"
        << "corresponding to these eigenvalues:\n"
        << eigensolver.eigenvectors() << endl;
}




//f(x) = a*x**b
//fit f(x) "revErrEnergyGfortCaotic.txt" via a,b


//set logscale

//plot 'revErrEnergyGfortCaotic.txt' w p,	\
//'revErrEnergyGfortRegular.txt'// w p,					\
					 //f(x) w l lc rgb "black" lw 3 


				     //exit
