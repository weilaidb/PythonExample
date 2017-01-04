#define __REALTEK_FIRMWARE92S_H__
#define RTL8190_MAX_FIRMWARE_CODE_SIZE		64000
#define RTL8190_CPU_START_OFFSET		0x80
#define	MAX_FIRMWARE_CODE_SIZE			0xFF00
#define	RT_8192S_FIRMWARE_HDR_SIZE		80
#define RT_8192S_FIRMWARE_HDR_EXCLUDE_PRI_SIZE	32
#define MAX_DEV_ADDR_SIZE			8
#define MAX_FIRMWARE_INFORMATION_SIZE		32
#define MAX_802_11_HEADER_LENGTH		(40 + \
MAX_FIRMWARE_INFORMATION_SIZE)
#define ENCRYPTION_MAX_OVERHEAD			128
#define MAX_FRAGMENT_COUNT			8
#define MAX_TRANSMIT_BUFFER_SIZE		(1600 + \
(MAX_802_11_HEADER_LENGTH + \
ENCRYPTION_MAX_OVERHEAD) *\
MAX_FRAGMENT_COUNT)
#define H2C_TX_CMD_HDR_LEN			8
#define	FW_DIG_ENABLE_CTL			BIT(0)
#define	FW_HIGH_PWR_ENABLE_CTL			BIT(1)
#define	FW_SS_CTL				BIT(2)
#define	FW_RA_INIT_CTL				BIT(3)
#define	FW_RA_BG_CTL				BIT(4)
#define	FW_RA_N_CTL				BIT(5)
#define	FW_PWR_TRK_CTL				BIT(6)
#define	FW_IQK_CTL				BIT(7)
#define	FW_FA_CTL				BIT(8)
#define	FW_DRIVER_CTRL_DM_CTL			BIT(9)
#define	FW_PAPE_CTL_BY_SW_HW			BIT(10)
#define	FW_DISABLE_ALL_DM			0
#define	FW_PWR_TRK_PARAM_CLR			0x0000ffff
#define	FW_RA_PARAM_CLR				0xffff0000
enum desc_packet_type ;
struct fw_priv ;
struct fw_hdr  ;
enum fw_status ;
struct rt_firmware ;
struct h2c_set_pwrmode_parm ;
struct h2c_joinbss_rpt_parm  ;
struct h2c_wpa_ptk ;
struct h2c_wpa_two_way_parm  ;
enum h2c_cmd ;
enum fw_h2c_cmd ;
#define FW_CMD_IO_CLR(rtlpriv, _Bit)				\
do  while (0);
#define FW_CMD_IO_UPDATE(rtlpriv, _val)				\
rtlpriv->rtlhal.fwcmd_iomap = _val;
#define FW_CMD_IO_SET(rtlpriv, _val)				\
do  while (0);
#define FW_CMD_PARA_SET(rtlpriv, _val)				\
do  while (0);
#define FW_CMD_IO_QUERY(rtlpriv)				\
(u16)(rtlpriv->rtlhal.fwcmd_iomap)
#define FW_CMD_IO_PARA_QUERY(rtlpriv)				\
((u32)(rtlpriv->rtlhal.fwcmd_ioparam))
int rtl92s_download_fw(struct ieee80211_hw *hw);
void rtl92s_set_fw_pwrmode_cmd(struct ieee80211_hw *hw, u8 mode);
void rtl92s_set_fw_joinbss_report_cmd(struct ieee80211_hw *hw,
u8 mstatus, u8 ps_qosinfo);
