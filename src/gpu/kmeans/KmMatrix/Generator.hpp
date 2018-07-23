/*!
 * Copyright 2018 H2O.ai, Inc.
 * License   Apache License Version 2.0 (see LICENSE for details)
 */

#ifndef GENERATOR_HPP_
#define GENERATOR_HPP_

#include "KmMatrix.hpp"

namespace H2O4GPU {
namespace KMeans {

template <typename T>
class GeneratorBase {
 public:
  virtual KmMatrix<T> generate() {};
  virtual KmMatrix<T> generate(size_t _size) {};
};

}
}


#endif  // GENERATOR_HPP_
