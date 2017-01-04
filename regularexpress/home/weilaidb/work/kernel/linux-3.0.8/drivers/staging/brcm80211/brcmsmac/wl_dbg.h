#define _wl_dbg_h_
extern u32 wl_msg_level;
#define BCMMSG(dev, fmt, args...)		\
do  while (0)
#define   WL_AMPDU_UPDN_VAL	0x00000001
#define   WL_AMPDU_ERR_VAL	0x00000002
#define   WL_AMPDU_TX_VAL	0x00000004
#define   WL_AMPDU_RX_VAL	0x00000008
#define   WL_AMPDU_CTL_VAL	0x00000010
#define   WL_AMPDU_HW_VAL       0x00000020
#define   WL_AMPDU_HWTXS_VAL    0x00000040
#define   WL_AMPDU_HWDBG_VAL    0x00000080
extern u32 wl_ampdu_dbg;
#define WL_AMPDU_PRINT(level, fmt, args...)	\
do  while (0)
#define WL_AMPDU_UPDN(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_UPDN_VAL, fmt, ##args)
#define WL_AMPDU_RX(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_RX_VAL, fmt, ##args)
#define WL_AMPDU_ERR(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_ERR_VAL, fmt, ##args)
#define WL_AMPDU_TX(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_TX_VAL, fmt, ##args)
#define WL_AMPDU_CTL(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_CTL_VAL, fmt, ##args)
#define WL_AMPDU_HW(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_HW_VAL, fmt, ##args)
#define WL_AMPDU_HWTXS(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_HWTXS_VAL, fmt, ##args)
#define WL_AMPDU_HWDBG(fmt, args...)			\
WL_AMPDU_PRINT(WL_AMPDU_HWDBG_VAL, fmt, ##args)
#define WL_AMPDU_ERR_ON() (wl_ampdu_dbg & WL_AMPDU_ERR_VAL)
#define WL_AMPDU_HW_ON() (wl_ampdu_dbg & WL_AMPDU_HW_VAL)
#define WL_AMPDU_HWTXS_ON() (wl_ampdu_dbg & WL_AMPDU_HWTXS_VAL)
#define WL_AMPDU_UPDN(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_RX(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_ERR(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_TX(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_CTL(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_HW(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_HWTXS(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_HWDBG(fmt, args...)	no_printk(fmt, ##args)
#define WL_AMPDU_ERR_ON()       0
#define WL_AMPDU_HW_ON()        0
#define WL_AMPDU_HWTXS_ON()     0
#define WL_ERROR_ON()		(wl_msg_level & WL_ERROR_VAL)
