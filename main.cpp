#include <iostream>
#include <math.h>    

/////////////////////////////////////
//working demo: http://cpp.sh/8jej6//
/////////////////////////////////////

double newtonsMethod(double approx){
    return approx - (1+cos(approx))/(-sin(approx));//credit: "Rob S" @ https://answers.yahoo.com/question/index?qid=20061030195634AAjY8nv
    }

int main()
{
  double global = 3;
  std::cout.precision(17);//cout precision increase
  for(int i=0; i<26; i++){ //loop counter to avoid wasted resources
      global = newtonsMethod(global);
      std::cout << std::fixed << global << "\n";//allows cout to have higher precision
  }
  return 0;
}
