/** Copyright 2021 Anubhav Paras */

#ifndef ANALOGSENSOR_HPP_
#define ANALOGSENSOR_HPP_

#include <iostream>

class AnalogSensor {
 public:
  explicit AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();

 private:
  unsigned int mSamples;
};

#endif  // ANALOGSENSOR_HPP_
