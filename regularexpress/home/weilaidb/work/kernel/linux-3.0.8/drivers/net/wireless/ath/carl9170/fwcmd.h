#define __CARL9170_SHARED_FWCMD_H
#define	CARL9170_MAX_CMD_LEN		64
#define	CARL9170_MAX_CMD_PAYLOAD_LEN	60
#define CARL9170FW_API_MIN_VER		1
#define CARL9170FW_API_MAX_VER		1
enum carl9170_cmd_oids ;
struct carl9170_set_key_cmd  __packed __aligned(4);
#define CARL9170_SET_KEY_CMD_SIZE		28
struct carl9170_disable_key_cmd  __packed __aligned(4);
#define CARL9170_DISABLE_KEY_CMD_SIZE		4
struct carl9170_u32_list  __packed;
struct carl9170_reg_list  __packed;
struct carl9170_write_reg  __packed;
#define	CARL9170FW_PHY_HT_ENABLE		0x4
#define	CARL9170FW_PHY_HT_DYN2040		0x8
#define	CARL9170FW_PHY_HT_EXT_CHAN_OFF		0x3
#define	CARL9170FW_PHY_HT_EXT_CHAN_OFF_S	2
struct carl9170_rf_init  __packed;
#define CARL9170_RF_INIT_SIZE		28
struct carl9170_rf_init_result  __packed;
#define	CARL9170_RF_INIT_RESULT_SIZE	4
#define	CARL9170_PSM_SLEEP		0x1000
#define	CARL9170_PSM_SOFTWARE		0
#define	CARL9170_PSM_WAKE		0
#define	CARL9170_PSM_COUNTER		0xfff
#define	CARL9170_PSM_COUNTER_S		0
struct carl9170_psm  __packed;
#define CARL9170_PSM_SIZE		4
struct carl9170_rx_filter_cmd  __packed;
#define CARL9170_RX_FILTER_CMD_SIZE	4
#define CARL9170_RX_FILTER_BAD		0x01
#define CARL9170_RX_FILTER_OTHER_RA	0x02
#define CARL9170_RX_FILTER_DECRY_FAIL	0x04
#define CARL9170_RX_FILTER_CTL_OTHER	0x08
#define CARL9170_RX_FILTER_CTL_PSPOLL	0x10
#define CARL9170_RX_FILTER_CTL_BACKR	0x20
#define CARL9170_RX_FILTER_MGMT		0x40
#define CARL9170_RX_FILTER_DATA		0x80
#define CARL9170_RX_FILTER_EVERYTHING	(~0)
struct carl9170_bcn_ctrl_cmd  __packed;
#define CARL9170_BCN_CTRL_CMD_SIZE	16
#define CARL9170_BCN_CTRL_DRAIN	0
#define CARL9170_BCN_CTRL_CAB_TRIGGER	1
struct carl9170_cmd_head  __packed;
struct carl9170_cmd  __packed __aligned(4);
#define	CARL9170_TX_STATUS_QUEUE	3
#define	CARL9170_TX_STATUS_QUEUE_S	0
#define	CARL9170_TX_STATUS_RIX_S	2
#define	CARL9170_TX_STATUS_RIX		(3 << CARL9170_TX_STATUS_RIX_S)
#define	CARL9170_TX_STATUS_TRIES_S	4
#define	CARL9170_TX_STATUS_TRIES	(7 << CARL9170_TX_STATUS_TRIES_S)
#define	CARL9170_TX_STATUS_SUCCESS	0x80
struct carl9170_tx_status  __packed;
struct _carl9170_tx_status  __packed;
#define CARL9170_TX_STATUS_SIZE		2
#define	CARL9170_RSP_TX_STATUS_NUM	(CARL9170_MAX_CMD_PAYLOAD_LEN /	\
sizeof(struct _carl9170_tx_status))
#define	CARL9170_TX_MAX_RATE_TRIES	7
#define	CARL9170_TX_MAX_RATES		4
#define	CARL9170_TX_MAX_RETRY_RATES	(CARL9170_TX_MAX_RATES - 1)
#define	CARL9170_ERR_MAGIC		"ERR:"
#define	CARL9170_BUG_MAGIC		"BUG:"
struct carl9170_gpio  __packed;
#define CARL9170_GPIO_SIZE		4
struct carl9170_tsf_rsp  __packed;
#define CARL9170_TSF_RSP_SIZE		8
struct carl9170_rsp  __packed __aligned(4);
