#define ZERO 0
#define AT 2
#define A0 4
#define A1 5
#define A2 6
#define T0 8
#define T1 9
#define T2 10
#define T3 11
#define T9 25
#define RA 31
enum label_id ;
UASM_L_LA(_clear_nopref)
UASM_L_LA(_clear_pref)
UASM_L_LA(_copy_nopref)
UASM_L_LA(_copy_pref_both)
UASM_L_LA(_copy_pref_store)
static struct uasm_label __cpuinitdata labels[5];
static struct uasm_reloc __cpuinitdata relocs[5];
#define cpu_is_r4600_v1_x()	((read_c0_prid() & 0xfffffff0) == 0x00002010)
#define cpu_is_r4600_v2_x()	((read_c0_prid() & 0xfffffff0) == 0x00002020)
static u32 clear_page_array[0x120 / 4];
void clear_page_cpu(void *page) __attribute__((alias("clear_page_array")));
void clear_page(void *page) __attribute__((alias("clear_page_array")));
EXPORT_SYMBOL(clear_page);
static u32 copy_page_array[0x540 / 4];
void
copy_page_cpu(void *to, void *from) __attribute__((alias("copy_page_array")));
void copy_page(void *to, void *from) __attribute__((alias("copy_page_array")));
EXPORT_SYMBOL(copy_page);
static int pref_bias_clear_store __cpuinitdata;
static int pref_bias_copy_load __cpuinitdata;
static int pref_bias_copy_store __cpuinitdata;
static u32 pref_src_mode __cpuinitdata;
static u32 pref_dst_mode __cpuinitdata;
static int clear_word_size __cpuinitdata;
static int copy_word_size __cpuinitdata;
static int half_clear_loop_size __cpuinitdata;
static int half_copy_loop_size __cpuinitdata;
static int cache_line_size __cpuinitdata;
#define cache_line_mask() (cache_line_size - 1)
static inline void __cpuinit
pg_addiu(u32 **buf, unsigned int reg1, unsigned int reg2, unsigned int off)
static void __cpuinit set_prefetch_parameters(void)
static void __cpuinit build_clear_store(u32 **buf, int off)
static inline void __cpuinit build_clear_pref(u32 **buf, int off)
void __cpuinit build_clear_page(void)
static void __cpuinit build_copy_load(u32 **buf, int reg, int off)
static void __cpuinit build_copy_store(u32 **buf, int reg, int off)
static inline void build_copy_load_pref(u32 **buf, int off)
static inline void build_copy_store_pref(u32 **buf, int off)
void __cpuinit build_copy_page(void)
struct dmadscr  ____cacheline_aligned_in_smp page_descr[DM_NUM_CHANNELS];
void sb1_dma_init(void)
void clear_page(void *page)
void copy_page(void *to, void *from)
