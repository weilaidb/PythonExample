#define _ASM_X86_USER_H
# include "user_32.h"
# include "user_64.h"
struct user_ymmh_regs ;
struct user_xsave_hdr ;
#define USER_XSTATE_FX_SW_WORDS 6
#define USER_XSTATE_XCR0_WORD	0
struct user_xstateregs ;
