#define _ASM_CRIS_ARCH_UNISTD_H_
#define _syscall0(type,name) \
type name(void) \
#define _syscall1(type,name,type1,arg1) \
type name(type1 arg1) \
#define _syscall2(type,name,type1,arg1,type2,arg2) \
type name(type1 arg1,type2 arg2) \
#define _syscall3(type,name,type1,arg1,type2,arg2,type3,arg3) \
type name(type1 arg1,type2 arg2,type3 arg3) \
#define _syscall4(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4) \
type name (type1 arg1, type2 arg2, type3 arg3, type4 arg4) \
#define _syscall5(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4, \
type5,arg5) \
type name (type1 arg1,type2 arg2,type3 arg3,type4 arg4,type5 arg5) \
#define _syscall6(type,name,type1,arg1,type2,arg2,type3,arg3,type4,arg4, \
type5,arg5,type6,arg6) \
type name (type1 arg1,type2 arg2,type3 arg3,type4 arg4,type5 arg5,type6 arg6) \
