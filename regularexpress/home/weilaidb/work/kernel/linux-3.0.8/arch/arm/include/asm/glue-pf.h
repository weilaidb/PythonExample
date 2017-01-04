#define ASM_GLUE_PF_H
#undef CPU_PABORT_HANDLER
#undef MULTI_PABORT
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER legacy_pabort
# endif
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER v6_pabort
# endif
# ifdef CPU_PABORT_HANDLER
#  define MULTI_PABORT 1
# else
#  define CPU_PABORT_HANDLER v7_pabort
# endif
#error Unknown prefetch abort handler type
