//
// Created by Shawn Ching on 9/10/18.
//
#include <iostream>
#include "linearsearch.h"

using edu::vcccd::vc::csv15::find;

int main(int argc, char *argv[]) {
    int array [] = {3, 1, 2};
    std::cout << find<int>(0, array, 3) << std::endl;
}
