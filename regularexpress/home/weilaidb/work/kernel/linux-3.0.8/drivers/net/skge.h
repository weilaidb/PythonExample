#define _SKGE_H
#define PCI_DEV_REG1	0x40
#define  PCI_PHY_COMA	0x8000000
#define  PCI_VIO	0x2000000
#define PCI_DEV_REG2	0x44
#define  PCI_VPD_ROM_SZ	7L<<14
#define  PCI_REV_DESC	1<<2
#define PCI_STATUS_ERROR_BITS (PCI_STATUS_DETECTED_PARITY | \
PCI_STATUS_SIG_SYSTEM_ERROR | \
PCI_STATUS_REC_MASTER_ABORT | \
PCI_STATUS_REC_TARGET_ABORT | \
PCI_STATUS_PARITY)
enum csr_regs ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define RAM_ADR_RAN	0x0007ffffL
enum ;
enum ;
#define SK_MAC_TO_53	72
#define SK_PKT_TO_53	0x2000
#define SK_PKT_TO_MAX	0xffff
#define SK_RI_TO_53	36
enum ;
#define PA_ENA_TO_ALL	(PA_ENA_TO_RX1 | PA_ENA_TO_RX2 |\
PA_ENA_TO_TX1 | PA_ENA_TO_TX2)
#define TXA_MAX_VAL	0x00ffffffUL
enum ;
enum ;
enum ;
enum ;
#define Q_ADDR(reg, offs) (B8_Q_REGS + (reg) + (offs))
enum ;
enum ;
enum ;
enum ;
enum ;
#define RB_ADDR(offs, queue) ((u16)B16_RAM_REGS + (u16)(queue) + (offs))
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define CSR_SET_RESET	(CSR_DESC_SET | CSR_FIFO_SET | CSR_HPI_RST |\
CSR_SV_RST | CSR_DREAD_RST | CSR_DWRITE_RST |\
CSR_TRANS_RST)
#define CSR_CLR_RESET	(CSR_DESC_CLR | CSR_FIFO_CLR | CSR_HPI_RUN |\
CSR_SV_RUN | CSR_DREAD_RUN | CSR_DWRITE_RUN |\
CSR_TRANS_RUN)
enum ;
#define RB_MSK	0x0007ffff
enum ;
enum ;
#define SK_XMIT_DUR		0x002faf08UL
#define SK_BLK_DUR		0x01dcd650UL
#define SK_DPOLL_DEF	0x00ee6b28UL
#define SK_DPOLL_MAX	0x00ffffffUL
#define SK_FACT_62		100
#define SK_FACT_53		 85
#define SK_FACT_78		125
enum ;
enum ;
enum ;
#define WOL_REGS(port, x)	(x + (port)*0x80)
enum ;
#define WOL_PATT_RAM_BASE(port)	(WOL_PATT_RAM_1 + (port)*0x400)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define PHY_B_AS_PAUSE_MSK	(PHY_B_AS_PRR | PHY_B_AS_PRT)
enum ;
#define PHY_B_DEF_MSK	\
(~(PHY_B_IS_PSE | PHY_B_IS_AN_PR | PHY_B_IS_DUP_CHANGE | \
PHY_B_IS_LSP_CHANGE | PHY_B_IS_LST_CHANGE))
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define PHY_M_PS_PAUSE_MSK	(PHY_M_PS_TX_P_EN | PHY_M_PS_RX_P_EN)
enum ;
enum ;
enum ;
#define PHY_M_EC_M_DSC(x)	((u16)(x)<<10)
#define PHY_M_EC_S_DSC(x)	((u16)(x)<<8)
#define PHY_M_EC_MAC_S(x)	((u16)(x)<<4)
#define PHY_M_EC_M_DSC_2(x)	((u16)(x)<<9)
enum ;
enum ;
#define PHY_M_LED_PULS_DUR(x)	(((u16)(x)<<12) & PHY_M_LEDC_PULS_MSK)
#define PHY_M_LED_BLINK_RT(x)	(((u16)(x)<<8) & PHY_M_LEDC_BL_R_MSK)
enum ;
enum ;
enum ;
#define PHY_M_LED_MO_SGMII(x)	((x)<<14)
#define PHY_M_LED_MO_DUP(x)	((x)<<10)
#define PHY_M_LED_MO_10(x)	((x)<<8)
#define PHY_M_LED_MO_100(x)	((x)<<6)
#define PHY_M_LED_MO_1000(x)	((x)<<4)
#define PHY_M_LED_MO_RX(x)	((x)<<2)
#define PHY_M_LED_MO_TX(x)	((x)<<0)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define PHY_M_FELP_LED2_CTRL(x)	(((x)<<8) & PHY_M_FELP_LED2_MSK)
#define PHY_M_FELP_LED1_CTRL(x)	(((x)<<4) & PHY_M_FELP_LED1_MSK)
#define PHY_M_FELP_LED0_CTRL(x)	(((x)<<0) & PHY_M_FELP_LED0_MSK)
enum ;
enum ;
enum ;
#define PHY_M_LEDC_LOS_CTRL(x)	(((x)<<12) & PHY_M_LEDC_LOS_MSK)
#define PHY_M_LEDC_INIT_CTRL(x)	(((x)<<8) & PHY_M_LEDC_INIT_MSK)
#define PHY_M_LEDC_STA1_CTRL(x)	(((x)<<4) & PHY_M_LEDC_STA1_MSK)
#define PHY_M_LEDC_STA0_CTRL(x)	(((x)<<0) & PHY_M_LEDC_STA0_MSK)
enum ;
#define GM_MIB_CNT_BASE	0x0100
#define GM_MIB_CNT_SIZE	44
enum ;
enum ;
enum ;
#define GM_GPCR_SPEED_1000	(GM_GPCR_GIGS_ENA | GM_GPCR_SPEED_100)
#define GM_GPCR_AU_ALL_DIS	(GM_GPCR_AU_DUP_DIS | GM_GPCR_AU_FCT_DIS|GM_GPCR_AU_SPD_DIS)
enum ;
#define TX_COL_THR(x)		(((x)<<10) & GM_TXCR_COL_THR_MSK)
#define TX_COL_DEF		0x04
enum ;
enum ;
#define TX_JAM_LEN_VAL(x)	(((x)<<14) & GM_TXPA_JAMLEN_MSK)
#define TX_JAM_IPG_VAL(x)	(((x)<<9)  & GM_TXPA_JAMIPG_MSK)
#define TX_IPG_JAM_DATA(x)	(((x)<<4)  & GM_TXPA_JAMDAT_MSK)
enum ;
#define DATA_BLIND_VAL(x)	(((x)<<11) & GM_SMOD_DATABL_MSK)
#define DATA_BLIND_DEF		0x04
#define IPG_DATA_VAL(x)		(x & GM_SMOD_IPG_MSK)
#define IPG_DATA_DEF		0x1e
enum ;
#define GM_SMI_CT_PHY_AD(x)	(((x)<<11) & GM_SMI_CT_PHY_A_MSK)
#define GM_SMI_CT_REG_AD(x)	(((x)<<6) & GM_SMI_CT_REG_A_MSK)
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define GPC_HWCFG_GMII_COP (GPC_HWCFG_M_3|GPC_HWCFG_M_2 | GPC_HWCFG_M_1 | GPC_HWCFG_M_0)
#define GPC_HWCFG_GMII_FIB (GPC_HWCFG_M_2 | GPC_HWCFG_M_1 | GPC_HWCFG_M_0)
#define GPC_ANEG_ADV_ALL_M  (GPC_ANEG_3 | GPC_ANEG_2 | GPC_ANEG_1 | GPC_ANEG_0)
#define GPC_FRC10MBIT_HALF	0
#define GPC_FRC10MBIT_FULL	GPC_ANEG_0
#define GPC_FRC100MBIT_HALF	GPC_ANEG_1
#define GPC_FRC100MBIT_FULL	(GPC_ANEG_0 | GPC_ANEG_1)
#define GPC_ADV_1000_HALF	GPC_ANEG_2
#define GPC_ADV_1000_FULL	GPC_ANEG_3
#define GPC_ADV_ALL		(GPC_ANEG_2 | GPC_ANEG_3)
#define GPC_FORCE_MASTER	0
#define GPC_FORCE_SLAVE		GPC_ANEG_0
#define GPC_PREF_MASTER		GPC_ANEG_1
#define GPC_PREF_SLAVE		(GPC_ANEG_1 | GPC_ANEG_0)
enum ;
#define WOL_CTL_DEFAULT				\
(WOL_CTL_DIS_PME_ON_LINK_CHG |	\
WOL_CTL_DIS_PME_ON_PATTERN |	\
WOL_CTL_DIS_PME_ON_MAGIC_PKT |	\
WOL_CTL_DIS_LINK_CHG_UNIT |		\
WOL_CTL_DIS_PATTERN_UNIT |		\
WOL_CTL_DIS_MAGIC_PKT_UNIT)
#define WOL_CTL_PATT_ENA(x)	(1 << (x))
enum ;
enum ;
enum ;
enum ;
#define XM_RT_LIM_MSK	0x1f
#define XM_STIME_MSK	0x7f
#define XM_IPG_MSK		0xff
enum ;
enum ;
enum ;
enum ;
#define XM_TX_WM_MSK	0x01ff
#define XM_THR_MSK		0x03ff
enum ;
#define XM_RX_WM_MSK	0x03ff
#define XM_DEV_OUI	(0x00ffffffUL<<8)
#define XM_DEV_REV	(0x07L << 5)
enum ;
#define XM_PAUSE_MODE	(XM_MD_SPOE_E | XM_MD_SPOL_I | XM_MD_SPOH_I)
#define XM_DEF_MODE	(XM_MD_RX_RUNT | XM_MD_RX_IRLE | XM_MD_RX_LONG |\
XM_MD_RX_CRCE | XM_MD_RX_ERR | XM_MD_CSA)
enum ;
enum ;
#define XMR_DEF_MSK		(XMR_OK_LO_OV | XMR_OK_HI_OV)
enum ;
#define XMT_DEF_MSK		(XMT_OK_LO_OV | XMT_OK_HI_OV)
struct skge_rx_desc ;
struct skge_tx_desc ;
struct skge_element ;
struct skge_ring ;
struct skge_hw ;
enum pause_control ;
enum pause_status ;
struct skge_port ;
static inline u32 skge_read32(const struct skge_hw *hw, int reg)
static inline u16 skge_read16(const struct skge_hw *hw, int reg)
static inline u8 skge_read8(const struct skge_hw *hw, int reg)
static inline void skge_write32(const struct skge_hw *hw, int reg, u32 val)
static inline void skge_write16(const struct skge_hw *hw, int reg, u16 val)
static inline void skge_write8(const struct skge_hw *hw, int reg, u8 val)
#define SK_REG(port,reg)	(((port)<<7)+(u16)(reg))
#define SK_XMAC_REG(port, reg) \
((BASE_XMAC_1 + (port) * (BASE_XMAC_2 - BASE_XMAC_1)) | (reg) << 1)
static inline u32 xm_read32(const struct skge_hw *hw, int port, int reg)
static inline u16 xm_read16(const struct skge_hw *hw, int port, int reg)
static inline void xm_write32(const struct skge_hw *hw, int port, int r, u32 v)
static inline void xm_write16(const struct skge_hw *hw, int port, int r, u16 v)
static inline void xm_outhash(const struct skge_hw *hw, int port, int reg,
const u8 *hash)
static inline void xm_outaddr(const struct skge_hw *hw, int port, int reg,
const u8 *addr)
#define SK_GMAC_REG(port,reg) \
(BASE_GMAC_1 + (port) * (BASE_GMAC_2-BASE_GMAC_1) + (reg))
static inline u16 gma_read16(const struct skge_hw *hw, int port, int reg)
static inline u32 gma_read32(const struct skge_hw *hw, int port, int reg)
static inline void gma_write16(const struct skge_hw *hw, int port, int r, u16 v)
static inline void gma_set_addr(struct skge_hw *hw, int port, int reg,
const u8 *addr)
