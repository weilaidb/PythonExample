static int t4_wait_op_done_val(struct adapter *adapter, int reg, u32 mask,
int polarity, int attempts, int delay, u32 *valp)
static inline int t4_wait_op_done(struct adapter *adapter, int reg, u32 mask,
int polarity, int attempts, int delay)
void t4_set_reg_field(struct adapter *adapter, unsigned int addr, u32 mask,
u32 val)
static void t4_read_indirect(struct adapter *adap, unsigned int addr_reg,
unsigned int data_reg, u32 *vals,
unsigned int nregs, unsigned int start_idx)
static void get_mbox_rpl(struct adapter *adap, __be64 *rpl, int nflit,
u32 mbox_addr)
static void fw_asrt(struct adapter *adap, u32 mbox_addr)
static void dump_mbox(struct adapter *adap, int mbox, u32 data_reg)
int t4_wr_mbox_meat(struct adapter *adap, int mbox, const void *cmd, int size,
void *rpl, bool sleep_ok)
int t4_mc_read(struct adapter *adap, u32 addr, __be32 *data, u64 *ecc)
int t4_edc_read(struct adapter *adap, int idx, u32 addr, __be32 *data, u64 *ecc)
#define EEPROM_STAT_ADDR   0x7bfc
#define VPD_BASE           0
#define VPD_LEN            512
int t4_seeprom_wp(struct adapter *adapter, bool enable)
static int get_vpd_params(struct adapter *adapter, struct vpd_params *p)
enum ;
static int sf1_read(struct adapter *adapter, unsigned int byte_cnt, int cont,
int lock, u32 *valp)
static int sf1_write(struct adapter *adapter, unsigned int byte_cnt, int cont,
int lock, u32 val)
static int flash_wait_op(struct adapter *adapter, int attempts, int delay)
static int t4_read_flash(struct adapter *adapter, unsigned int addr,
unsigned int nwords, u32 *data, int byte_oriented)
static int t4_write_flash(struct adapter *adapter, unsigned int addr,
unsigned int n, const u8 *data)
static int get_fw_version(struct adapter *adapter, u32 *vers)
static int get_tp_version(struct adapter *adapter, u32 *vers)
int t4_check_fw_version(struct adapter *adapter)
static int t4_flash_erase_sectors(struct adapter *adapter, int start, int end)
int t4_load_fw(struct adapter *adap, const u8 *fw_data, unsigned int size)
#define ADVERT_MASK (FW_PORT_CAP_SPEED_100M | FW_PORT_CAP_SPEED_1G |\
FW_PORT_CAP_SPEED_10G | FW_PORT_CAP_ANEG)
int t4_link_start(struct adapter *adap, unsigned int mbox, unsigned int port,
struct link_config *lc)
int t4_restart_aneg(struct adapter *adap, unsigned int mbox, unsigned int port)
struct intr_info ;
static int t4_handle_intr_status(struct adapter *adapter, unsigned int reg,
const struct intr_info *acts)
static void pcie_intr_handler(struct adapter *adapter)
static void tp_intr_handler(struct adapter *adapter)
static void sge_intr_handler(struct adapter *adapter)
static void cim_intr_handler(struct adapter *adapter)
static void ulprx_intr_handler(struct adapter *adapter)
static void ulptx_intr_handler(struct adapter *adapter)
static void pmtx_intr_handler(struct adapter *adapter)
static void pmrx_intr_handler(struct adapter *adapter)
static void cplsw_intr_handler(struct adapter *adapter)
static void le_intr_handler(struct adapter *adap)
static void mps_intr_handler(struct adapter *adapter)
#define MEM_INT_MASK (PERR_INT_CAUSE | ECC_CE_INT_CAUSE | ECC_UE_INT_CAUSE)
static void mem_intr_handler(struct adapter *adapter, int idx)
static void ma_intr_handler(struct adapter *adap)
static void smb_intr_handler(struct adapter *adap)
static void ncsi_intr_handler(struct adapter *adap)
static void xgmac_intr_handler(struct adapter *adap, int port)
static void pl_intr_handler(struct adapter *adap)
#define PF_INTR_MASK (PFSW)
#define GLBL_INTR_MASK (CIM | MPS | PL | PCIE | MC | EDC0 | \
EDC1 | LE | TP | MA | PM_TX | PM_RX | ULP_RX | \
CPL_SWITCH | SGE | ULP_TX)
int t4_slow_intr_handler(struct adapter *adapter)
void t4_intr_enable(struct adapter *adapter)
void t4_intr_disable(struct adapter *adapter)
static int hash_mac_addr(const u8 *addr)
int t4_config_rss_range(struct adapter *adapter, int mbox, unsigned int viid,
int start, int n, const u16 *rspq, unsigned int nrspq)
int t4_config_glbl_rss(struct adapter *adapter, int mbox, unsigned int mode,
unsigned int flags)
void t4_tp_get_tcp_stats(struct adapter *adap, struct tp_tcp_stats *v4,
struct tp_tcp_stats *v6)
void t4_read_mtu_tbl(struct adapter *adap, u16 *mtus, u8 *mtu_log)
static void __devinit init_cong_ctrl(unsigned short *a, unsigned short *b)
#define CC_MIN_INCR 2U
void t4_load_mtus(struct adapter *adap, const unsigned short *mtus,
const unsigned short *alpha, const unsigned short *beta)
static unsigned int get_mps_bg_map(struct adapter *adap, int idx)
void t4_get_port_stats(struct adapter *adap, int idx, struct port_stats *p)
void t4_wol_magic_enable(struct adapter *adap, unsigned int port,
const u8 *addr)
int t4_wol_pat_enable(struct adapter *adap, unsigned int port, unsigned int map,
u64 mask0, u64 mask1, unsigned int crc, bool enable)
#define INIT_CMD(var, cmd, rd_wr) do  while (0)
int t4_mdio_rd(struct adapter *adap, unsigned int mbox, unsigned int phy_addr,
unsigned int mmd, unsigned int reg, u16 *valp)
int t4_mdio_wr(struct adapter *adap, unsigned int mbox, unsigned int phy_addr,
unsigned int mmd, unsigned int reg, u16 val)
int t4_fw_hello(struct adapter *adap, unsigned int mbox, unsigned int evt_mbox,
enum dev_master master, enum dev_state *state)
int t4_fw_bye(struct adapter *adap, unsigned int mbox)
int t4_early_init(struct adapter *adap, unsigned int mbox)
int t4_fw_reset(struct adapter *adap, unsigned int mbox, int reset)
int t4_query_params(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int nparams, const u32 *params,
u32 *val)
int t4_set_params(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int nparams, const u32 *params,
const u32 *val)
int t4_cfg_pfvf(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int txq, unsigned int txq_eth_ctrl,
unsigned int rxqi, unsigned int rxq, unsigned int tc,
unsigned int vi, unsigned int cmask, unsigned int pmask,
unsigned int nexact, unsigned int rcaps, unsigned int wxcaps)
int t4_alloc_vi(struct adapter *adap, unsigned int mbox, unsigned int port,
unsigned int pf, unsigned int vf, unsigned int nmac, u8 *mac,
unsigned int *rss_size)
int t4_set_rxmode(struct adapter *adap, unsigned int mbox, unsigned int viid,
int mtu, int promisc, int all_multi, int bcast, int vlanex,
bool sleep_ok)
int t4_alloc_mac_filt(struct adapter *adap, unsigned int mbox,
unsigned int viid, bool free, unsigned int naddr,
const u8 **addr, u16 *idx, u64 *hash, bool sleep_ok)
int t4_change_mac(struct adapter *adap, unsigned int mbox, unsigned int viid,
int idx, const u8 *addr, bool persist, bool add_smt)
int t4_set_addr_hash(struct adapter *adap, unsigned int mbox, unsigned int viid,
bool ucast, u64 vec, bool sleep_ok)
int t4_enable_vi(struct adapter *adap, unsigned int mbox, unsigned int viid,
bool rx_en, bool tx_en)
int t4_identify_port(struct adapter *adap, unsigned int mbox, unsigned int viid,
unsigned int nblinks)
int t4_iq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int iqtype, unsigned int iqid,
unsigned int fl0id, unsigned int fl1id)
int t4_eth_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid)
int t4_ctrl_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid)
int t4_ofld_eq_free(struct adapter *adap, unsigned int mbox, unsigned int pf,
unsigned int vf, unsigned int eqid)
int t4_handle_fw_rpl(struct adapter *adap, const __be64 *rpl)
static void __devinit get_pci_mode(struct adapter *adapter,
struct pci_params *p)
static void __devinit init_link_config(struct link_config *lc,
unsigned int caps)
int t4_wait_dev_ready(struct adapter *adap)
static int __devinit get_flash_params(struct adapter *adap)
int __devinit t4_prep_adapter(struct adapter *adapter)
int __devinit t4_port_init(struct adapter *adap, int mbox, int pf, int vf)
