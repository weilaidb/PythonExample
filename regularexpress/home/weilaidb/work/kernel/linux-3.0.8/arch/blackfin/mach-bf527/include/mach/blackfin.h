#define _MACH_BLACKFIN_H_
#if defined(CONFIG_BF523) || defined(CONFIG_BF522)
# include "defBF522.h"
#if defined(CONFIG_BF525) || defined(CONFIG_BF524)
# include "defBF525.h"
#if defined(CONFIG_BF527) || defined(CONFIG_BF526)
# include "defBF527.h"
#if !defined(__ASSEMBLY__)
# include <asm/cdef_LPBlackfin.h>
# if defined(CONFIG_BF523) || defined(CONFIG_BF522)
#  include "cdefBF522.h"
# endif
# if defined(CONFIG_BF525) || defined(CONFIG_BF524)
#  include "cdefBF525.h"
# endif
# if defined(CONFIG_BF527) || defined(CONFIG_BF526)
#  include "cdefBF527.h"
# endif
