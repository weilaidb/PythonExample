enum ;
enum ;
#define IDT_CMD_READ   0
#define IDT_CMD_WRITE  1
#define IDT_CMD_SEARCH 2
#define IDT_CMD_LEARN  3
#define IDT_LAR_ADR0   	0x180006
#define IDT_LAR_MODE144	0xffff0000
#define IDT_SCR_ADR0  0x180000
#define IDT_SSR0_ADR0 0x180002
#define IDT_SSR1_ADR0 0x180004
#define IDT_GMR_BASE_ADR0 0x180020
#define IDT_DATARY_BASE_ADR0 0
#define IDT_MSKARY_BASE_ADR0 0x80000
#define IDT4_CMD_SEARCH144 3
#define IDT4_CMD_WRITE     4
#define IDT4_CMD_READ      5
#define IDT4_SCR_ADR0  0x3
#define IDT4_GMR_BASE0 0x10
#define IDT4_GMR_BASE1 0x20
#define IDT4_GMR_BASE2 0x30
#define IDT4_DATARY_BASE_ADR0 0x1000000
#define IDT4_MSKARY_BASE_ADR0 0x2000000
#define MAX_WRITE_ATTEMPTS 5
#define MAX_ROUTES 2048
static int mc5_cmd_write(struct adapter *adapter, u32 cmd)
static inline void dbgi_wr_addr3(struct adapter *adapter, u32 v1, u32 v2,
u32 v3)
static inline void dbgi_wr_data3(struct adapter *adapter, u32 v1, u32 v2,
u32 v3)
static inline void dbgi_rd_rsp3(struct adapter *adapter, u32 *v1, u32 *v2,
u32 *v3)
static int mc5_write(struct adapter *adapter, u32 addr_lo, u32 cmd)
static int init_mask_data_array(struct mc5 *mc5, u32 mask_array_base,
u32 data_array_base, u32 write_cmd,
int addr_shift)
static int init_idt52100(struct mc5 *mc5)
static int init_idt43102(struct mc5 *mc5)
static inline void mc5_dbgi_mode_enable(const struct mc5 *mc5)
static void mc5_dbgi_mode_disable(const struct mc5 *mc5)
int t3_mc5_init(struct mc5 *mc5, unsigned int nservers, unsigned int nfilters,
unsigned int nroutes)
#define MC5_INT_FATAL (F_PARITYERR | F_REQQPARERR | F_DISPQPARERR)
void t3_mc5_intr_handler(struct mc5 *mc5)
void t3_mc5_prep(struct adapter *adapter, struct mc5 *mc5, int mode)
