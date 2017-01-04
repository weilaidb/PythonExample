#define _RTL871X_BYTEORDER_H_
#if defined(__LITTLE_ENDIAN)
#  include "little_endian.h"
#elif defined(__BIG_ENDIAN)
#  include "big_endian.h"
#  error "Must be LITTLE/BIG Endian Host"
