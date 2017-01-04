#define SD7220_FW_NAME "qlogic/sd7220.fw"
MODULE_FIRMWARE(SD7220_FW_NAME);
#define KREG_IDX(regname) (QIB_7220_##regname##_OFFS / sizeof(u64))
#define kr_hwerrclear KREG_IDX(HwErrClear)
#define kr_hwerrmask KREG_IDX(HwErrMask)
#define kr_hwerrstatus KREG_IDX(HwErrStatus)
#define kr_ibcstatus KREG_IDX(IBCStatus)
#define kr_ibserdesctrl KREG_IDX(IBSerDesCtrl)
#define kr_scratch KREG_IDX(Scratch)
#define kr_xgxs_cfg KREG_IDX(XGXSCfg)
#define kr_ibsd_epb_access_ctrl KREG_IDX(ibsd_epb_access_ctrl)
#define kr_ibsd_epb_transaction_reg KREG_IDX(ibsd_epb_transaction_reg)
#define kr_pciesd_epb_transaction_reg KREG_IDX(pciesd_epb_transaction_reg)
#define kr_pciesd_epb_access_ctrl KREG_IDX(pciesd_epb_access_ctrl)
#define kr_serdes_ddsrxeq0 KREG_IDX(SerDes_DDSRXEQ0)
#define kr_serdes_maptable KREG_IDX(IBSerDesMappTable)
#define PCIE_SERDES0 0
#define PCIE_SERDES1 1
#define EPB_ADDR_SHF 8
#define EPB_LOC(chn, elt, reg) \
(((elt & 0xf) | ((chn & 7) << 4) | ((reg & 0x3f) << 9)) << \
EPB_ADDR_SHF)
#define EPB_IB_QUAD0_CS_SHF (25)
#define EPB_IB_QUAD0_CS (1U <<  EPB_IB_QUAD0_CS_SHF)
#define EPB_IB_UC_CS_SHF (26)
#define EPB_PCIE_UC_CS_SHF (27)
#define EPB_GLOBAL_WR (1U << (EPB_ADDR_SHF + 8))
static int qib_sd7220_reg_mod(struct qib_devdata *dd, int sdnum, u32 loc,
u32 data, u32 mask);
static int ibsd_mod_allchnls(struct qib_devdata *dd, int loc, int val,
int mask);
static int qib_sd_trimdone_poll(struct qib_devdata *dd);
static void qib_sd_trimdone_monitor(struct qib_devdata *dd, const char *where);
static int qib_sd_setvals(struct qib_devdata *dd);
static int qib_sd_early(struct qib_devdata *dd);
static int qib_sd_dactrim(struct qib_devdata *dd);
static int qib_internal_presets(struct qib_devdata *dd);
static int qib_sd_trimself(struct qib_devdata *dd, int val);
static int epb_access(struct qib_devdata *dd, int sdnum, int claim);
static int qib_sd7220_ib_load(struct qib_devdata *dd,
const struct firmware *fw);
static int qib_sd7220_ib_vfy(struct qib_devdata *dd,
const struct firmware *fw);
static int qib_ibsd_ucode_loaded(struct qib_pportdata *ppd,
const struct firmware *fw)
#define QLOGIC_IB_HWE_IB_UC_MEMORYPARITYERR      0x0000004000000000ULL
#define IB_MPREG5 (EPB_LOC(6, 0, 0xE) | (1L << EPB_IB_UC_CS_SHF))
#define IB_MPREG6 (EPB_LOC(6, 0, 0xF) | (1U << EPB_IB_UC_CS_SHF))
#define UC_PAR_CLR_D 8
#define UC_PAR_CLR_M 0xC
#define IB_CTRL2(chn) (EPB_LOC(chn, 7, 3) | EPB_IB_QUAD0_CS)
#define START_EQ1(chan) EPB_LOC(chan, 7, 0x27)
void qib_sd7220_clr_ibpar(struct qib_devdata *dd)
#define IBSD_RESYNC_TRIES 3
#define IB_PGUDP(chn) (EPB_LOC((chn), 2, 1) | EPB_IB_QUAD0_CS)
#define IB_CMUDONE(chn) (EPB_LOC((chn), 7, 0xF) | EPB_IB_QUAD0_CS)
static int qib_resync_ibepb(struct qib_devdata *dd)
static int qib_ibsd_reset(struct qib_devdata *dd, int assert_rst)
static void qib_sd_trimdone_monitor(struct qib_devdata *dd,
const char *where)
int qib_sd7220_init(struct qib_devdata *dd)
#define EPB_ACC_REQ 1
#define EPB_ACC_GNT 0x100
#define EPB_DATA_MASK 0xFF
#define EPB_RD (1ULL << 24)
#define EPB_TRANS_RDY (1ULL << 31)
#define EPB_TRANS_ERR (1ULL << 30)
#define EPB_TRANS_TRIES 5
static int epb_access(struct qib_devdata *dd, int sdnum, int claim)
static int epb_trans(struct qib_devdata *dd, u16 reg, u64 i_val, u64 *o_vp)
static int qib_sd7220_reg_mod(struct qib_devdata *dd, int sdnum, u32 loc,
u32 wd, u32 mask)
#define EPB_ROM_R (2)
#define EPB_ROM_W (1)
#define EPB_UC_CTL EPB_LOC(6, 0, 0)
#define EPB_MADDRL EPB_LOC(6, 0, 2)
#define EPB_MADDRH EPB_LOC(6, 0, 3)
#define EPB_ROMDATA EPB_LOC(6, 0, 4)
#define EPB_RAMDATA EPB_LOC(6, 0, 5)
static int qib_sd7220_ram_xfer(struct qib_devdata *dd, int sdnum, u32 loc,
u8 *buf, int cnt, int rd_notwr)
#define PROG_CHUNK 64
static int qib_sd7220_prog_ld(struct qib_devdata *dd, int sdnum,
const u8 *img, int len, int offset)
#define VFY_CHUNK 64
#define SD_PRAM_ERROR_LIMIT 42
static int qib_sd7220_prog_vfy(struct qib_devdata *dd, int sdnum,
const u8 *img, int len, int offset)
static int
qib_sd7220_ib_load(struct qib_devdata *dd, const struct firmware *fw)
static int
qib_sd7220_ib_vfy(struct qib_devdata *dd, const struct firmware *fw)
#define IB_SERDES_TRIM_DONE (1ULL << 11)
#define TRIM_TMO (30)
static int qib_sd_trimdone_poll(struct qib_devdata *dd)
#define TX_FAST_ELT (9)
#define NUM_DDS_REGS 6
#define DDS_REG_MAP 0x76A910
#define DDS_VAL(amp_d, main_d, ipst_d, ipre_d, amp_s, main_s, ipst_s, ipre_s) \
static struct dds_init  dds_init_vals[] = ;
#define RXEQ_INIT_RDESC(elt, addr) (((elt) & 0xF) | ((addr) << 4))
#define RXEQ_VAL(elt, adr, val0, val1, val2, val3) \
#define RXEQ_VAL_ALL(elt, adr, val)  \
#define RXEQ_SDR_DFELTH 0
#define RXEQ_SDR_TLTH 0
#define RXEQ_SDR_G1CNT_Z1CNT 0x11
#define RXEQ_SDR_ZCNT 23
static struct rxeq_init  rxeq_init_vals[] = ;
#define DDS_ROWS (16)
#define RXEQ_ROWS ARRAY_SIZE(rxeq_init_vals)
static int qib_sd_setvals(struct qib_devdata *dd)
#define CMUCTRL5 EPB_LOC(7, 0, 0x15)
#define RXHSCTRL0(chan) EPB_LOC(chan, 6, 0)
#define VCDL_DAC2(chan) EPB_LOC(chan, 6, 5)
#define VCDL_CTRL0(chan) EPB_LOC(chan, 6, 6)
#define VCDL_CTRL2(chan) EPB_LOC(chan, 6, 8)
#define START_EQ2(chan) EPB_LOC(chan, 7, 0x28)
static int ibsd_mod_allchnls(struct qib_devdata *dd, int loc, int val,
int mask)
static int set_dds_vals(struct qib_devdata *dd, struct dds_init *ddi)
static int set_rxeq_vals(struct qib_devdata *dd, int vsel)
static unsigned qib_rxeq_set = 2;
module_param_named(rxeq_default_set, qib_rxeq_set, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(rxeq_default_set,
"Which set [0..3] of Rx Equalization values is default");
static int qib_internal_presets(struct qib_devdata *dd)
int qib_sd7220_presets(struct qib_devdata *dd)
static int qib_sd_trimself(struct qib_devdata *dd, int val)
static int qib_sd_early(struct qib_devdata *dd)
#define BACTRL(chnl) EPB_LOC(chnl, 6, 0x0E)
#define LDOUTCTRL1(chnl) EPB_LOC(chnl, 7, 6)
#define RXHSSTATUS(chnl) EPB_LOC(chnl, 6, 0xF)
static int qib_sd_dactrim(struct qib_devdata *dd)
#define RELOCK_FIRST_MS 3
#define RXLSPPM(chan) EPB_LOC(chan, 0, 2)
void toggle_7220_rclkrls(struct qib_devdata *dd)
void shutdown_7220_relock_poll(struct qib_devdata *dd)
static unsigned qib_relock_by_timer = 1;
module_param_named(relock_by_timer, qib_relock_by_timer, uint,
S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(relock_by_timer, "Allow relock attempt if link not up");
static void qib_run_relock(unsigned long opaque)
void set_7220_relock_poll(struct qib_devdata *dd, int ibup)
