
/* This is to show how to install a two third part libraries:                                                 
  1. armadillo library:                                                                                       
     1.1 download the source file: armadillo-x.yyy.z.tar.gz                                                   
     1.2 tar -xvf armadillo-x.yyy.z.tar.gz                                                                    
     1.3 cd armadillo-x.yyy.z                                                                                 
     1.4 ./configure                                                                                          
     1.5. make                                                                                                
     1.6 make install                                                                                         
   2. install Eigen                                                                                           
      Eigen c++ is a header only library: you don't have to install it;                                       
      sudo apt-get install libeigen3-dev                                                                      
                                                                                                              
      how to include Eigen for some reason, the Eigen libray is not visible to c compiler, you need to use the full path
                                                                                                              
bug: https://scicomp.stackexchange.com/questions/23239/inversion-of-a-matrix-using-c-library-armadillo-or-eigen
     Use float instead of integer                                                                             
                                                                                                              
                                                                                                              
*/ 

#include <iostream>
#include <armadillo>
#include <cmath>
#include </usr/include/eigen3/Eigen/Dense>
using namespace std;
using namespace arma;
using namespace Eigen;

int main()
{
vec a;
int h=5;

    MatrixXd b(5,5);
    MatrixXd im(5,5);
     a <<-2 << -1 << 0 << 1 << 2;
   for(int i1=0;i1<h;i1++)
   {

            b(i1,0)=1;
            b(i1,1)=a(i1);
            b(i1,2)=a(i1)*a(i1)+1/12.0;
            b(i1,3)=pow(a(i1),3)+a(i1)/4;
            b(i1,4)=1.0/80+pow(a(i1),2)/2+pow(a(i1),4);
    }

    im=b.inverse();
    cout<<im<<endl;
    return 0;
}    
