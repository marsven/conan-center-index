#include "Vector3.hpp"

#include <stdio.h>

int main(void) 
{
  raylib::Vector3 center = {0, 0, 0};
  raylib::Vector3 center2 = {0, 0, 0};
  float r = 1.0;
  if (center.CheckCollision(r, center, r)) {
    printf("raylib-cpp - unit sphere collides with itself!\n");
  }
  return 0;
}
