struct cpm_scc ;
struct cpm_smc ;
struct cpm_param ;
struct cpm_bd ;
static void *cpcr;
static struct cpm_param *param;
static struct cpm_smc *smc;
static struct cpm_scc *scc;
static struct cpm_bd *tbdf, *rbdf;
static u32 cpm_cmd;
static void *cbd_addr;
static u32 cbd_offset;
static void (*do_cmd)(int op);
static void (*enable_port)(void);
static void (*disable_port)(void);
#define CPM_CMD_STOP_TX     4
#define CPM_CMD_RESTART_TX  6
#define CPM_CMD_INIT_RX_TX  0
static void cpm1_cmd(int op)
static void cpm2_cmd(int op)
static void smc_disable_port(void)
static void scc_disable_port(void)
static void smc_enable_port(void)
static void scc_enable_port(void)
static int cpm_serial_open(void)
static void cpm_serial_putc(unsigned char c)
static unsigned char cpm_serial_tstc(void)
static unsigned char cpm_serial_getc(void)
int cpm_console_init(void *devp, struct serial_console_data *scdp)
