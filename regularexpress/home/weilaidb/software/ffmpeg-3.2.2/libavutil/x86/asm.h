#define AVUTIL_X86_ASM_H
typedef struct xmm_reg  xmm_reg;
typedef struct ymm_reg  ymm_reg;
#if ARCH_X86_64
#    define FF_OPSIZE
#    define FF_REG_a
#    define FF_REG_b
#    define FF_REG_c
#    define FF_REG_d
#    define FF_REG_D
#    define FF_REG_S
#    define FF_PTR_SIZE
typedef int64_t x86_reg;
#    define FF_REG_sp
#    define FF_REG_BP
#    define FF_REGBP   rbp
#    define FF_REGa    rax
#    define FF_REGb    rbx
#    define FF_REGc    rcx
#    define FF_REGd    rdx
#    define FF_REGSP   rsp
#elif ARCH_X86_32
#    define FF_OPSIZE
#    define FF_REG_a
#    define FF_REG_b
#    define FF_REG_c
#    define FF_REG_d
#    define FF_REG_D
#    define FF_REG_S
#    define FF_PTR_SIZE
typedef int32_t x86_reg;
#    define FF_REG_sp
#    define FF_REG_BP
#    define FF_REGBP   ebp
#    define FF_REGa    eax
#    define FF_REGb    ebx
#    define FF_REGc    ecx
#    define FF_REGd    edx
#    define FF_REGSP   esp
typedef int x86_reg;
#define HAVE_7REGS (ARCH_X86_64 || (HAVE_EBX_AVAILABLE && HAVE_EBP_AVAILABLE))
#define HAVE_6REGS (ARCH_X86_64 || (HAVE_EBX_AVAILABLE || HAVE_EBP_AVAILABLE))
defined
#    define BROKEN_RELOCATIONS 1
#if HAVE_XMM_CLOBBERS
XMM_CLOBBERS        __VA_ARGS__
XMM_CLOBBERS_ONLY : __VA_ARGS__
XMM_CLOBBERS
XMM_CLOBBERS_ONLY
LABEL_MANGLE EXTERN_PREFIX #a
defined
LOCAL_MANGLE #a
LOCAL_MANGLE #a
#if HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS
LOCAL_MANGLE
NAMED_CONSTRAINTS_ADD
NAMED_CONSTRAINTS
NAMED_CONSTRAINTS_ARRAY_ADD
NAMED_CONSTRAINTS_ARRAY
MANGLE
FE_0 P(X)
FE_1 P(X), FE_0(P,X1)
FE_2 P(X), FE_1(P,X1,X2)
FE_3 P(X), FE_2(P,X1,X2,X3)
FE_4 P(X), FE_3(P,X1,X2,X3,X4)
FE_5 P(X), FE_4(P,X1,X2,X3,X4,X5)
FE_6 P(X), FE_5(P,X1,X2,X3,X4,X5,X6)
FE_7 P(X), FE_6(P,X1,X2,X3,X4,X5,X6,X7)
FE_8 P(X), FE_7(P,X1,X2,X3,X4,X5,X6,X7,X8)
FE_9 P(X), FE_8(P,X1,X2,X3,X4,X5,X6,X7,X8,X9)
GET_FE_IMPL NAME
GET_FE GET_FE_IMPL A
GET_FE_GLUE x y
FOR_EACH_VA GET_FE_GLUE(GET_FE((__VA_ARGS__,FE_9,FE_8,FE_7,FE_6,FE_5,FE_4,FE_3,FE_2,FE_1,FE_0)), (P,__VA_ARGS__))
NAME_CONSTRAINT [x] (x)
NAMED_CONSTRAINTS_ADD , FOR_EACH_VA(NAME_CONSTRAINT,__VA_ARGS__)
NAMED_CONSTRAINTS FOR_EACH_VA(NAME_CONSTRAINT,__VA_ARGS__)
NAME_CONSTRAINT_ARRAY [x] (*x)
NAMED_CONSTRAINTS_ARRAY_ADD , FOR_EACH_VA(NAME_CONSTRAINT_ARRAY,__VA_ARGS__)
NAMED_CONSTRAINTS_ARRAY FOR_EACH_VA(NAME_CONSTRAINT_ARRAY,__VA_ARGS__)
