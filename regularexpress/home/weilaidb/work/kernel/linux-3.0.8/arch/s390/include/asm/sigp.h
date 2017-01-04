#define __ASM_SIGP_H
extern unsigned short __cpu_logical_map[];
static inline int cpu_logical_map(int cpu)
enum ;
enum ;
enum ;
static inline int raw_sigp(u16 cpu, int order)
static inline int raw_sigp_p(u32 parameter, u16 cpu, int order)
static inline int raw_sigp_ps(u32 *status, u32 parm, u16 cpu, int order)
static inline int sigp(int cpu, int order)
static inline int sigp_p(u32 parameter, int cpu, int order)
static inline int sigp_ps(u32 *status, u32 parm, int cpu, int order)
