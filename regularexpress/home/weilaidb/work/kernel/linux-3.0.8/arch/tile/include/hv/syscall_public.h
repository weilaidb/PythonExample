#define _SYS_HV_INCLUDE_SYSCALL_PUBLIC_H
#define HV_SYS_FAST_SHIFT                 14
#define HV_SYS_FAST_MASK                  (1 << HV_SYS_FAST_SHIFT)
#define HV_SYS_FAST_PLO_SHIFT             13
#define HV_SYS_FAST_PL0_MASK              (1 << HV_SYS_FAST_PLO_SHIFT)
#define HV_SYS_fence_incoherent         (51 | HV_SYS_FAST_MASK \
| HV_SYS_FAST_PL0_MASK)
