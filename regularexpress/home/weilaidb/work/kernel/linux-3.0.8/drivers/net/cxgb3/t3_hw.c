static void t3_port_intr_clear(struct adapter *adapter, int idx);
int t3_wait_op_done_val(struct adapter *adapter, int reg, u32 mask,
int polarity, int attempts, int delay, u32 *valp)
void t3_write_regs(struct adapter *adapter, const struct addr_val_pair *p,
int n, unsigned int offset)
void t3_set_reg_field(struct adapter *adapter, unsigned int addr, u32 mask,
u32 val)
static void t3_read_indirect(struct adapter *adap, unsigned int addr_reg,
unsigned int data_reg, u32 *vals,
unsigned int nregs, unsigned int start_idx)
int t3_mc7_bd_read(struct mc7 *mc7, unsigned int start, unsigned int n,
u64 *buf)
static void mi1_init(struct adapter *adap, const struct adapter_info *ai)
#define MDIO_ATTEMPTS 20
static int t3_mi1_read(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr)
static int t3_mi1_write(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr, u16 val)
static const struct mdio_ops mi1_mdio_ops = ;
static int mi1_wr_addr(struct adapter *adapter, int phy_addr, int mmd_addr,
int reg_addr)
static int mi1_ext_read(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr)
static int mi1_ext_write(struct net_device *dev, int phy_addr, int mmd_addr,
u16 reg_addr, u16 val)
static const struct mdio_ops mi1_mdio_ext_ops = ;
int t3_mdio_change_bits(struct cphy *phy, int mmd, int reg, unsigned int clear,
unsigned int set)
int t3_phy_reset(struct cphy *phy, int mmd, int wait)
int t3_phy_advertise(struct cphy *phy, unsigned int advert)
int t3_phy_advertise_fiber(struct cphy *phy, unsigned int advert)
int t3_set_phy_speed_duplex(struct cphy *phy, int speed, int duplex)
int t3_phy_lasi_intr_enable(struct cphy *phy)
int t3_phy_lasi_intr_disable(struct cphy *phy)
int t3_phy_lasi_intr_clear(struct cphy *phy)
int t3_phy_lasi_intr_handler(struct cphy *phy)
static const struct adapter_info t3_adap_info[] = ;
const struct adapter_info *t3_get_adapter_info(unsigned int id)
struct port_type_info ;
static const struct port_type_info port_types[] = ;
#define VPD_ENTRY(name, len) \
u8 name##_kword[2]; u8 name##_len; u8 name##_data[len]
struct t3_vpd ;
#define EEPROM_MAX_POLL   40
#define EEPROM_STAT_ADDR  0x4000
#define VPD_BASE          0xc00
int t3_seeprom_read(struct adapter *adapter, u32 addr, __le32 *data)
int t3_seeprom_write(struct adapter *adapter, u32 addr, __le32 data)
int t3_seeprom_wp(struct adapter *adapter, int enable)
static int get_vpd_params(struct adapter *adapter, struct vpd_params *p)
enum ;
static int sf1_read(struct adapter *adapter, unsigned int byte_cnt, int cont,
u32 *valp)
static int sf1_write(struct adapter *adapter, unsigned int byte_cnt, int cont,
u32 val)
static int flash_wait_op(struct adapter *adapter, int attempts, int delay)
static int t3_read_flash(struct adapter *adapter, unsigned int addr,
unsigned int nwords, u32 *data, int byte_oriented)
static int t3_write_flash(struct adapter *adapter, unsigned int addr,
unsigned int n, const u8 *data)
int t3_get_tp_version(struct adapter *adapter, u32 *vers)
int t3_check_tpsram_version(struct adapter *adapter)
int t3_check_tpsram(struct adapter *adapter, const u8 *tp_sram,
unsigned int size)
enum fw_version_type ;
int t3_get_fw_version(struct adapter *adapter, u32 *vers)
int t3_check_fw_version(struct adapter *adapter)
static int t3_flash_erase_sectors(struct adapter *adapter, int start, int end)
int t3_load_fw(struct adapter *adapter, const u8 *fw_data, unsigned int size)
#define CIM_CTL_BASE 0x2000
int t3_cim_ctl_blk_read(struct adapter *adap, unsigned int addr,
unsigned int n, unsigned int *valp)
static void t3_gate_rx_traffic(struct cmac *mac, u32 *rx_cfg,
u32 *rx_hash_high, u32 *rx_hash_low)
static void t3_open_rx_traffic(struct cmac *mac, u32 rx_cfg,
u32 rx_hash_high, u32 rx_hash_low)
void t3_link_changed(struct adapter *adapter, int port_id)
void t3_link_fault(struct adapter *adapter, int port_id)
int t3_link_start(struct cphy *phy, struct cmac *mac, struct link_config *lc)
void t3_set_vlan_accel(struct adapter *adapter, unsigned int ports, int on)
struct intr_info ;
static int t3_handle_intr_status(struct adapter *adapter, unsigned int reg,
unsigned int mask,
const struct intr_info *acts,
unsigned long *stats)
#define SGE_INTR_MASK (F_RSPQDISABLED | \
F_UC_REQ_FRAMINGERROR | F_R_REQ_FRAMINGERROR | \
F_CPPARITYERROR | F_OCPARITYERROR | F_RCPARITYERROR | \
F_IRPARITYERROR | V_ITPARITYERROR(M_ITPARITYERROR) | \
V_FLPARITYERROR(M_FLPARITYERROR) | F_LODRBPARITYERROR | \
F_HIDRBPARITYERROR | F_LORCQPARITYERROR | \
F_HIRCQPARITYERROR | F_LOPRIORITYDBFULL | \
F_HIPRIORITYDBFULL | F_LOPRIORITYDBEMPTY | \
F_HIPRIORITYDBEMPTY | F_HIPIODRBDROPERR | \
F_LOPIODRBDROPERR)
#define MC5_INTR_MASK (F_PARITYERR | F_ACTRGNFULL | F_UNKNOWNCMD | \
F_REQQPARERR | F_DISPQPARERR | F_DELACTEMPTY | \
F_NFASRCHFAIL)
#define MC7_INTR_MASK (F_AE | F_UE | F_CE | V_PE(M_PE))
#define XGM_INTR_MASK (V_TXFIFO_PRTY_ERR(M_TXFIFO_PRTY_ERR) | \
V_RXFIFO_PRTY_ERR(M_RXFIFO_PRTY_ERR) | \
F_TXFIFO_UNDERRUN)
#define PCIX_INTR_MASK (F_MSTDETPARERR | F_SIGTARABT | F_RCVTARABT | \
F_RCVMSTABT | F_SIGSYSERR | F_DETPARERR | \
F_SPLCMPDIS | F_UNXSPLCMP | F_RCVSPLCMPERR | \
F_DETCORECCERR | F_DETUNCECCERR | F_PIOPARERR | \
V_WFPARERR(M_WFPARERR) | V_RFPARERR(M_RFPARERR) | \
V_CFPARERR(M_CFPARERR))
#define PCIE_INTR_MASK (F_UNXSPLCPLERRR | F_UNXSPLCPLERRC | F_PCIE_PIOPARERR |\
F_PCIE_WFPARERR | F_PCIE_RFPARERR | F_PCIE_CFPARERR | \ \
F_RETRYBUFPARERR | F_RETRYLUTPARERR | F_RXPARERR | \
F_TXPARERR | V_BISTERR(M_BISTERR))
#define ULPRX_INTR_MASK (F_PARERRDATA | F_PARERRPCMD | F_ARBPF1PERR | \
F_ARBPF0PERR | F_ARBFPERR | F_PCMDMUXPERR | \
F_DATASELFRAMEERR1 | F_DATASELFRAMEERR0)
#define ULPTX_INTR_MASK 0xfc
#define CPLSW_INTR_MASK (F_CIM_OP_MAP_PERR | F_TP_FRAMING_ERROR | \
F_SGE_FRAMING_ERROR | F_CIM_FRAMING_ERROR | \
F_ZERO_SWITCH_ERROR)
#define CIM_INTR_MASK (F_BLKWRPLINT | F_BLKRDPLINT | F_BLKWRCTLINT | \
F_BLKRDCTLINT | F_BLKWRFLASHINT | F_BLKRDFLASHINT | \
F_SGLWRFLASHINT | F_WRBLKFLASHINT | F_BLKWRBOOTINT | \
F_FLASHRANGEINT | F_SDRAMRANGEINT | F_RSVDSPACEINT | \
F_DRAMPARERR | F_ICACHEPARERR | F_DCACHEPARERR | \
F_OBQSGEPARERR | F_OBQULPHIPARERR | F_OBQULPLOPARERR | \
F_IBQSGELOPARERR | F_IBQSGEHIPARERR | F_IBQULPPARERR | \
F_IBQTPPARERR | F_ITAGPARERR | F_DTAGPARERR)
#define PMTX_INTR_MASK (F_ZERO_C_CMD_ERROR | ICSPI_FRM_ERR | OESPI_FRM_ERR | \
V_ICSPI_PAR_ERROR(M_ICSPI_PAR_ERROR) | \
V_OESPI_PAR_ERROR(M_OESPI_PAR_ERROR))
#define PMRX_INTR_MASK (F_ZERO_E_CMD_ERROR | IESPI_FRM_ERR | OCSPI_FRM_ERR | \
V_IESPI_PAR_ERROR(M_IESPI_PAR_ERROR) | \
V_OCSPI_PAR_ERROR(M_OCSPI_PAR_ERROR))
#define MPS_INTR_MASK (V_TX0TPPARERRENB(M_TX0TPPARERRENB) | \
V_TX1TPPARERRENB(M_TX1TPPARERRENB) | \
V_RXTPPARERRENB(M_RXTPPARERRENB) | \
V_MCAPARERRENB(M_MCAPARERRENB))
#define XGM_EXTRA_INTR_MASK (F_LINKFAULTCHANGE)
#define PL_INTR_MASK (F_T3DBG | F_XGMAC0_0 | F_XGMAC0_1 | F_MC5A | F_PM1_TX | \
F_PM1_RX | F_ULP2_TX | F_ULP2_RX | F_TP1 | F_CIM | \
F_MC7_CM | F_MC7_PMTX | F_MC7_PMRX | F_SGE3 | F_PCIM0 | \
F_MPS0 | F_CPL_SWITCH)
static void pci_intr_handler(struct adapter *adapter)
static void pcie_intr_handler(struct adapter *adapter)
static void tp_intr_handler(struct adapter *adapter)
static void cim_intr_handler(struct adapter *adapter)
static void ulprx_intr_handler(struct adapter *adapter)
static void ulptx_intr_handler(struct adapter *adapter)
#define ICSPI_FRM_ERR (F_ICSPI0_FIFO2X_RX_FRAMING_ERROR | \
F_ICSPI1_FIFO2X_RX_FRAMING_ERROR | F_ICSPI0_RX_FRAMING_ERROR | \
F_ICSPI1_RX_FRAMING_ERROR | F_ICSPI0_TX_FRAMING_ERROR | \
F_ICSPI1_TX_FRAMING_ERROR)
#define OESPI_FRM_ERR (F_OESPI0_RX_FRAMING_ERROR | \
F_OESPI1_RX_FRAMING_ERROR | F_OESPI0_TX_FRAMING_ERROR | \
F_OESPI1_TX_FRAMING_ERROR | F_OESPI0_OFIFO2X_TX_FRAMING_ERROR | \
F_OESPI1_OFIFO2X_TX_FRAMING_ERROR)
static void pmtx_intr_handler(struct adapter *adapter)
#define IESPI_FRM_ERR (F_IESPI0_FIFO2X_RX_FRAMING_ERROR | \
F_IESPI1_FIFO2X_RX_FRAMING_ERROR | F_IESPI0_RX_FRAMING_ERROR | \
F_IESPI1_RX_FRAMING_ERROR | F_IESPI0_TX_FRAMING_ERROR | \
F_IESPI1_TX_FRAMING_ERROR)
#define OCSPI_FRM_ERR (F_OCSPI0_RX_FRAMING_ERROR | \
F_OCSPI1_RX_FRAMING_ERROR | F_OCSPI0_TX_FRAMING_ERROR | \
F_OCSPI1_TX_FRAMING_ERROR | F_OCSPI0_OFIFO2X_TX_FRAMING_ERROR | \
F_OCSPI1_OFIFO2X_TX_FRAMING_ERROR)
static void pmrx_intr_handler(struct adapter *adapter)
static void cplsw_intr_handler(struct adapter *adapter)
static void mps_intr_handler(struct adapter *adapter)
#define MC7_INTR_FATAL (F_UE | V_PE(M_PE) | F_AE)
static void mc7_intr_handler(struct mc7 *mc7)
#define XGM_INTR_FATAL (V_TXFIFO_PRTY_ERR(M_TXFIFO_PRTY_ERR) | \
V_RXFIFO_PRTY_ERR(M_RXFIFO_PRTY_ERR))
static int mac_intr_handler(struct adapter *adap, unsigned int idx)
int t3_phy_intr_handler(struct adapter *adapter)
int t3_slow_intr_handler(struct adapter *adapter)
static unsigned int calc_gpio_intr(struct adapter *adap)
void t3_intr_enable(struct adapter *adapter)
void t3_intr_disable(struct adapter *adapter)
void t3_intr_clear(struct adapter *adapter)
void t3_xgm_intr_enable(struct adapter *adapter, int idx)
void t3_xgm_intr_disable(struct adapter *adapter, int idx)
void t3_port_intr_enable(struct adapter *adapter, int idx)
void t3_port_intr_disable(struct adapter *adapter, int idx)
static void t3_port_intr_clear(struct adapter *adapter, int idx)
#define SG_CONTEXT_CMD_ATTEMPTS 100
static int t3_sge_write_context(struct adapter *adapter, unsigned int id,
unsigned int type)
static int clear_sge_ctxt(struct adapter *adap, unsigned int id,
unsigned int type)
int t3_sge_init_ecntxt(struct adapter *adapter, unsigned int id, int gts_enable,
enum sge_context_type type, int respq, u64 base_addr,
unsigned int size, unsigned int token, int gen,
unsigned int cidx)
int t3_sge_init_flcntxt(struct adapter *adapter, unsigned int id,
int gts_enable, u64 base_addr, unsigned int size,
unsigned int bsize, unsigned int cong_thres, int gen,
unsigned int cidx)
int t3_sge_init_rspcntxt(struct adapter *adapter, unsigned int id,
int irq_vec_idx, u64 base_addr, unsigned int size,
unsigned int fl_thres, int gen, unsigned int cidx)
int t3_sge_init_cqcntxt(struct adapter *adapter, unsigned int id, u64 base_addr,
unsigned int size, int rspq, int ovfl_mode,
unsigned int credits, unsigned int credit_thres)
int t3_sge_enable_ecntxt(struct adapter *adapter, unsigned int id, int enable)
int t3_sge_disable_fl(struct adapter *adapter, unsigned int id)
int t3_sge_disable_rspcntxt(struct adapter *adapter, unsigned int id)
int t3_sge_disable_cqcntxt(struct adapter *adapter, unsigned int id)
int t3_sge_cqcntxt_op(struct adapter *adapter, unsigned int id, unsigned int op,
unsigned int credits)
void t3_config_rss(struct adapter *adapter, unsigned int rss_config,
const u8 * cpus, const u16 *rspq)
void t3_tp_set_offload_mode(struct adapter *adap, int enable)
static inline unsigned int pm_num_pages(unsigned int mem_size,
unsigned int pg_size)
#define mem_region(adap, start, size, reg) \
t3_write_reg((adap), A_ ## reg, (start)); \
start += size
static void partition_mem(struct adapter *adap, const struct tp_params *p)
static inline void tp_wr_indirect(struct adapter *adap, unsigned int addr,
u32 val)
static void tp_config(struct adapter *adap, const struct tp_params *p)
#define TP_TMR_RES 50
#define TP_DACK_TIMER 50
#define TP_RTO_MIN    250
static void tp_set_timers(struct adapter *adap, unsigned int core_clk)
static int t3_tp_set_coalescing_size(struct adapter *adap,
unsigned int size, int psh)
static void t3_tp_set_max_rxsize(struct adapter *adap, unsigned int size)
static void init_mtus(unsigned short mtus[])
static void init_cong_ctrl(unsigned short *a, unsigned short *b)
#define CC_MIN_INCR 2U
void t3_load_mtus(struct adapter *adap, unsigned short mtus[NMTUS],
unsigned short alpha[NCCTRL_WIN],
unsigned short beta[NCCTRL_WIN], unsigned short mtu_cap)
void t3_tp_get_mib_stats(struct adapter *adap, struct tp_mib_stats *tps)
#define ulp_region(adap, name, start, len) \
t3_write_reg((adap), A_ULPRX_ ## name ## _LLIMIT, (start)); \
t3_write_reg((adap), A_ULPRX_ ## name ## _ULIMIT, \
(start) + (len) - 1); \
start += len
#define ulptx_region(adap, name, start, len) \
t3_write_reg((adap), A_ULPTX_ ## name ## _LLIMIT, (start)); \
t3_write_reg((adap), A_ULPTX_ ## name ## _ULIMIT, \
(start) + (len) - 1)
static void ulp_config(struct adapter *adap, const struct tp_params *p)
int t3_set_proto_sram(struct adapter *adap, const u8 *data)
void t3_config_trace_filter(struct adapter *adapter,
const struct trace_params *tp, int filter_index,
int invert, int enable)
int t3_config_sched(struct adapter *adap, unsigned int kbps, int sched)
static int tp_init(struct adapter *adap, const struct tp_params *p)
static void chan_init_hw(struct adapter *adap, unsigned int chan_map)
static int calibrate_xgm(struct adapter *adapter)
static void calibrate_xgm_t3b(struct adapter *adapter)
struct mc7_timing_params ;
static int wrreg_wait(struct adapter *adapter, unsigned int addr, u32 val)
static int mc7_init(struct mc7 *mc7, unsigned int mc7_clock, int mem_type)
static void config_pcie(struct adapter *adap)
int t3_init_hw(struct adapter *adapter, u32 fw_params)
static void get_pci_mode(struct adapter *adapter, struct pci_params *p)
static void init_link_config(struct link_config *lc, unsigned int caps)
static unsigned int mc7_calc_size(u32 cfg)
static void mc7_prep(struct adapter *adapter, struct mc7 *mc7,
unsigned int base_addr, const char *name)
static void mac_prep(struct cmac *mac, struct adapter *adapter, int index)
static void early_hw_init(struct adapter *adapter,
const struct adapter_info *ai)
int t3_reset_adapter(struct adapter *adapter)
static int init_parity(struct adapter *adap)
int t3_prep_adapter(struct adapter *adapter, const struct adapter_info *ai,
int reset)
void t3_led_ready(struct adapter *adapter)
int t3_replay_prep_adapter(struct adapter *adapter)
