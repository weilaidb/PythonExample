#define ASM_GLUE_PROC_H
#undef MULTI_CPU
#undef CPU_NAME
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm6
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm7tdmi
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm7
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm720
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm740
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm9tdmi
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm920
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm922
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_fa526
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm925
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm926
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm940
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm946
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_sa110
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_sa1100
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm1020
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm1020e
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm1022
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_arm1026
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_xscale
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_xsc3
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_mohawk
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_feroceon
# endif
#if defined(CONFIG_CPU_V6) || defined(CONFIG_CPU_V6K)
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_v6
# endif
# ifdef CPU_NAME
#  undef  MULTI_CPU
#  define MULTI_CPU
# else
#  define CPU_NAME cpu_v7
# endif
#define cpu_proc_init			__glue(CPU_NAME,_proc_init)
#define cpu_proc_fin			__glue(CPU_NAME,_proc_fin)
#define cpu_reset			__glue(CPU_NAME,_reset)
#define cpu_do_idle			__glue(CPU_NAME,_do_idle)
#define cpu_dcache_clean_area		__glue(CPU_NAME,_dcache_clean_area)
#define cpu_do_switch_mm		__glue(CPU_NAME,_switch_mm)
#define cpu_set_pte_ext			__glue(CPU_NAME,_set_pte_ext)
#define cpu_suspend_size		__glue(CPU_NAME,_suspend_size)
#define cpu_do_suspend			__glue(CPU_NAME,_do_suspend)
#define cpu_do_resume			__glue(CPU_NAME,_do_resume)
