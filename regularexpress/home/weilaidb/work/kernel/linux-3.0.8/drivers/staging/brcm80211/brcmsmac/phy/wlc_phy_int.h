#define _wlc_phy_int_h_
#define PHYHAL_ERROR	0x0001
#define PHYHAL_TRACE	0x0002
#define PHYHAL_INFORM	0x0004
extern u32 phyhal_msg_level;
#define PHY_INFORM_ON()		(phyhal_msg_level & PHYHAL_INFORM)
#define PHY_THERMAL_ON()	(phyhal_msg_level & PHYHAL_THERMAL)
#define PHY_CAL_ON()		(phyhal_msg_level & PHYHAL_CAL)
#define BOARDTYPE(_type) BOARD_TYPE
#define BOARDTYPE(_type) _type
#define LCNXN_BASEREV		16
struct wlc_hw_info;
typedef struct phy_info phy_info_t;
typedef void (*initfn_t) (phy_info_t *);
typedef void (*chansetfn_t) (phy_info_t *, chanspec_t);
typedef int (*longtrnfn_t) (phy_info_t *, int);
typedef void (*txiqccgetfn_t) (phy_info_t *, u16 *, u16 *);
typedef void (*txiqccsetfn_t) (phy_info_t *, u16, u16);
typedef u16(*txloccgetfn_t) (phy_info_t *);
typedef void (*radioloftgetfn_t) (phy_info_t *, u8 *, u8 *, u8 *,
u8 *);
typedef s32(*rxsigpwrfn_t) (phy_info_t *, s32);
typedef void (*detachfn_t) (phy_info_t *);
#undef ISNPHY
#undef ISLCNPHY
#define ISNPHY(pi)	PHYTYPE_IS((pi)->pubpi.phy_type, PHY_TYPE_N)
#define ISLCNPHY(pi)  	PHYTYPE_IS((pi)->pubpi.phy_type, PHY_TYPE_LCN)
#define ISPHY_11N_CAP(pi)	(ISNPHY(pi) || ISLCNPHY(pi))
#define IS20MHZ(pi)	((pi)->bw == WL_CHANSPEC_BW_20)
#define IS40MHZ(pi)	((pi)->bw == WL_CHANSPEC_BW_40)
#define PHY_GET_RFATTN(rfgain)	((rfgain) & 0x0f)
#define PHY_GET_PADMIX(rfgain)	(((rfgain) & 0x10) >> 4)
#define PHY_GET_RFGAINID(rfattn, padmix, width)	((rfattn) + ((padmix)*(width)))
#define PHY_SAT(x, n)		((x) > ((1<<((n)-1))-1) ? ((1<<((n)-1))-1) : \
((x) < -(1<<((n)-1)) ? -(1<<((n)-1)) : (x)))
#define PHY_SHIFT_ROUND(x, n)	((x) >= 0 ? ((x)+(1<<((n)-1)))>>(n) : (x)>>(n))
#define PHY_HW_ROUND(x, s)		((x >> s) + ((x >> (s-1)) & (s != 0)))
#define CH_5G_GROUP	3
#define A_LOW_CHANS	0
#define A_MID_CHANS	1
#define A_HIGH_CHANS	2
#define CH_2G_GROUP	1
#define G_ALL_CHANS	0
#define FIRST_REF5_CHANNUM	149
#define LAST_REF5_CHANNUM	165
#define	FIRST_5G_CHAN		14
#define	LAST_5G_CHAN		50
#define	FIRST_MID_5G_CHAN	14
#define	LAST_MID_5G_CHAN	35
#define	FIRST_HIGH_5G_CHAN	36
#define	LAST_HIGH_5G_CHAN	41
#define	FIRST_LOW_5G_CHAN	42
#define	LAST_LOW_5G_CHAN	50
#define BASE_LOW_5G_CHAN	4900
#define BASE_MID_5G_CHAN	5100
#define BASE_HIGH_5G_CHAN	5500
#define CHAN5G_FREQ(chan)  (5000 + chan*5)
#define CHAN2G_FREQ(chan)  (2407 + chan*5)
#define TXP_FIRST_CCK		0
#define TXP_LAST_CCK		3
#define TXP_FIRST_OFDM		4
#define TXP_LAST_OFDM		11
#define TXP_FIRST_OFDM_20_CDD	12
#define TXP_LAST_OFDM_20_CDD	19
#define TXP_FIRST_MCS_20_SISO	20
#define TXP_LAST_MCS_20_SISO	27
#define TXP_FIRST_MCS_20_CDD	28
#define TXP_LAST_MCS_20_CDD	35
#define TXP_FIRST_MCS_20_STBC	36
#define TXP_LAST_MCS_20_STBC	43
#define TXP_FIRST_MCS_20_SDM	44
#define TXP_LAST_MCS_20_SDM	51
#define TXP_FIRST_OFDM_40_SISO	52
#define TXP_LAST_OFDM_40_SISO	59
#define TXP_FIRST_OFDM_40_CDD	60
#define TXP_LAST_OFDM_40_CDD	67
#define TXP_FIRST_MCS_40_SISO	68
#define TXP_LAST_MCS_40_SISO	75
#define TXP_FIRST_MCS_40_CDD	76
#define TXP_LAST_MCS_40_CDD	83
#define TXP_FIRST_MCS_40_STBC	84
#define TXP_LAST_MCS_40_STBC	91
#define TXP_FIRST_MCS_40_SDM	92
#define TXP_LAST_MCS_40_SDM	99
#define TXP_MCS_32	        100
#define TXP_NUM_RATES		101
#define ADJ_PWR_TBL_LEN		84
#define TXP_FIRST_SISO_MCS_20	20
#define TXP_LAST_SISO_MCS_20	27
#define PHY_CORE_NUM_1	1
#define PHY_CORE_NUM_2	2
#define PHY_CORE_NUM_3	3
#define PHY_CORE_NUM_4	4
#define PHY_CORE_MAX	PHY_CORE_NUM_4
#define PHY_CORE_0	0
#define PHY_CORE_1	1
#define PHY_CORE_2	2
#define PHY_CORE_3	3
#define MA_WINDOW_SZ		8
#define PHY_NOISE_SAMPLE_MON		1
#define PHY_NOISE_SAMPLE_EXTERNAL	2
#define PHY_NOISE_WINDOW_SZ	16
#define PHY_NOISE_GLITCH_INIT_MA 10
#define PHY_NOISE_GLITCH_INIT_MA_BADPlCP 10
#define PHY_NOISE_STATE_MON		0x1
#define PHY_NOISE_STATE_EXTERNAL	0x2
#define PHY_NOISE_SAMPLE_LOG_NUM_NPHY	10
#define PHY_NOISE_SAMPLE_LOG_NUM_UCODE	9
#define PHY_NOISE_OFFSETFACT_4322  (-103)
#define PHY_NOISE_MA_WINDOW_SZ	2
#define	PHY_RSSI_TABLE_SIZE	64
#define RSSI_ANT_MERGE_MAX	0
#define RSSI_ANT_MERGE_MIN	1
#define RSSI_ANT_MERGE_AVG	2
#define	PHY_TSSI_TABLE_SIZE	64
#define	APHY_TSSI_TABLE_SIZE	256
#define	TX_GAIN_TABLE_LENGTH	64
#define	DEFAULT_11A_TXP_IDX	24
#define NUM_TSSI_FRAMES        4
#define	NULL_TSSI		0x7f
#define	NULL_TSSI_W		0x7f7f
#define PHY_PAPD_EPS_TBL_SIZE_LCNPHY 64
#define LCNPHY_PERICAL_TEMPBASED_TXPWRCTRL 9
#define PHY_TXPWR_MIN		10
#define PHY_TXPWR_MIN_NPHY	8
#define RADIOPWR_OVERRIDE_DEF	(-1)
#define PWRTBL_NUM_COEFF	3
#define SPURAVOID_DISABLE	0
#define SPURAVOID_AUTO		1
#define SPURAVOID_FORCEON	2
#define SPURAVOID_FORCEON2	3
#define PHY_SW_TIMER_FAST		15
#define PHY_SW_TIMER_SLOW		60
#define PHY_SW_TIMER_GLACIAL	120
#define PHY_PERICAL_AUTO	0
#define PHY_PERICAL_FULL	1
#define PHY_PERICAL_PARTIAL	2
#define PHY_PERICAL_NODELAY	0
#define PHY_PERICAL_INIT_DELAY	5
#define PHY_PERICAL_ASSOC_DELAY	5
#define PHY_PERICAL_WDOG_DELAY	5
#define MPHASE_TXCAL_NUMCMDS	2
#define PHY_PERICAL_MPHASE_PENDING(pi)	(pi->mphase_cal_phase_id > MPHASE_CAL_STATE_IDLE)
enum ;
typedef enum  phy_cal_mode_t;
#define RDR_NTIERS  1
#define RDR_TIER_SIZE 64
#define RDR_LIST_SIZE (512/3)
#define RDR_EPOCH_SIZE 40
#define RDR_NANTENNAS 2
#define RDR_NTIER_SIZE  RDR_LIST_SIZE
#define RDR_LP_BUFFER_SIZE 64
#define LP_LEN_HIS_SIZE 10
#define STATIC_NUM_RF 32
#define STATIC_NUM_BB 9
#define BB_MULT_MASK		0x0000ffff
#define BB_MULT_VALID_MASK	0x80000000
#define CORDIC_AG	39797
#define	CORDIC_NI	18
#define	FIXED(X)	((s32)((X) << 16))
#define	FLOAT(X)	(((X) >= 0) ? ((((X) >> 15) + 1) >> 1) : -((((-(X)) >> 15) + 1) >> 1))
#define PHY_CHAIN_TX_DISABLE_TEMP	115
#define PHY_HYSTERESIS_DELTATEMP	5
#define PHY_BITSCNT(x)	bcm_bitcount((u8 *)&(x), sizeof(u8))
#define MOD_PHY_REG(pi, phy_type, reg_name, field, value) \
mod_phy_reg(pi, phy_type##_##reg_name, phy_type##_##reg_name##_##field##_MASK, \
(value) << phy_type##_##reg_name##_##field##_##SHIFT);
#define READ_PHY_REG(pi, phy_type, reg_name, field) \
((read_phy_reg(pi, phy_type##_##reg_name) & phy_type##_##reg_name##_##field##_##MASK)\
>> phy_type##_##reg_name##_##field##_##SHIFT)
#define	VALID_PHYTYPE(phytype)	(((uint)phytype == PHY_TYPE_N) || \
((uint)phytype == PHY_TYPE_LCN))
#define VALID_N_RADIO(radioid)	((radioid == BCM2055_ID) || (radioid == BCM2056_ID) || \
(radioid == BCM2057_ID))
#define VALID_LCN_RADIO(radioid)	(radioid == BCM2064_ID)
#define	VALID_RADIO(pi, radioid)	(\
(ISNPHY(pi) ? VALID_N_RADIO(radioid) : false) || \
(ISLCNPHY(pi) ? VALID_LCN_RADIO(radioid) : false))
#define SCAN_INPROG_PHY(pi)	(mboolisset(pi->measure_hold, PHY_HOLD_FOR_SCAN))
#define RM_INPROG_PHY(pi)	(mboolisset(pi->measure_hold, PHY_HOLD_FOR_RM))
#define PLT_INPROG_PHY(pi)	(mboolisset(pi->measure_hold, PHY_HOLD_FOR_PLT))
#define ASSOC_INPROG_PHY(pi)	(mboolisset(pi->measure_hold, PHY_HOLD_FOR_ASSOC))
#define SCAN_RM_IN_PROGRESS(pi) (mboolisset(pi->measure_hold, PHY_HOLD_FOR_SCAN | PHY_HOLD_FOR_RM))
#define PHY_MUTED(pi)		(mboolisset(pi->measure_hold, PHY_HOLD_FOR_MUTE))
#define PUB_NOT_ASSOC(pi)	(mboolisset(pi->measure_hold, PHY_HOLD_FOR_NOT_ASSOC))
#if defined(EXT_CBALL)
#define NORADIO_ENAB(pub) ((pub).radioid == NORADIO_ID)
#define NORADIO_ENAB(pub) 0
#define PHY_LTRN_LIST_LEN	64
extern u16 ltrn_list[PHY_LTRN_LIST_LEN];
typedef struct _phy_table_info  phy_table_info_t;
typedef struct phytbl_info  phytbl_info_t;
typedef struct  interference_info_t;
typedef struct  aci_save_gphy_t;
typedef struct _lo_complex_t  lo_complex_abgphy_info_t;
typedef struct _nphy_iq_comp  nphy_iq_comp_t;
typedef struct _nphy_txpwrindex  phy_txpwrindex_t;
typedef struct  txiqcal_cache_t;
typedef struct _nphy_pwrctrl  phy_pwrctrl_t;
typedef struct _nphy_txgains  nphy_txgains_t;
#define PHY_NOISEVAR_BUFSIZE 10
typedef struct _nphy_noisevar_buf  phy_noisevar_buf_t;
typedef struct  rssical_cache_t;
typedef struct  lcnphy_cal_results_t;
struct shared_phy ;
struct phy_pub ;
struct phy_info_nphy;
typedef struct phy_info_nphy phy_info_nphy_t;
struct phy_info_lcnphy;
typedef struct phy_info_lcnphy phy_info_lcnphy_t;
struct phy_func_ptr ;
typedef struct phy_func_ptr phy_func_ptr_t;
struct phy_info ;
typedef s32 fixed;
typedef struct _cs32  cs32;
typedef struct radio_regs  radio_regs_t;
typedef struct radio_20xx_regs  radio_20xx_regs_t;
typedef struct lcnphy_radio_regs  lcnphy_radio_regs_t;
extern lcnphy_radio_regs_t lcnphy_radio_regs_2064[];
extern lcnphy_radio_regs_t lcnphy_radio_regs_2066[];
extern radio_regs_t regs_2055[], regs_SYN_2056[], regs_TX_2056[],
regs_RX_2056[];
extern radio_regs_t regs_SYN_2056_A1[], regs_TX_2056_A1[], regs_RX_2056_A1[];
extern radio_regs_t regs_SYN_2056_rev5[], regs_TX_2056_rev5[],
regs_RX_2056_rev5[];
extern radio_regs_t regs_SYN_2056_rev6[], regs_TX_2056_rev6[],
regs_RX_2056_rev6[];
extern radio_regs_t regs_SYN_2056_rev7[], regs_TX_2056_rev7[],
regs_RX_2056_rev7[];
extern radio_regs_t regs_SYN_2056_rev8[], regs_TX_2056_rev8[],
regs_RX_2056_rev8[];
extern radio_20xx_regs_t regs_2057_rev4[], regs_2057_rev5[], regs_2057_rev5v1[];
extern radio_20xx_regs_t regs_2057_rev7[], regs_2057_rev8[];
extern char *phy_getvar(phy_info_t *pi, const char *name);
extern int phy_getintvar(phy_info_t *pi, const char *name);
#define PHY_GETVAR(pi, name)	phy_getvar(pi, name)
#define PHY_GETINTVAR(pi, name)	phy_getintvar(pi, name)
extern u16 read_phy_reg(phy_info_t *pi, u16 addr);
extern void write_phy_reg(phy_info_t *pi, u16 addr, u16 val);
extern void and_phy_reg(phy_info_t *pi, u16 addr, u16 val);
extern void or_phy_reg(phy_info_t *pi, u16 addr, u16 val);
extern void mod_phy_reg(phy_info_t *pi, u16 addr, u16 mask, u16 val);
extern u16 read_radio_reg(phy_info_t *pi, u16 addr);
extern void or_radio_reg(phy_info_t *pi, u16 addr, u16 val);
extern void and_radio_reg(phy_info_t *pi, u16 addr, u16 val);
extern void mod_radio_reg(phy_info_t *pi, u16 addr, u16 mask,
u16 val);
extern void xor_radio_reg(phy_info_t *pi, u16 addr, u16 mask);
extern void write_radio_reg(phy_info_t *pi, u16 addr, u16 val);
extern void wlc_phyreg_enter(wlc_phy_t *pih);
extern void wlc_phyreg_exit(wlc_phy_t *pih);
extern void wlc_radioreg_enter(wlc_phy_t *pih);
extern void wlc_radioreg_exit(wlc_phy_t *pih);
extern void wlc_phy_read_table(phy_info_t *pi, const phytbl_info_t *ptbl_info,
u16 tblAddr, u16 tblDataHi,
u16 tblDatalo);
extern void wlc_phy_write_table(phy_info_t *pi,
const phytbl_info_t *ptbl_info, u16 tblAddr,
u16 tblDataHi, u16 tblDatalo);
extern void wlc_phy_table_addr(phy_info_t *pi, uint tbl_id, uint tbl_offset,
u16 tblAddr, u16 tblDataHi,
u16 tblDataLo);
extern void wlc_phy_table_data_write(phy_info_t *pi, uint width, u32 val);
extern void write_phy_channel_reg(phy_info_t *pi, uint val);
extern void wlc_phy_txpower_update_shm(phy_info_t *pi);
extern void wlc_phy_cordic(fixed theta, cs32 *val);
extern u8 wlc_phy_nbits(s32 value);
extern void wlc_phy_compute_dB(u32 *cmplx_pwr, s8 *p_dB, u8 core);
extern uint wlc_phy_init_radio_regs_allbands(phy_info_t *pi,
radio_20xx_regs_t *radioregs);
extern uint wlc_phy_init_radio_regs(phy_info_t *pi, radio_regs_t *radioregs,
u16 core_offset);
extern void wlc_phy_txpower_ipa_upd(phy_info_t *pi);
extern void wlc_phy_do_dummy_tx(phy_info_t *pi, bool ofdm, bool pa_on);
extern void wlc_phy_papd_decode_epsilon(u32 epsilon, s32 *eps_real,
s32 *eps_imag);
extern void wlc_phy_cal_perical_mphase_reset(phy_info_t *pi);
extern void wlc_phy_cal_perical_mphase_restart(phy_info_t *pi);
extern bool wlc_phy_attach_nphy(phy_info_t *pi);
extern bool wlc_phy_attach_lcnphy(phy_info_t *pi);
extern void wlc_phy_detach_lcnphy(phy_info_t *pi);
extern void wlc_phy_init_nphy(phy_info_t *pi);
extern void wlc_phy_init_lcnphy(phy_info_t *pi);
extern void wlc_phy_cal_init_nphy(phy_info_t *pi);
extern void wlc_phy_cal_init_lcnphy(phy_info_t *pi);
extern void wlc_phy_chanspec_set_nphy(phy_info_t *pi, chanspec_t chanspec);
extern void wlc_phy_chanspec_set_lcnphy(phy_info_t *pi, chanspec_t chanspec);
extern void wlc_phy_chanspec_set_fixup_lcnphy(phy_info_t *pi,
chanspec_t chanspec);
extern int wlc_phy_channel2freq(uint channel);
extern int wlc_phy_chanspec_freq2bandrange_lpssn(uint);
extern int wlc_phy_chanspec_bandrange_get(phy_info_t *, chanspec_t);
extern void wlc_lcnphy_set_tx_pwr_ctrl(phy_info_t *pi, u16 mode);
extern s8 wlc_lcnphy_get_current_tx_pwr_idx(phy_info_t *pi);
extern void wlc_phy_txpower_recalc_target_nphy(phy_info_t *pi);
extern void wlc_lcnphy_txpower_recalc_target(phy_info_t *pi);
extern void wlc_phy_txpower_recalc_target_lcnphy(phy_info_t *pi);
extern void wlc_lcnphy_set_tx_pwr_by_index(phy_info_t *pi, int index);
extern void wlc_lcnphy_tx_pu(phy_info_t *pi, bool bEnable);
extern void wlc_lcnphy_stop_tx_tone(phy_info_t *pi);
extern void wlc_lcnphy_start_tx_tone(phy_info_t *pi, s32 f_kHz,
u16 max_val, bool iqcalmode);
extern void wlc_phy_txpower_sromlimit_get_nphy(phy_info_t *pi, uint chan,
u8 *max_pwr, u8 rate_id);
extern void wlc_phy_ofdm_to_mcs_powers_nphy(u8 *power, u8 rate_mcs_start,
u8 rate_mcs_end,
u8 rate_ofdm_start);
extern void wlc_phy_mcs_to_ofdm_powers_nphy(u8 *power,
u8 rate_ofdm_start,
u8 rate_ofdm_end,
u8 rate_mcs_start);
extern u16 wlc_lcnphy_tempsense(phy_info_t *pi, bool mode);
extern s16 wlc_lcnphy_tempsense_new(phy_info_t *pi, bool mode);
extern s8 wlc_lcnphy_tempsense_degree(phy_info_t *pi, bool mode);
extern s8 wlc_lcnphy_vbatsense(phy_info_t *pi, bool mode);
extern void wlc_phy_carrier_suppress_lcnphy(phy_info_t *pi);
extern void wlc_lcnphy_crsuprs(phy_info_t *pi, int channel);
extern void wlc_lcnphy_epa_switch(phy_info_t *pi, bool mode);
extern void wlc_2064_vco_cal(phy_info_t *pi);
extern void wlc_phy_txpower_recalc_target(phy_info_t *pi);
#define LCNPHY_TBL_ID_PAPDCOMPDELTATBL	0x18
#define LCNPHY_TX_POWER_TABLE_SIZE	128
#define LCNPHY_MAX_TX_POWER_INDEX	(LCNPHY_TX_POWER_TABLE_SIZE - 1)
#define LCNPHY_TBL_ID_TXPWRCTL 	0x07
#define LCNPHY_TX_PWR_CTRL_OFF	0
#define LCNPHY_TX_PWR_CTRL_SW		(0x1 << 15)
#define LCNPHY_TX_PWR_CTRL_HW         ((0x1 << 15) | \
(0x1 << 14) | \
(0x1 << 13))
#define LCNPHY_TX_PWR_CTRL_TEMPBASED	0xE001
extern void wlc_lcnphy_write_table(phy_info_t *pi, const phytbl_info_t *pti);
extern void wlc_lcnphy_read_table(phy_info_t *pi, phytbl_info_t *pti);
extern void wlc_lcnphy_set_tx_iqcc(phy_info_t *pi, u16 a, u16 b);
extern void wlc_lcnphy_set_tx_locc(phy_info_t *pi, u16 didq);
extern void wlc_lcnphy_get_tx_iqcc(phy_info_t *pi, u16 *a, u16 *b);
extern u16 wlc_lcnphy_get_tx_locc(phy_info_t *pi);
extern void wlc_lcnphy_get_radio_loft(phy_info_t *pi, u8 *ei0,
u8 *eq0, u8 *fi0, u8 *fq0);
extern void wlc_lcnphy_calib_modes(phy_info_t *pi, uint mode);
extern void wlc_lcnphy_deaf_mode(phy_info_t *pi, bool mode);
extern bool wlc_phy_tpc_isenabled_lcnphy(phy_info_t *pi);
extern void wlc_lcnphy_tx_pwr_update_npt(phy_info_t *pi);
extern s32 wlc_lcnphy_tssi2dbm(s32 tssi, s32 a1, s32 b0, s32 b1);
extern void wlc_lcnphy_get_tssi(phy_info_t *pi, s8 *ofdm_pwr,
s8 *cck_pwr);
extern void wlc_lcnphy_tx_power_adjustment(wlc_phy_t *ppi);
extern s32 wlc_lcnphy_rx_signal_power(phy_info_t *pi, s32 gain_index);
#define NPHY_MAX_HPVGA1_INDEX		10
#define NPHY_DEF_HPVGA1_INDEXLIMIT	7
typedef struct _phy_iq_est  phy_iq_est_t;
extern void wlc_phy_stay_in_carriersearch_nphy(phy_info_t *pi, bool enable);
extern void wlc_nphy_deaf_mode(phy_info_t *pi, bool mode);
#define wlc_phy_write_table_nphy(pi, pti)	wlc_phy_write_table(pi, pti, 0x72, \
0x74, 0x73)
#define wlc_phy_read_table_nphy(pi, pti)	wlc_phy_read_table(pi, pti, 0x72, \
0x74, 0x73)
#define wlc_nphy_table_addr(pi, id, off)	wlc_phy_table_addr((pi), (id), (off), \
0x72, 0x74, 0x73)
#define wlc_nphy_table_data_write(pi, w, v)	wlc_phy_table_data_write((pi), (w), (v))
extern void wlc_phy_table_read_nphy(phy_info_t *pi, u32, u32 l, u32 o,
u32 w, void *d);
extern void wlc_phy_table_write_nphy(phy_info_t *pi, u32, u32, u32,
u32, const void *);
#define	PHY_IPA(pi) \
((pi->ipa2g_on && CHSPEC_IS2G(pi->radio_chanspec)) || \
(pi->ipa5g_on && CHSPEC_IS5G(pi->radio_chanspec)))
#define WLC_PHY_WAR_PR51571(pi) \
if (((pi)->sh->bustype == PCI_BUS) && NREV_LT((pi)->pubpi.phy_rev, 3)) \
(void)R_REG(&(pi)->regs->maccontrol)
extern void wlc_phy_cal_perical_nphy_run(phy_info_t *pi, u8 caltype);
extern void wlc_phy_aci_reset_nphy(phy_info_t *pi);
extern void wlc_phy_pa_override_nphy(phy_info_t *pi, bool en);
extern u8 wlc_phy_get_chan_freq_range_nphy(phy_info_t *pi, uint chan);
extern void wlc_phy_switch_radio_nphy(phy_info_t *pi, bool on);
extern void wlc_phy_stf_chain_upd_nphy(phy_info_t *pi);
extern void wlc_phy_force_rfseq_nphy(phy_info_t *pi, u8 cmd);
extern s16 wlc_phy_tempsense_nphy(phy_info_t *pi);
extern u16 wlc_phy_classifier_nphy(phy_info_t *pi, u16 mask, u16 val);
extern void wlc_phy_rx_iq_est_nphy(phy_info_t *pi, phy_iq_est_t *est,
u16 num_samps, u8 wait_time,
u8 wait_for_crs);
extern void wlc_phy_rx_iq_coeffs_nphy(phy_info_t *pi, u8 write,
nphy_iq_comp_t *comp);
extern void wlc_phy_aci_and_noise_reduction_nphy(phy_info_t *pi);
extern void wlc_phy_rxcore_setstate_nphy(wlc_phy_t *pih, u8 rxcore_bitmask);
extern u8 wlc_phy_rxcore_getstate_nphy(wlc_phy_t *pih);
extern void wlc_phy_txpwrctrl_enable_nphy(phy_info_t *pi, u8 ctrl_type);
extern void wlc_phy_txpwr_fixpower_nphy(phy_info_t *pi);
extern void wlc_phy_txpwr_apply_nphy(phy_info_t *pi);
extern void wlc_phy_txpwr_papd_cal_nphy(phy_info_t *pi);
extern u16 wlc_phy_txpwr_idx_get_nphy(phy_info_t *pi);
extern nphy_txgains_t wlc_phy_get_tx_gain_nphy(phy_info_t *pi);
extern int wlc_phy_cal_txiqlo_nphy(phy_info_t *pi, nphy_txgains_t target_gain,
bool full, bool m);
extern int wlc_phy_cal_rxiq_nphy(phy_info_t *pi, nphy_txgains_t target_gain,
u8 type, bool d);
extern void wlc_phy_txpwr_index_nphy(phy_info_t *pi, u8 core_mask,
s8 txpwrindex, bool res);
extern void wlc_phy_rssisel_nphy(phy_info_t *pi, u8 core, u8 rssi_type);
extern int wlc_phy_poll_rssi_nphy(phy_info_t *pi, u8 rssi_type,
s32 *rssi_buf, u8 nsamps);
extern void wlc_phy_rssi_cal_nphy(phy_info_t *pi);
extern int wlc_phy_aci_scan_nphy(phy_info_t *pi);
extern void wlc_phy_cal_txgainctrl_nphy(phy_info_t *pi, s32 dBm_targetpower,
bool debug);
extern int wlc_phy_tx_tone_nphy(phy_info_t *pi, u32 f_kHz, u16 max_val,
u8 mode, u8, bool);
extern void wlc_phy_stopplayback_nphy(phy_info_t *pi);
extern void wlc_phy_est_tonepwr_nphy(phy_info_t *pi, s32 *qdBm_pwrbuf,
u8 num_samps);
extern void wlc_phy_radio205x_vcocal_nphy(phy_info_t *pi);
extern int wlc_phy_rssi_compute_nphy(phy_info_t *pi, wlc_d11rxhdr_t *wlc_rxh);
#define NPHY_TESTPATTERN_BPHY_EVM   0
#define NPHY_TESTPATTERN_BPHY_RFCS  1
extern void wlc_phy_nphy_tkip_rifs_war(phy_info_t *pi, u8 rifs);
void wlc_phy_get_pwrdet_offsets(phy_info_t *pi, s8 *cckoffset,
s8 *ofdmoffset);
extern s8 wlc_phy_upd_rssi_offset(phy_info_t *pi, s8 rssi,
chanspec_t chanspec);
extern bool wlc_phy_n_txpower_ipa_ison(phy_info_t *pih);
