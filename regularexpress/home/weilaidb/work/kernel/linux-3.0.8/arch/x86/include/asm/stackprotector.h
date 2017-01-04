#define _ASM_STACKPROTECTOR_H 1
#define GDT_STACK_CANARY_INIT						\
[GDT_ENTRY_STACK_CANARY] = GDT_ENTRY_INIT(0x4090, 0, 0x18),
static __always_inline void boot_init_stack_canary(void)
static inline void setup_stack_canary_segment(int cpu)
static inline void load_stack_canary_segment(void)
#define GDT_STACK_CANARY_INIT
static inline void setup_stack_canary_segment(int cpu)
static inline void load_stack_canary_segment(void)
