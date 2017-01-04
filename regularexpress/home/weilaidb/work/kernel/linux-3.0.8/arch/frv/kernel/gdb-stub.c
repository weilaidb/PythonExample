#define LEDS(x) do  while(0)
#undef GDBSTUB_DEBUG_PROTOCOL
extern void debug_to_serial(const char *p, int n);
extern void gdbstub_console_write(struct console *co, const char *p, unsigned n);
extern volatile uint32_t __break_error_detect[3];
struct __debug_amr  __attribute__((aligned(8)));
struct __debug_mmu ;
static struct __debug_mmu __debug_mmu;
#define BUFMAX 2048
#define BREAK_INSN	0x801000c0
static const char gdbstub_banner[] = "Linux/FR-V GDB Stub (c) RedHat 2003\n";
volatile u8	gdbstub_rx_buffer[PAGE_SIZE] __attribute__((aligned(PAGE_SIZE)));
volatile u32	gdbstub_rx_inp = 0;
volatile u32	gdbstub_rx_outp = 0;
volatile u8	gdbstub_rx_overflow = 0;
u8		gdbstub_rx_unget = 0;
extern volatile u32 __attribute__((section(".bss"))) gdbstub_trace_through_exceptions;
static char	input_buffer[BUFMAX];
static char	output_buffer[BUFMAX];
static const char *regnames[] = ;
struct gdbstub_bkpt ;
static struct gdbstub_bkpt gdbstub_bkpts[256];
static void gdbstub_recv_packet(char *buffer);
static int gdbstub_send_packet(char *buffer);
static int gdbstub_compute_signal(unsigned long tbr);
static int hex(unsigned char ch);
static int hexToInt(char **ptr, unsigned long *intValue);
static unsigned char *mem2hex(const void *mem, char *buf, int count, int may_fault);
static char *hex2mem(const char *buf, void *_mem, int count);
static int hex(unsigned char ch)
void gdbstub_printk(const char *fmt, ...)
static inline char *gdbstub_strcpy(char *dst, const char *src)
static void gdbstub_purge_cache(void)
static void gdbstub_recv_packet(char *buffer)
static int gdbstub_send_packet(char *buffer)
static int hexToInt(char **ptr, unsigned long *_value)
static inline int gdbstub_addr_probe(const void *vaddr)
static unsigned long __saved_dampr, __saved_damlr;
static inline unsigned long gdbstub_virt_to_pte(unsigned long vaddr)
static inline int gdbstub_addr_map(const void *vaddr)
static inline void gdbstub_addr_unmap(void)
static inline int gdbstub_read_dword(const void *addr, uint32_t *_res)
static inline int gdbstub_write_dword(void *addr, uint32_t val)
static inline int gdbstub_read_word(const void *addr, uint16_t *_res)
static inline int gdbstub_write_word(void *addr, uint16_t val)
static inline int gdbstub_read_byte(const void *addr, uint8_t *_res)
static inline int gdbstub_write_byte(void *addr, uint8_t val)
static void __gdbstub_console_write(struct console *co, const char *p, unsigned n)
static struct console gdbstub_console = ;
static unsigned char *mem2hex(const void *_mem, char *buf, int count, int may_fault)
static char *hex2mem(const char *buf, void *_mem, int count)
static const struct brr_to_sig_map  brr_to_sig_map[] = ;
static inline int gdbstub_compute_signal(unsigned long brr)
static int gdbstub_set_breakpoint(unsigned long type, unsigned long addr, unsigned long len)
int gdbstub_clear_breakpoint(unsigned long type, unsigned long addr, unsigned long len)
static void gdbstub_check_breakpoint(void)
static void __maybe_unused gdbstub_show_regs(void)
static void __maybe_unused gdbstub_dump_debugregs(void)
void gdbstub_get_mmu_state(void)
static void gdbstub_handle_query(void)
void gdbstub(int sigval)
void __init gdbstub_init(void)
#if defined (CONFIG_GDB_CONSOLE) && !defined(CONFIG_GDBSTUB_IMMEDIATE)
static int __init gdbstub_postinit(void)
__initcall(gdbstub_postinit);
void gdbstub_exit(int status)
static void *malloc(size_t size) __maybe_unused;
static void *malloc(size_t size)
static void free(void *p) __maybe_unused;
static void free(void *p)
static uint32_t ___get_HSR0(void) __maybe_unused;
static uint32_t ___get_HSR0(void)
static uint32_t ___set_HSR0(uint32_t x) __maybe_unused;
static uint32_t ___set_HSR0(uint32_t x)
