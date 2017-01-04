#define _ASM_X86_MSR_H
#define X86_IOC_RDMSR_REGS	_IOWR('c', 0xA0, __u32[8])
#define X86_IOC_WRMSR_REGS	_IOWR('c', 0xA1, __u32[8])
struct msr ;
struct msr_info ;
struct msr_regs_info ;
static inline unsigned long long native_read_tscp(unsigned int *aux)
#define DECLARE_ARGS(val, low, high)	unsigned low, high
#define EAX_EDX_VAL(val, low, high)	((low) | ((u64)(high) << 32))
#define EAX_EDX_ARGS(val, low, high)	"a" (low), "d" (high)
#define EAX_EDX_RET(val, low, high)	"=a" (low), "=d" (high)
#define DECLARE_ARGS(val, low, high)	unsigned long long val
#define EAX_EDX_VAL(val, low, high)	(val)
#define EAX_EDX_ARGS(val, low, high)	"A" (val)
#define EAX_EDX_RET(val, low, high)	"=A" (val)
static inline unsigned long long native_read_msr(unsigned int msr)
static inline unsigned long long native_read_msr_safe(unsigned int msr,
int *err)
static inline void native_write_msr(unsigned int msr,
unsigned low, unsigned high)
notrace static inline int native_write_msr_safe(unsigned int msr,
unsigned low, unsigned high)
extern unsigned long long native_read_tsc(void);
extern int native_rdmsr_safe_regs(u32 regs[8]);
extern int native_wrmsr_safe_regs(u32 regs[8]);
static __always_inline unsigned long long __native_read_tsc(void)
static inline unsigned long long native_read_pmc(int counter)
#define rdmsr(msr, val1, val2)					\
do  while (0)
static inline void wrmsr(unsigned msr, unsigned low, unsigned high)
#define rdmsrl(msr, val)			\
((val) = native_read_msr((msr)))
#define wrmsrl(msr, val)						\
native_write_msr((msr), (u32)((u64)(val)), (u32)((u64)(val) >> 32))
static inline int wrmsr_safe(unsigned msr, unsigned low, unsigned high)
#define rdmsr_safe(msr, p1, p2)					\
()
static inline int rdmsrl_safe(unsigned msr, unsigned long long *p)
static inline int rdmsrl_amd_safe(unsigned msr, unsigned long long *p)
static inline int wrmsrl_amd_safe(unsigned msr, unsigned long long val)
static inline int rdmsr_safe_regs(u32 regs[8])
static inline int wrmsr_safe_regs(u32 regs[8])
#define rdtscl(low)						\
((low) = (u32)__native_read_tsc())
#define rdtscll(val)						\
((val) = __native_read_tsc())
#define rdpmc(counter, low, high)			\
do  while (0)
#define rdtscp(low, high, aux)					\
do  while (0)
#define rdtscpll(val, aux) (val) = native_read_tscp(&(aux))
#define checking_wrmsrl(msr, val) wrmsr_safe((msr), (u32)(val),		\
(u32)((val) >> 32))
#define write_tsc(val1, val2) wrmsr(MSR_IA32_TSC, (val1), (val2))
#define write_rdtscp_aux(val) wrmsr(MSR_TSC_AUX, (val), 0)
struct msr *msrs_alloc(void);
void msrs_free(struct msr *msrs);
int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
void rdmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
void wrmsr_on_cpus(const struct cpumask *mask, u32 msr_no, struct msr *msrs);
int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h);
int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h);
int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8]);
static inline int rdmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 *l, u32 *h)
static inline int wrmsr_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
static inline void rdmsr_on_cpus(const struct cpumask *m, u32 msr_no,
struct msr *msrs)
static inline void wrmsr_on_cpus(const struct cpumask *m, u32 msr_no,
struct msr *msrs)
static inline int rdmsr_safe_on_cpu(unsigned int cpu, u32 msr_no,
u32 *l, u32 *h)
static inline int wrmsr_safe_on_cpu(unsigned int cpu, u32 msr_no, u32 l, u32 h)
static inline int rdmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8])
static inline int wrmsr_safe_regs_on_cpu(unsigned int cpu, u32 regs[8])
