#define _MACH_BLACKFIN_H_
#define BF537_FAMILY
# include "defBF534.h"
#if defined(CONFIG_BF537) || defined(CONFIG_BF536)
# include "defBF537.h"
#if !defined(__ASSEMBLY__)
# include <asm/cdef_LPBlackfin.h>
# ifdef CONFIG_BF534
#  include "cdefBF534.h"
# endif
# if defined(CONFIG_BF537) || defined(CONFIG_BF536)
#  include "cdefBF537.h"
# endif
