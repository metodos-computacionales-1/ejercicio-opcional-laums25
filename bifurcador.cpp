#include <iostream>

//Modificado de: https://www.math.utah.edu/~jasonu/code/

double func(const double r, const double x){
  return ( r*x*(1-x) );
}

double ra(){
  return ( ((double)rand())/RAND_MAX );
}

int main(){
  double min = 3.0;
  double max = 4.0;
  
  int inter = 1000;
  int maxiter = 600;

  srand(time(NULL));

  double r = min;
  double x;

  for(int i=0; i<inter; ++i){

    r += (max - min)/inter;
    x = func(r, ra());

    for(int j=0; j<maxiter; ++j){
      x = func(r, x);
      if(j>=300){	
       std::cout << r << ' ' << x << '\n';
    }
  }
  }
  return (0);
}