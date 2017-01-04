struct peespi ;
#define ESPI_INTR_MASK (F_DIP4ERR | F_RXDROP | F_TXDROP | F_RXOVERFLOW | \
F_RAMPARITYERR | F_DIP2PARITYERR)
#define MON_MASK  (V_MONITORED_PORT_NUM(3) | F_MONITORED_DIRECTION \
| F_MONITORED_INTERFACE)
#define TRICN_CNFG 14
#define TRICN_CMD_READ  0x11
#define TRICN_CMD_WRITE 0x21
#define TRICN_CMD_ATTEMPTS 10
static int tricn_write(adapter_t *adapter, int bundle_addr, int module_addr,
int ch_addr, int reg_offset, u32 wr_data)
static int tricn_init(adapter_t *adapter)
void t1_espi_intr_enable(struct peespi *espi)
void t1_espi_intr_clear(struct peespi *espi)
void t1_espi_intr_disable(struct peespi *espi)
int t1_espi_intr_handler(struct peespi *espi)
const struct espi_intr_counts *t1_espi_get_intr_counts(struct peespi *espi)
static void espi_setup_for_pm3393(adapter_t *adapter)
static void espi_setup_for_vsc7321(adapter_t *adapter)
static void espi_setup_for_ixf1010(adapter_t *adapter, int nports)
int t1_espi_init(struct peespi *espi, int mac_type, int nports)
void t1_espi_destroy(struct peespi *espi)
struct peespi *t1_espi_create(adapter_t *adapter)
u32 t1_espi_get_mon(adapter_t *adapter, u32 addr, u8 wait)
int t1_espi_get_mon_t204(adapter_t *adapter, u32 *valp, u8 wait)
