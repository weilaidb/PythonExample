#define LS_SIZE                 0x40000
typedef unsigned int u32;
typedef unsigned long long u64;
static inline void save_event_mask(void)
static inline void save_tag_mask(void)
static inline void save_upper_240kb(addr64 lscsa_ea)
static inline void save_fpcr(void)
static inline void save_decr(void)
static inline void save_srr0(void)
static inline void spill_regs_to_mem(addr64 lscsa_ea)
static inline void enqueue_sync(addr64 lscsa_ea)
static inline void save_complete(void)
int main()
