#define AVUTIL_X86_ASM_H
typedef struct xmm_reg  xmm_reg;
typedef struct ymm_reg  ymm_reg;
#if ARCH_X86_64
#    define FF_OPSIZE "q"
#    define FF_REG_a "rax"
#    define FF_REG_b "rbx"
#    define FF_REG_c "rcx"
#    define FF_REG_d "rdx"
#    define FF_REG_D "rdi"
#    define FF_REG_S "rsi"
#    define FF_PTR_SIZE "8"
typedef int64_t x86_reg;
#    define FF_REG_sp "rsp"
#    define FF_REG_BP "rbp"
#    define FF_REGBP   rbp
#    define FF_REGa    rax
#    define FF_REGb    rbx
#    define FF_REGc    rcx
#    define FF_REGd    rdx
#    define FF_REGSP   rsp
#elif ARCH_X86_32
#    define FF_OPSIZE "l"
#    define FF_REG_a "eax"
#    define FF_REG_b "ebx"
#    define FF_REG_c "ecx"
#    define FF_REG_d "edx"
#    define FF_REG_D "edi"
#    define FF_REG_S "esi"
#    define FF_PTR_SIZE "4"
typedef int32_t x86_reg;
#    define FF_REG_sp "esp"
#    define FF_REG_BP "ebp"
#    define FF_REGBP   ebp
#    define FF_REGa    eax
#    define FF_REGb    ebx
#    define FF_REGc    ecx
#    define FF_REGd    edx
#    define FF_REGSP   esp
typedef int x86_reg;
#define HAVE_7REGS (ARCH_X86_64 || (HAVE_EBX_AVAILABLE && HAVE_EBP_AVAILABLE))
#define HAVE_6REGS (ARCH_X86_64 || (HAVE_EBX_AVAILABLE || HAVE_EBP_AVAILABLE))
#if ARCH_X86_64 && defined(PIC)
#    define BROKEN_RELOCATIONS 1
#if HAVE_XMM_CLOBBERS
#    define XMM_CLOBBERS(...)        __VA_ARGS__
#    define XMM_CLOBBERS_ONLY(...) : __VA_ARGS__
#    define XMM_CLOBBERS(...)
#    define XMM_CLOBBERS_ONLY(...)
#define LABEL_MANGLE(a) EXTERN_PREFIX #a
#if ARCH_X86_64 && defined(PIC)
#    define LOCAL_MANGLE(a) #a "(%%rip)"
#    define LOCAL_MANGLE(a) #a
#if HAVE_INLINE_ASM_DIRECT_SYMBOL_REFS
#   define MANGLE(a) EXTERN_PREFIX LOCAL_MANGLE(a)
#   define NAMED_CONSTRAINTS_ADD(...)
#   define NAMED_CONSTRAINTS(...)
#   define NAMED_CONSTRAINTS_ARRAY_ADD(...)
#   define NAMED_CONSTRAINTS_ARRAY(...)
#   define MANGLE(a) "%["#a"]"
#   define FE_0(P,X) P(X)
#   define FE_1(P,X,X1) P(X), FE_0(P,X1)
#   define FE_2(P,X,X1,X2) P(X), FE_1(P,X1,X2)
#   define FE_3(P,X,X1,X2,X3) P(X), FE_2(P,X1,X2,X3)
#   define FE_4(P,X,X1,X2,X3,X4) P(X), FE_3(P,X1,X2,X3,X4)
#   define FE_5(P,X,X1,X2,X3,X4,X5) P(X), FE_4(P,X1,X2,X3,X4,X5)
#   define FE_6(P,X,X1,X2,X3,X4,X5,X6) P(X), FE_5(P,X1,X2,X3,X4,X5,X6)
#   define FE_7(P,X,X1,X2,X3,X4,X5,X6,X7) P(X), FE_6(P,X1,X2,X3,X4,X5,X6,X7)
#   define FE_8(P,X,X1,X2,X3,X4,X5,X6,X7,X8) P(X), FE_7(P,X1,X2,X3,X4,X5,X6,X7,X8)
#   define FE_9(P,X,X1,X2,X3,X4,X5,X6,X7,X8,X9) P(X), FE_8(P,X1,X2,X3,X4,X5,X6,X7,X8,X9)
#   define GET_FE_IMPL(_0,_1,_2,_3,_4,_5,_6,_7,_8,_9,NAME,...) NAME
#   define GET_FE(A) GET_FE_IMPL A
#   define GET_FE_GLUE(x, y) x y
#   define FOR_EACH_VA(P,...) GET_FE_GLUE(GET_FE((__VA_ARGS__,FE_9,FE_8,FE_7,FE_6,FE_5,FE_4,FE_3,FE_2,FE_1,FE_0)), (P,__VA_ARGS__))
#   define NAME_CONSTRAINT(x) [x] "m"(x)
#   define NAMED_CONSTRAINTS_ADD(...) , FOR_EACH_VA(NAME_CONSTRAINT,__VA_ARGS__)
#   define NAMED_CONSTRAINTS(...) FOR_EACH_VA(NAME_CONSTRAINT,__VA_ARGS__)
#   define NAME_CONSTRAINT_ARRAY(x) [x] "m"(*x)
#   define NAMED_CONSTRAINTS_ARRAY_ADD(...) , FOR_EACH_VA(NAME_CONSTRAINT_ARRAY,__VA_ARGS__)
#   define NAMED_CONSTRAINTS_ARRAY(...) FOR_EACH_VA(NAME_CONSTRAINT_ARRAY,__VA_ARGS__)
