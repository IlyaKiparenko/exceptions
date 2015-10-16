#pragma once
#ifndef DIV_H
#define DIV_H

#include "MyException.h";

template <class T>
T MyDiv(T a, T b) {
  if(b==0)
  {
	 throw DivZeroException(11,0);
  }

  return a / b;
}

#endif  // DIV_H
