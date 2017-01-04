#define __RTL_DEBUG_H__
#define DBG_EMERG			0
#define	DBG_WARNING			2
#define DBG_DMESG			3
#define DBG_LOUD			4
#define	DBG_TRACE			5
#define COMP_ERR			BIT(0)
#define COMP_FW				BIT(1)
#define COMP_INIT			BIT(2)
#define COMP_RECV			BIT(3)
#define COMP_SEND			BIT(4)
#define COMP_MLME			BIT(5)
#define COMP_SCAN			BIT(6)
#define COMP_INTR			BIT(7)
#define COMP_LED			BIT(8)
#define COMP_SEC			BIT(9)
#define COMP_BEACON			BIT(10)
#define COMP_RATE			BIT(11)
#define COMP_RXDESC			BIT(12)
#define COMP_DIG			BIT(13)
#define COMP_TXAGC			BIT(14)
#define COMP_HIPWR			BIT(15)
#define COMP_POWER			BIT(16)
#define COMP_POWER_TRACKING	BIT(17)
#define COMP_BB_POWERSAVING	BIT(18)
#define COMP_SWAS			BIT(19)
#define COMP_RF				BIT(20)
#define COMP_TURBO			BIT(21)
#define COMP_RATR			BIT(22)
#define COMP_CMD			BIT(23)
#define COMP_EFUSE			BIT(24)
#define COMP_QOS			BIT(25)
#define COMP_MAC80211		BIT(26)
#define COMP_REGD			BIT(27)
#define COMP_CHAN			BIT(28)
#define COMP_USB			BIT(29)
#define EEPROM_W			BIT(0)
#define EFUSE_PG			BIT(1)
#define EFUSE_READ_ALL		BIT(2)
#define	INIT_EEPROM			BIT(0)
#define	INIT_TxPower		BIT(1)
#define	INIT_IQK			BIT(2)
#define	INIT_RF				BIT(3)
#define	PHY_BBR				BIT(0)
#define	PHY_BBW				BIT(1)
#define	PHY_RFR				BIT(2)
#define	PHY_RFW				BIT(3)
#define	PHY_MACR			BIT(4)
#define	PHY_MACW			BIT(5)
#define	PHY_ALLR			BIT(6)
#define	PHY_ALLW			BIT(7)
#define	PHY_TXPWR			BIT(8)
#define	PHY_PWRDIFF			BIT(9)
enum dbgp_flag_e ;
#define RT_ASSERT(_exp, fmt)				\
do  while (0);
#define RT_TRACE(rtlpriv, comp, level, fmt)\
do  while (0);
#define RTPRINT(rtlpriv, dbgtype, dbgflag, printstr)	\
do  while (0);
#define RT_PRINT_DATA(rtlpriv, _comp, _level, _titlestring, _hexdata, \
_hexdatalen) \
do  while (0);
#define MAC_FMT "%02x:%02x:%02x:%02x:%02x:%02x"
#define MAC_ARG(x) \
((u8 *)(x))[0], ((u8 *)(x))[1], ((u8 *)(x))[2],\
((u8 *)(x))[3], ((u8 *)(x))[4], ((u8 *)(x))[5]
void rtl_dbgp_flag_init(struct ieee80211_hw *hw);
