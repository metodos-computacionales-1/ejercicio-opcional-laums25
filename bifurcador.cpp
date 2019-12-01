#include <iostream>

// Logistic map
double f(const double r, const double x)
{
  return ( r*x*(1-x) );
}

double rand_unit()
{
  return ( ((double)rand())/RAND_MAX );
}

int main()
{
  const double r_min = 3.0;
  const double r_max = 4.0;
  
  const int num_intervals = 1000;
  const int max_iterations = 600;

  srand(time(NULL));

  double r = r_min;
  double x_n;

  for(int i=0; i<num_intervals; ++i){

    r += (r_max - r_min)/num_intervals;
    x_n = f(r, rand_unit());

    for(int j=0; j<max_iterations; ++j){
      x_n = f(r, x_n);
      if(j>=300)	std::cout << r << ' ' << x_n << '\n';
    }
  }
  
  return (0);
}