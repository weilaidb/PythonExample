#define __DEBUG_H
struct hw_stat_reg_entry ;
#define	STAT_MAC_REG(reg)	\
#define	STAT_PTA_REG(reg)	\
#define	STAT_USB_REG(reg)	\
static const struct hw_stat_reg_entry hw_rx_tally_regs[] = ;
static const struct hw_stat_reg_entry hw_phy_errors_regs[] = ;
static const struct hw_stat_reg_entry hw_tx_tally_regs[] = ;
static const struct hw_stat_reg_entry hw_wlan_queue_regs[] = ;
static const struct hw_stat_reg_entry hw_ampdu_info_regs[] = ;
static const struct hw_stat_reg_entry hw_pta_queue_regs[] = ;
#define	DEFINE_TALLY(name)					\
u32 name##_sum[ARRAY_SIZE(name##_regs)],		\
name##_counter[ARRAY_SIZE(name##_regs)]		\
#define	DEFINE_STAT(name)					\
u32 name##_counter[ARRAY_SIZE(name##_regs)]		\
struct ath_stats ;
struct carl9170_debug_mem_rbe ;
#define	CARL9170_DEBUG_RING_SIZE			64
struct carl9170_debug ;
struct ar9170;
void carl9170_debugfs_register(struct ar9170 *ar);
void carl9170_debugfs_unregister(struct ar9170 *ar);
