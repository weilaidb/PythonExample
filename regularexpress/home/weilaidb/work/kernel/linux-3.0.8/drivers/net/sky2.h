#define _SKY2_H
#define ETH_JUMBO_MTU		9000
enum ;
enum pci_dev_reg_1 ;
enum pci_dev_reg_2 ;
enum pci_dev_reg_3 ;
enum pci_dev_reg_4 ;
enum pci_dev_reg_5 ;
enum pci_cfg_reg1 ;
enum ;
enum ;
enum ;
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
enum yukon_xl_rev ;
enum yukon_ec_rev ;
enum yukon_ec_u_rev ;
enum yukon_fe_rev ;
enum yukon_fe_p_rev ;
enum yukon_ex_rev ;
enum yukon_supr_rev ;
enum ;
enum ;
#define CFG_LED_MODE(x)		(((x) & CFG_LED_MODE_MSK) >> 2)
#define CFG_DUAL_MAC_MSK	(CFG_LINK_2_AVAIL | CFG_LINK_1_AVAIL)
enum ;
enum ;
enum ;
enum ;
#define RAM_ADR_RAN	0x0007ffffL
enum ;
#define SK_RI_TO_53	36
#define SK_REG(port,reg)	(((port)<<7)+(reg))
#define TXA_MAX_VAL	0x00ffffffUL
enum ;
enum ;
enum ;
enum ;
enum ;
#define Q_ADDR(reg, offs) (B8_Q_REGS + (reg) + (offs))
enum ;
enum ;
#define Y2_QADDR(q,reg)		(Y2_B8_PREF_REGS + (q) + (reg))
enum ;
enum ;
enum ;
#define RB_ADDR(offs, queue) ((u16) B16_RAM_REGS + (queue) + (offs))
enum ;
enum ;
enum ;
enum ;
enum ;
#define RB_MSK	0x0007ffff
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
#define PHY_M_PC_MDI_XMODE(x)	(((u16)(x)<<5) & PHY_M_PC_MDIX_MSK)
enum ;
enum ;
enum ;
enum ;
#define PHY_M_PS_PAUSE_MSK	(PHY_M_PS_TX_P_EN | PHY_M_PS_RX_P_EN)
enum ;
enum ;
enum ;
#define PHY_M_EC_M_DSC(x)	((u16)(x)<<10 & PHY_M_EC_M_DSC_MSK)
#define PHY_M_EC_S_DSC(x)	((u16)(x)<<8 & PHY_M_EC_S_DSC_MSK)
#define PHY_M_EC_DSC_2(x)	((u16)(x)<<9 & PHY_M_EC_M_DSC_MSK2)
#define PHY_M_EC_MAC_S(x)	((u16)(x)<<4 & PHY_M_EC_MAC_S_MSK)
enum ;
#define PHY_M_PC_DSC(x)			(((u16)(x)<<12) & PHY_M_PC_DSC_MSK)
enum ;
enum ;
enum ;
#define PHY_M_LED_PULS_DUR(x)	(((u16)(x)<<12) & PHY_M_LEDC_PULS_MSK)
enum ;
#define PHY_M_POLC_LS1_P_MIX(x)	(((x)<<12) & PHY_M_POLC_LS1M_MSK)
#define PHY_M_POLC_IS0_P_MIX(x)	(((x)<<8) & PHY_M_POLC_IS0M_MSK)
#define PHY_M_POLC_LOS_CTRL(x)	(((x)<<6) & PHY_M_POLC_LOS_MSK)
#define PHY_M_POLC_INIT_CTRL(x)	(((x)<<4) & PHY_M_POLC_INIT_MSK)
#define PHY_M_POLC_STA1_CTRL(x)	(((x)<<2) & PHY_M_POLC_STA1_MSK)
#define PHY_M_POLC_STA0_CTRL(x)	(((x)<<0) & PHY_M_POLC_STA0_MSK)
enum ;
#define PHY_M_LED_BLINK_RT(x)	(((u16)(x)<<8) & PHY_M_LEDC_BL_R_MSK)
enum ;
#define PHY_M_LED_MO_SGMII(x)	((x)<<14)
#define PHY_M_LED_MO_DUP(x)	((x)<<10)
#define PHY_M_LED_MO_10(x)	((x)<<8)
#define PHY_M_LED_MO_100(x)	((x)<<6)
#define PHY_M_LED_MO_1000(x)	((x)<<4)
#define PHY_M_LED_MO_RX(x)	((x)<<2)
#define PHY_M_LED_MO_TX(x)	((x)<<0)
enum led_mode ;
enum ;
enum ;
enum ;
#define PHY_M_FELP_LED2_CTRL(x)	(((u16)(x)<<8) & PHY_M_FELP_LED2_MSK)
#define PHY_M_FELP_LED1_CTRL(x)	(((u16)(x)<<4) & PHY_M_FELP_LED1_MSK)
#define PHY_M_FELP_LED0_CTRL(x)	(((u16)(x)<<0) & PHY_M_FELP_LED0_MSK)
enum ;
enum ;
enum ;
enum ;
#define PHY_M_MAC_MODE_SEL(x)	(((x)<<7) & PHY_M_MAC_MD_MSK)
enum ;
#define PHY_M_LEDC_LOS_CTRL(x)	(((x)<<12) & PHY_M_LEDC_LOS_MSK)
#define PHY_M_LEDC_INIT_CTRL(x)	(((x)<<8) & PHY_M_LEDC_INIT_MSK)
#define PHY_M_LEDC_STA1_CTRL(x)	(((x)<<4) & PHY_M_LEDC_STA1_MSK)
#define PHY_M_LEDC_STA0_CTRL(x)	(((x)<<0) & PHY_M_LEDC_STA0_MSK)
enum ;
enum ;
enum ;
enum ;
#define GM_GPCR_SPEED_1000	(GM_GPCR_GIGS_ENA | GM_GPCR_SPEED_100)
enum ;
#define TX_COL_THR(x)		(((x)<<10) & GM_TXCR_COL_THR_MSK)
#define TX_COL_DEF		0x04
enum ;
enum ;
#define TX_JAM_LEN_VAL(x)	(((x)<<14) & GM_TXPA_JAMLEN_MSK)
#define TX_JAM_IPG_VAL(x)	(((x)<<9)  & GM_TXPA_JAMIPG_MSK)
#define TX_IPG_JAM_DATA(x)	(((x)<<4)  & GM_TXPA_JAMDAT_MSK)
#define TX_BACK_OFF_LIM(x)	((x) & GM_TXPA_BO_LIM_MSK)
enum ;
#define DATA_BLIND_VAL(x)	(((x)<<11) & GM_SMOD_DATABL_MSK)
#define DATA_BLIND_DEF		0x04
#define IPG_DATA_VAL(x)		(x & GM_SMOD_IPG_MSK)
#define IPG_DATA_DEF		0x1e
enum ;
#define GM_SMI_CT_PHY_AD(x)	(((u16)(x)<<11) & GM_SMI_CT_PHY_A_MSK)
#define GM_SMI_CT_REG_AD(x)	(((u16)(x)<<6) & GM_SMI_CT_REG_A_MSK)
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
enum status_css ;
struct sky2_tx_le  __packed;
struct sky2_rx_le  __packed;
struct sky2_status_le  __packed;
struct tx_ring_info ;
struct rx_ring_info ;
enum flow_control ;
struct sky2_stats ;
struct sky2_port ;
struct sky2_hw ;
static inline int sky2_is_copper(const struct sky2_hw *hw)
static inline u32 sky2_read32(const struct sky2_hw *hw, unsigned reg)
static inline u16 sky2_read16(const struct sky2_hw *hw, unsigned reg)
static inline u8 sky2_read8(const struct sky2_hw *hw, unsigned reg)
static inline void sky2_write32(const struct sky2_hw *hw, unsigned reg, u32 val)
static inline void sky2_write16(const struct sky2_hw *hw, unsigned reg, u16 val)
static inline void sky2_write8(const struct sky2_hw *hw, unsigned reg, u8 val)
#define SK_GMAC_REG(port,reg) \
(BASE_GMAC_1 + (port) * (BASE_GMAC_2-BASE_GMAC_1) + (reg))
#define GM_PHY_RETRIES	100
static inline u16 gma_read16(const struct sky2_hw *hw, unsigned port, unsigned reg)
static inline u32 gma_read32(struct sky2_hw *hw, unsigned port, unsigned reg)
static inline u64 gma_read64(struct sky2_hw *hw, unsigned port, unsigned reg)
static inline u32 get_stats32(struct sky2_hw *hw, unsigned port, unsigned reg)
static inline u64 get_stats64(struct sky2_hw *hw, unsigned port, unsigned reg)
static inline void gma_write16(const struct sky2_hw *hw, unsigned port, int r, u16 v)
static inline void gma_set_addr(struct sky2_hw *hw, unsigned port, unsigned reg,
const u8 *addr)
static inline u32 sky2_pci_read32(const struct sky2_hw *hw, unsigned reg)
static inline u16 sky2_pci_read16(const struct sky2_hw *hw, unsigned reg)
static inline void sky2_pci_write32(struct sky2_hw *hw, unsigned reg, u32 val)
static inline void sky2_pci_write16(struct sky2_hw *hw, unsigned reg, u16 val)
