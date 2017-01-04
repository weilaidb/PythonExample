#define NR_VX855_GPI    14
#define NR_VX855_GPO    13
#define NR_VX855_GPIO   15
#define VX855_GPI(n)    (n)
#define VX855_GPO(n)    (NR_VX855_GPI + (n))
#define VX855_GPIO(n)   (NR_VX855_GPI + NR_VX855_GPO + (n))
#define VX855_GENL_PURPOSE_OUTPUT 0x44c
#define VX855_GPI_STATUS_CHG 0x450
#define VX855_GPI_SCI_SMI 0x452
#define BIT_GPIO12 0x40
#define PREFIX "OLPC DCON:"
static void dcon_clear_irq(void)
static int dcon_was_irq(void)
static int dcon_init_xo_1_5(struct dcon_priv *dcon)
static void set_i2c_line(int sda, int scl)
static void dcon_wiggle_xo_1_5(void)
static void dcon_set_dconload_xo_1_5(int val)
static u8 dcon_read_status_xo_1_5(void)
struct dcon_platform_data dcon_pdata_xo_1_5 = ;
