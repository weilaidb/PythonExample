#define __IBM_NEWEMAC_MAL_H
#define	MAL_CFG			0x00
#define	  MAL_CFG_SR		0x80000000
#define   MAL_CFG_PLBB		0x00004000
#define   MAL_CFG_OPBBL		0x00000080
#define   MAL_CFG_EOPIE		0x00000004
#define   MAL_CFG_LEA		0x00000002
#define   MAL_CFG_SD		0x00000001
#define   MAL1_CFG_PLBP_MASK	0x00c00000
#define   MAL1_CFG_PLBP_10	0x00800000
#define   MAL1_CFG_GA		0x00200000
#define   MAL1_CFG_OA		0x00100000
#define   MAL1_CFG_PLBLE	0x00080000
#define   MAL1_CFG_PLBT_MASK	0x00078000
#define   MAL1_CFG_DEFAULT	(MAL1_CFG_PLBP_10 | MAL1_CFG_PLBT_MASK)
#define   MAL2_CFG_RPP_MASK	0x00c00000
#define   MAL2_CFG_RPP_10	0x00800000
#define   MAL2_CFG_RMBS_MASK	0x00300000
#define   MAL2_CFG_WPP_MASK	0x000c0000
#define   MAL2_CFG_WPP_10	0x00080000
#define   MAL2_CFG_WMBS_MASK	0x00030000
#define   MAL2_CFG_PLBLE	0x00008000
#define   MAL2_CFG_DEFAULT	(MAL2_CFG_RMBS_MASK | MAL2_CFG_WMBS_MASK | \
MAL2_CFG_RPP_10 | MAL2_CFG_WPP_10)
#define MAL_ESR			0x01
#define   MAL_ESR_EVB		0x80000000
#define   MAL_ESR_CIDT		0x40000000
#define   MAL_ESR_CID_MASK	0x3e000000
#define   MAL_ESR_CID_SHIFT	25
#define   MAL_ESR_DE		0x00100000
#define   MAL_ESR_OTE		0x00040000
#define   MAL_ESR_OSE		0x00020000
#define   MAL_ESR_PEIN		0x00010000
#define   MAL_ESR_DEI		0x00000010
#define   MAL_ESR_OTEI		0x00000004
#define   MAL_ESR_OSEI		0x00000002
#define   MAL_ESR_PBEI		0x00000001
#define   MAL1_ESR_ONE		0x00080000
#define   MAL1_ESR_ONEI		0x00000008
#define   MAL2_ESR_PTE		0x00800000
#define   MAL2_ESR_PRE		0x00400000
#define   MAL2_ESR_PWE		0x00200000
#define   MAL2_ESR_PTEI		0x00000080
#define   MAL2_ESR_PREI		0x00000040
#define   MAL2_ESR_PWEI		0x00000020
#define MAL_IER			0x02
#define   MAL_IER_DE		0x00000010
#define   MAL_IER_OTE		0x00000004
#define   MAL_IER_OE		0x00000002
#define   MAL_IER_PE		0x00000001
#define   MAL1_IER_NWE		0x00000008
#define   MAL1_IER_SOC_EVENTS	MAL1_IER_NWE
#define   MAL1_IER_EVENTS	(MAL1_IER_SOC_EVENTS | MAL_IER_DE | \
MAL_IER_OTE | MAL_IER_OE | MAL_IER_PE)
#define   MAL2_IER_PT		0x00000080
#define   MAL2_IER_PRE		0x00000040
#define   MAL2_IER_PWE		0x00000020
#define   MAL2_IER_SOC_EVENTS	(MAL2_IER_PT | MAL2_IER_PRE | MAL2_IER_PWE)
#define   MAL2_IER_EVENTS	(MAL2_IER_SOC_EVENTS | MAL_IER_DE | \
MAL_IER_OTE | MAL_IER_OE | MAL_IER_PE)
#define MAL_TXCASR		0x04
#define MAL_TXCARR		0x05
#define MAL_TXEOBISR		0x06
#define MAL_TXDEIR		0x07
#define MAL_RXCASR		0x10
#define MAL_RXCARR		0x11
#define MAL_RXEOBISR		0x12
#define MAL_RXDEIR		0x13
#define MAL_TXCTPR(n)		((n) + 0x20)
#define MAL_RXCTPR(n)		((n) + 0x40)
#define MAL_RCBS(n)		((n) + 0x60)
#define MAL_MAX_TX_SIZE		4080
#define MAL_MAX_RX_SIZE		4080
static inline int mal_rx_size(int len)
static inline int mal_tx_chunks(int len)
#define MAL_CHAN_MASK(n)	(0x80000000 >> (n))
struct mal_descriptor ;
#define MAL_RX_CTRL_EMPTY	0x8000
#define MAL_RX_CTRL_WRAP	0x4000
#define MAL_RX_CTRL_CM		0x2000
#define MAL_RX_CTRL_LAST	0x1000
#define MAL_RX_CTRL_FIRST	0x0800
#define MAL_RX_CTRL_INTR	0x0400
#define MAL_RX_CTRL_SINGLE	(MAL_RX_CTRL_LAST | MAL_RX_CTRL_FIRST)
#define MAL_IS_SINGLE_RX(ctrl)	(((ctrl) & MAL_RX_CTRL_SINGLE) == MAL_RX_CTRL_SINGLE)
#define MAL_TX_CTRL_READY	0x8000
#define MAL_TX_CTRL_WRAP	0x4000
#define MAL_TX_CTRL_CM		0x2000
#define MAL_TX_CTRL_LAST	0x1000
#define MAL_TX_CTRL_INTR	0x0400
struct mal_commac_ops ;
struct mal_commac ;
struct mal_instance ;
static inline u32 get_mal_dcrn(struct mal_instance *mal, int reg)
static inline void set_mal_dcrn(struct mal_instance *mal, int reg, u32 val)
#define MAL_FTR_CLEAR_ICINTSTAT	0x00000001
#define MAL_FTR_COMMON_ERR_INT	0x00000002
enum ;
static inline int mal_has_feature(struct mal_instance *dev,
unsigned long feature)
int mal_init(void);
void mal_exit(void);
int mal_register_commac(struct mal_instance *mal,
struct mal_commac *commac);
void mal_unregister_commac(struct mal_instance *mal,
struct mal_commac *commac);
int mal_set_rcbs(struct mal_instance *mal, int channel, unsigned long size);
int mal_tx_bd_offset(struct mal_instance *mal, int channel);
int mal_rx_bd_offset(struct mal_instance *mal, int channel);
void mal_enable_tx_channel(struct mal_instance *mal, int channel);
void mal_disable_tx_channel(struct mal_instance *mal, int channel);
void mal_enable_rx_channel(struct mal_instance *mal, int channel);
void mal_disable_rx_channel(struct mal_instance *mal, int channel);
void mal_poll_disable(struct mal_instance *mal, struct mal_commac *commac);
void mal_poll_enable(struct mal_instance *mal, struct mal_commac *commac);
void mal_poll_add(struct mal_instance *mal, struct mal_commac *commac);
void mal_poll_del(struct mal_instance *mal, struct mal_commac *commac);
struct mal_regs ;
int mal_get_regs_len(struct mal_instance *mal);
void *mal_dump_regs(struct mal_instance *mal, void *buf);
