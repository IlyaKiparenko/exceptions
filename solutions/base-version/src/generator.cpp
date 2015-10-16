#include <stdlib.h>

#include "generator.h"


void InitRandPositiveDouble(double *mas, int size) {
  const unsigned __int64 mask = 0x7FF0000000000000;
  unsigned __int64* mas_as_uint64_array =
    reinterpret_cast<unsigned __int64*>(mas);
  if(mas==0)
  {
	  throw NullPtrException(12,1);
  }

  if(size<0)
  {
	  throw NegArrLenException(17,1);
  }

  for (int j = 0; j < size; j++) {
    do {
      unsigned char *mas_as_uchar_array =
        reinterpret_cast<unsigned char*>(mas+j);
      for (int i = 0; i < sizeof(double); i++)
        mas_as_uchar_array[i] = rand() % 256;
    } while ( (mas_as_uint64_array[j] & mask) == mask );

    // Positive only
    mas_as_uint64_array[j] &= 0x7FFFFFFFFFFFFFFF;
  }
}
