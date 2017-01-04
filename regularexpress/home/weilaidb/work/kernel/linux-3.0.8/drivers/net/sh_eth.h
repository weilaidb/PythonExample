#define __SH_ETH_H__
#define CARDNAME	"sh-eth"
#define TX_TIMEOUT	(5*HZ)
#define TX_RING_SIZE	64
#define RX_RING_SIZE	64
#define ETHERSMALL		60
#define PKT_BUF_SZ		1538
enum ;
static const u16 sh_eth_offset_gigabit[SH_ETH_MAX_REGISTER_OFFSET] = ;
static const u16 sh_eth_offset_fast_sh4[SH_ETH_MAX_REGISTER_OFFSET] = ;
static const u16 sh_eth_offset_fast_sh3_sh2[SH_ETH_MAX_REGISTER_OFFSET] = ;
#if defined(CONFIG_CPU_SH4)
#define SH4_SKB_RX_ALIGN	32
#define SH2_SH3_SKB_RX_ALIGN	2
enum EDSR_BIT ;
#define EDSR_ENALL (EDSR_ENT|EDSR_ENR)
enum GECMR_BIT ;
enum DMAC_M_BIT ;
enum DMAC_T_BIT ;
enum EDRRR_R_BIT ;
enum TPAUSER_BIT ;
enum BCFR_BIT ;
enum PIR_BIT ;
enum PHY_STATUS_BIT ;
enum EESR_BIT ;
#define DEFAULT_TX_CHECK	(EESR_FTC | EESR_CND | EESR_DLC | EESR_CD | \
EESR_RTO)
#define DEFAULT_EESR_ERR_CHECK	(EESR_TWB | EESR_TABT | EESR_RABT | \
EESR_RDE | EESR_RFRMER | EESR_ADE | \
EESR_TFE | EESR_TDE | EESR_ECI)
#define DEFAULT_TX_ERROR_CHECK	(EESR_TWB | EESR_TABT | EESR_ADE | EESR_TDE | \
EESR_TFE)
enum DMAC_IM_BIT ;
enum RD_STS_BIT ;
#define RDF1ST	RD_RFP1
#define RDFEND	RD_RFP0
#define RD_RFP	(RD_RFP1|RD_RFP0)
enum FCFTR_BIT ;
#define DEFAULT_FIFO_F_D_RFF	(FCFTR_RFF2 | FCFTR_RFF1 | FCFTR_RFF0)
#define DEFAULT_FIFO_F_D_RFD	(FCFTR_RFD2 | FCFTR_RFD1 | FCFTR_RFD0)
enum TD_STS_BIT ;
#define TDF1ST	TD_TFP1
#define TDFEND	TD_TFP0
#define TD_TFP	(TD_TFP1|TD_TFP0)
#define DEFAULT_RMCR_VALUE	0x00000000
enum FELIC_MODE_BIT ;
enum ECSR_STATUS_BIT ;
#define DEFAULT_ECSR_INIT	(ECSR_BRCRX | ECSR_PSRTO | ECSR_LCHNG | \
ECSR_ICD | ECSIPR_MPDIP)
enum ECSIPR_STATUS_MASK_BIT ;
#define DEFAULT_ECSIPR_INIT	(ECSIPR_BRCRXIP | ECSIPR_PSRTOIP | \
ECSIPR_LCHNGIP | ECSIPR_ICDIP | ECSIPR_MPDIP)
enum APR_BIT ;
enum MPR_BIT ;
enum DESC_I_BIT ;
enum RPADIR_BIT ;
#define RFLR_VALUE 0x1000
#define DEFAULT_FDR_INIT	0x00000707
enum phy_offsets ;
enum PHY_CTRL_BIT ;
#define DM9161_PHY_C_ANEGEN 0
enum PHY_STAT_BIT ;
enum PHY_ANA_BIT ;
enum PHY_ANL_BIT ;
enum PHY_ANE_BIT ;
enum PHY_16_BIT ;
#define POST_RX		0x08
#define POST_FW		0x04
#define POST0_RX	(POST_RX)
#define POST0_FW	(POST_FW)
#define POST1_RX	(POST_RX >> 2)
#define POST1_FW	(POST_FW >> 2)
#define POST_ALL	(POST0_RX | POST0_FW | POST1_RX | POST1_FW)
enum ARSTR_BIT ;
enum TSU_FWEN0_BIT ;
enum TSU_ADSBSY_BIT ;
enum TSU_TEN_BIT ;
enum TSU_FWSL0_BIT ;
enum TSU_FWSLC_BIT ;
struct sh_eth_txdesc  __attribute__((aligned(2), packed));
struct sh_eth_rxdesc  __attribute__((aligned(2), packed));
struct sh_eth_cpu_data ;
struct sh_eth_private ;
static inline void sh_eth_soft_swap(char *src, int len)
static inline void sh_eth_write(struct net_device *ndev, unsigned long data,
int enum_index)
static inline unsigned long sh_eth_read(struct net_device *ndev,
int enum_index)
static inline void sh_eth_tsu_write(struct sh_eth_private *mdp,
unsigned long data, int enum_index)
static inline unsigned long sh_eth_tsu_read(struct sh_eth_private *mdp,
int enum_index)
