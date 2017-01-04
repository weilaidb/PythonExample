#define _M68K_SETUP_H
#define MACH_AMIGA    1
#define MACH_ATARI    2
#define MACH_MAC      3
#define MACH_APOLLO   4
#define MACH_SUN3     5
#define MACH_MVME147  6
#define MACH_MVME16x  7
#define MACH_BVME6000 8
#define MACH_HP300    9
#define MACH_Q40     10
#define MACH_SUN3X   11
#define COMMAND_LINE_SIZE 256
#define CL_SIZE COMMAND_LINE_SIZE
extern unsigned long m68k_machtype;
#if !defined(CONFIG_AMIGA)
#  define MACH_IS_AMIGA (0)
#elif defined(CONFIG_ATARI) || defined(CONFIG_MAC) || defined(CONFIG_APOLLO) \
|| defined(CONFIG_MVME16x) || defined(CONFIG_BVME6000)               \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                      \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_AMIGA (m68k_machtype == MACH_AMIGA)
#  define MACH_AMIGA_ONLY
#  define MACH_IS_AMIGA (1)
#  define MACH_TYPE (MACH_AMIGA)
#if !defined(CONFIG_ATARI)
#  define MACH_IS_ATARI (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_APOLLO) \
|| defined(CONFIG_MVME16x) || defined(CONFIG_BVME6000)               \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                      \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_ATARI (m68k_machtype == MACH_ATARI)
#  define MACH_ATARI_ONLY
#  define MACH_IS_ATARI (1)
#  define MACH_TYPE (MACH_ATARI)
#if !defined(CONFIG_MAC)
#  define MACH_IS_MAC (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_ATARI) || defined(CONFIG_APOLLO) \
|| defined(CONFIG_MVME16x) || defined(CONFIG_BVME6000)                 \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                        \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_MAC (m68k_machtype == MACH_MAC)
#  define MACH_MAC_ONLY
#  define MACH_IS_MAC (1)
#  define MACH_TYPE (MACH_MAC)
#if defined(CONFIG_SUN3)
#define MACH_IS_SUN3 (1)
#define MACH_SUN3_ONLY (1)
#define MACH_TYPE (MACH_SUN3)
#define MACH_IS_SUN3 (0)
#if !defined (CONFIG_APOLLO)
#  define MACH_IS_APOLLO (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_MVME16x) || defined(CONFIG_BVME6000)              \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                     \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_APOLLO (m68k_machtype == MACH_APOLLO)
#  define MACH_APOLLO_ONLY
#  define MACH_IS_APOLLO (1)
#  define MACH_TYPE (MACH_APOLLO)
#if !defined (CONFIG_MVME147)
#  define MACH_IS_MVME147 (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_BVME6000)               \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                     \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME16x)
#  define MACH_IS_MVME147 (m68k_machtype == MACH_MVME147)
#  define MACH_MVME147_ONLY
#  define MACH_IS_MVME147 (1)
#  define MACH_TYPE (MACH_MVME147)
#if !defined (CONFIG_MVME16x)
#  define MACH_IS_MVME16x (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_BVME6000)               \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                     \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_MVME16x (m68k_machtype == MACH_MVME16x)
#  define MACH_MVME16x_ONLY
#  define MACH_IS_MVME16x (1)
#  define MACH_TYPE (MACH_MVME16x)
#if !defined (CONFIG_BVME6000)
#  define MACH_IS_BVME6000 (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_MVME16x)                \
|| defined(CONFIG_HP300) || defined(CONFIG_Q40)                     \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_BVME6000 (m68k_machtype == MACH_BVME6000)
#  define MACH_BVME6000_ONLY
#  define MACH_IS_BVME6000 (1)
#  define MACH_TYPE (MACH_BVME6000)
#if !defined (CONFIG_HP300)
#  define MACH_IS_HP300 (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_MVME16x) \
|| defined(CONFIG_BVME6000) || defined(CONFIG_Q40) \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_HP300 (m68k_machtype == MACH_HP300)
#  define MACH_HP300_ONLY
#  define MACH_IS_HP300 (1)
#  define MACH_TYPE (MACH_HP300)
#if !defined (CONFIG_Q40)
#  define MACH_IS_Q40 (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_MVME16x)                \
|| defined(CONFIG_BVME6000) || defined(CONFIG_HP300)                \
|| defined(CONFIG_SUN3X) || defined(CONFIG_MVME147)
#  define MACH_IS_Q40 (m68k_machtype == MACH_Q40)
#  define MACH_Q40_ONLY
#  define MACH_IS_Q40 (1)
#  define MACH_TYPE (MACH_Q40)
#if !defined (CONFIG_SUN3X)
#  define MACH_IS_SUN3X (0)
#elif defined(CONFIG_AMIGA) || defined(CONFIG_MAC) || defined(CONFIG_ATARI) \
|| defined(CONFIG_APOLLO) || defined(CONFIG_MVME16x)                \
|| defined(CONFIG_BVME6000) || defined(CONFIG_HP300)                \
|| defined(CONFIG_Q40) || defined(CONFIG_MVME147)
#  define MACH_IS_SUN3X (m68k_machtype == MACH_SUN3X)
#  define CONFIG_SUN3X_ONLY
#  define MACH_IS_SUN3X (1)
#  define MACH_TYPE (MACH_SUN3X)
#  define MACH_TYPE (m68k_machtype)
#define CPUB_68020     0
#define CPUB_68030     1
#define CPUB_68040     2
#define CPUB_68060     3
#define CPU_68020      (1<<CPUB_68020)
#define CPU_68030      (1<<CPUB_68030)
#define CPU_68040      (1<<CPUB_68040)
#define CPU_68060      (1<<CPUB_68060)
#define FPUB_68881     0
#define FPUB_68882     1
#define FPUB_68040     2
#define FPUB_68060     3
#define FPUB_SUNFPA    4
#define FPU_68881      (1<<FPUB_68881)
#define FPU_68882      (1<<FPUB_68882)
#define FPU_68040      (1<<FPUB_68040)
#define FPU_68060      (1<<FPUB_68060)
#define FPU_SUNFPA     (1<<FPUB_SUNFPA)
#define MMUB_68851     0
#define MMUB_68030     1
#define MMUB_68040     2
#define MMUB_68060     3
#define MMUB_APOLLO    4
#define MMUB_SUN3      5
#define MMU_68851      (1<<MMUB_68851)
#define MMU_68030      (1<<MMUB_68030)
#define MMU_68040      (1<<MMUB_68040)
#define MMU_68060      (1<<MMUB_68060)
#define MMU_SUN3       (1<<MMUB_SUN3)
#define MMU_APOLLO     (1<<MMUB_APOLLO)
extern unsigned long m68k_cputype;
extern unsigned long m68k_fputype;
extern unsigned long m68k_mmutype;
extern unsigned long vme_brdtype;
extern int m68k_is040or060;
#if !defined(CONFIG_M68020)
#  define CPU_IS_020 (0)
#  define MMU_IS_851 (0)
#  define MMU_IS_SUN3 (0)
#elif defined(CONFIG_M68030) || defined(CONFIG_M68040) || defined(CONFIG_M68060)
#  define CPU_IS_020 (m68k_cputype & CPU_68020)
#  define MMU_IS_851 (m68k_mmutype & MMU_68851)
#  define MMU_IS_SUN3 (0)
#  define CPU_M68020_ONLY
#  define CPU_IS_020 (1)
#  define MMU_IS_SUN3 (1)
#  define MMU_IS_851 (0)
#  define MMU_IS_SUN3 (0)
#  define MMU_IS_851 (1)
#if !defined(CONFIG_M68030)
#  define CPU_IS_030 (0)
#  define MMU_IS_030 (0)
#elif defined(CONFIG_M68020) || defined(CONFIG_M68040) || defined(CONFIG_M68060)
#  define CPU_IS_030 (m68k_cputype & CPU_68030)
#  define MMU_IS_030 (m68k_mmutype & MMU_68030)
#  define CPU_M68030_ONLY
#  define CPU_IS_030 (1)
#  define MMU_IS_030 (1)
#if !defined(CONFIG_M68040)
#  define CPU_IS_040 (0)
#  define MMU_IS_040 (0)
#elif defined(CONFIG_M68020) || defined(CONFIG_M68030) || defined(CONFIG_M68060)
#  define CPU_IS_040 (m68k_cputype & CPU_68040)
#  define MMU_IS_040 (m68k_mmutype & MMU_68040)
#  define CPU_M68040_ONLY
#  define CPU_IS_040 (1)
#  define MMU_IS_040 (1)
#if !defined(CONFIG_M68060)
#  define CPU_IS_060 (0)
#  define MMU_IS_060 (0)
#elif defined(CONFIG_M68020) || defined(CONFIG_M68030) || defined(CONFIG_M68040)
#  define CPU_IS_060 (m68k_cputype & CPU_68060)
#  define MMU_IS_060 (m68k_mmutype & MMU_68060)
#  define CPU_M68060_ONLY
#  define CPU_IS_060 (1)
#  define MMU_IS_060 (1)
#if !defined(CONFIG_M68020) && !defined(CONFIG_M68030)
#  define CPU_IS_020_OR_030 (0)
#  define CPU_M68020_OR_M68030
#  if defined(CONFIG_M68040) || defined(CONFIG_M68060)
#    define CPU_IS_020_OR_030 (!m68k_is040or060)
#  else
#    define CPU_M68020_OR_M68030_ONLY
#    define CPU_IS_020_OR_030 (1)
#  endif
#if !defined(CONFIG_M68040) && !defined(CONFIG_M68060)
#  define CPU_IS_040_OR_060 (0)
#  define CPU_M68040_OR_M68060
#  if defined(CONFIG_M68020) || defined(CONFIG_M68030)
#    define CPU_IS_040_OR_060 (m68k_is040or060)
#  else
#    define CPU_M68040_OR_M68060_ONLY
#    define CPU_IS_040_OR_060 (1)
#  endif
#define CPU_TYPE (m68k_cputype)
#  ifdef CONFIG_M68KFPU_EMU_ONLY
#    define FPU_IS_EMU (1)
#  else
#    define FPU_IS_EMU (!m68k_fputype)
#  endif
#  define FPU_IS_EMU (0)
#define NUM_MEMINFO	4
struct mem_info ;
extern int m68k_num_memory;
extern int m68k_realnum_memory;
extern struct mem_info m68k_memory[NUM_MEMINFO];
