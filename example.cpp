#include <iostream>
#include <vector>
#include "lutLDBN.h"

int main()
{
  std::vector<Point> samples;
  initSamplers();

  ldbnBNOT(2048, samples);
  //2k BN samples
  for(auto &s: samples)
    std::cout<< s[0]<<" "<< s[1]<<std::endl;

  ldbnSTEP(2048, samples);
  //2k STEP samples
  for(auto &s: samples)
    std::cout<< s[0]<<" "<< s[1]<<std::endl;

  return 0;
}
