#define _BLACKFIN_TRACE_
#define BFIN_TRACE_INIT ((CONFIG_DEBUG_BFIN_HWTRACE_COMPRESSION << 4) | 0x03)
#define BFIN_TRACE_ON   (BFIN_TRACE_INIT | (CONFIG_DEBUG_BFIN_HWTRACE_EXPAND << 2))
#define BFIN_TRACE_ON   (BFIN_TRACE_INIT)
extern unsigned long trace_buff_offset;
extern unsigned long software_trace_buff[];
#if defined(CONFIG_DEBUG_VERBOSE)
extern void decode_address(char *buf, unsigned long address);
extern bool get_instruction(unsigned int *val, unsigned short *address);
static inline void decode_address(char *buf, unsigned long address)
static inline bool get_instruction(unsigned int *val, unsigned short *address)
#define trace_buffer_init() bfin_write_TBUFCTL(BFIN_TRACE_INIT)
#define trace_buffer_save(x) \
do  while (0)
#define trace_buffer_restore(x) \
do  while (0)
#define trace_buffer_save(x)
#define trace_buffer_restore(x)
#define trace_buffer_stop(preg, dreg)	\
preg.L = LO(TBUFCTL);		\
preg.H = HI(TBUFCTL);		\
dreg = 0x1;			\
[preg] = dreg;
#define trace_buffer_init(preg, dreg) \
preg.L = LO(TBUFCTL);         \
preg.H = HI(TBUFCTL);         \
dreg = BFIN_TRACE_INIT;       \
[preg] = dreg;
#define trace_buffer_save(preg, dreg) \
preg.L = LO(TBUFCTL); \
preg.H = HI(TBUFCTL); \
dreg = [preg]; \
[--sp] = dreg; \
dreg = 0x1; \
[preg] = dreg;
#define trace_buffer_restore(preg, dreg) \
preg.L = LO(TBUFCTL); \
preg.H = HI(TBUFCTL); \
dreg = [sp++]; \
[preg] = dreg;
#define trace_buffer_stop(preg, dreg)
#define trace_buffer_init(preg, dreg)
#define trace_buffer_save(preg, dreg)
#define trace_buffer_restore(preg, dreg)
# define DEBUG_HWTRACE_SAVE(preg, dreg)    trace_buffer_save(preg, dreg)
# define DEBUG_HWTRACE_RESTORE(preg, dreg) trace_buffer_restore(preg, dreg)
# define DEBUG_HWTRACE_SAVE(preg, dreg)
# define DEBUG_HWTRACE_RESTORE(preg, dreg)
