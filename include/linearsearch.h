//
// Created by Shawn Ching on 9/10/18.
//
//test

#ifndef EX01_LINEARSEARCH_LINEARSEARCH_H
#define EX01_LINEARSEARCH_LINEARSEARCH_H
#include <cstdlib>

namespace edu { namespace vcccd { namespace vc { namespace csv15 {

                template <class T>
                int64_t find(const T& value, T array[], size_t size) {
                    if (array == NULL) return -1;
                    for (int i = 0; i < size; i++){
                        if (value == array[i]) return i;
                    }
                    return -1;
                }

            }}}}

#endif //EX01_LINEARSEARCH_LINEARSEARCH_H
