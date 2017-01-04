#undef DEBUG
EXPORT_SYMBOL(plpar_hcall);
EXPORT_SYMBOL(plpar_hcall9);
EXPORT_SYMBOL(plpar_hcall_norets);
extern void pSeries_find_serial_port(void);
static int vtermno;
#define __ALIGNED__ __attribute__((__aligned__(sizeof(long))))
static void udbg_hvsi_putc(char c)
static long hvsi_udbg_buf_len;
static uint8_t hvsi_udbg_buf[256];
static int udbg_hvsi_getc_poll(void)
static int udbg_hvsi_getc(void)
static void udbg_putcLP(char c)
static long inbuflen;
static long inbuf[2];
static int udbg_getc_pollLP(void)
static int udbg_getcLP(void)
void __init udbg_init_debug_lpar(void)
void __init find_udbg_vterm(void)
void vpa_init(int cpu)
static long pSeries_lpar_hpte_insert(unsigned long hpte_group,
unsigned long va, unsigned long pa,
unsigned long rflags, unsigned long vflags,
int psize, int ssize)
static DEFINE_SPINLOCK(pSeries_lpar_tlbie_lock);
static long pSeries_lpar_hpte_remove(unsigned long hpte_group)
static void pSeries_lpar_hptab_clear(void)
static inline unsigned long hpte_encode_avpn(unsigned long va, int psize,
int ssize)
static long pSeries_lpar_hpte_updatepp(unsigned long slot,
unsigned long newpp,
unsigned long va,
int psize, int ssize, int local)
static unsigned long pSeries_lpar_hpte_getword0(unsigned long slot)
static long pSeries_lpar_hpte_find(unsigned long va, int psize, int ssize)
static void pSeries_lpar_hpte_updateboltedpp(unsigned long newpp,
unsigned long ea,
int psize, int ssize)
static void pSeries_lpar_hpte_invalidate(unsigned long slot, unsigned long va,
int psize, int ssize, int local)
static void pSeries_lpar_hpte_removebolted(unsigned long ea,
int psize, int ssize)
#define HBR_REQUEST	0x4000000000000000UL
#define HBR_RESPONSE	0x8000000000000000UL
#define HBR_END		0xc000000000000000UL
#define HBR_AVPN	0x0200000000000000UL
#define HBR_ANDCOND	0x0100000000000000UL
static void pSeries_lpar_flush_hash_range(unsigned long number, int local)
static int __init disable_bulk_remove(char *str)
__setup("bulk_remove=", disable_bulk_remove);
void __init hpte_init_lpar(void)
#define CMO_FREE_HINT_DEFAULT 1
static int cmo_free_hint_flag = CMO_FREE_HINT_DEFAULT;
static int __init cmo_free_hint(char *str)
__setup("cmo_free_hint=", cmo_free_hint);
static void pSeries_set_page_state(struct page *page, int order,
unsigned long state)
void arch_free_page(struct page *page, int order)
EXPORT_SYMBOL(arch_free_page);
extern long hcall_tracepoint_refcount;
static DEFINE_PER_CPU(unsigned int, hcall_trace_depth);
void hcall_tracepoint_regfunc(void)
void hcall_tracepoint_unregfunc(void)
void __trace_hcall_entry(unsigned long opcode, unsigned long *args)
void __trace_hcall_exit(long opcode, unsigned long retval,
unsigned long *retbuf)
int h_get_mpp(struct hvcall_mpp_data *mpp_data)
EXPORT_SYMBOL(h_get_mpp);
int h_get_mpp_x(struct hvcall_mpp_x_data *mpp_x_data)
