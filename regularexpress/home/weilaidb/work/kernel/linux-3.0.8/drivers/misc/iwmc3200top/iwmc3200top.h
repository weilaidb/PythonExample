#define __IWMC3200TOP_H__
#define DRV_NAME "iwmc3200top"
#define FW_API_VER 1
#define _FW_NAME(api) DRV_NAME "." #api ".fw"
#define FW_NAME(api) _FW_NAME(api)
#define IWMC_SDIO_BLK_SIZE			256
#define IWMC_DEFAULT_TR_BLK			64
#define IWMC_SDIO_DATA_ADDR			0x0
#define IWMC_SDIO_INTR_ENABLE_ADDR		0x14
#define IWMC_SDIO_INTR_STATUS_ADDR		0x13
#define IWMC_SDIO_INTR_CLEAR_ADDR		0x13
#define IWMC_SDIO_INTR_GET_SIZE_ADDR		0x2C
#define COMM_HUB_HEADER_LENGTH 16
#define LOGGER_HEADER_LENGTH   10
#define BARKER_DNLOAD_BT_POS		0
#define BARKER_DNLOAD_BT_MSK		BIT(BARKER_DNLOAD_BT_POS)
#define BARKER_DNLOAD_GPS_POS		1
#define BARKER_DNLOAD_GPS_MSK		BIT(BARKER_DNLOAD_GPS_POS)
#define BARKER_DNLOAD_TOP_POS		2
#define BARKER_DNLOAD_TOP_MSK		BIT(BARKER_DNLOAD_TOP_POS)
#define BARKER_DNLOAD_RESERVED1_POS	3
#define BARKER_DNLOAD_RESERVED1_MSK	BIT(BARKER_DNLOAD_RESERVED1_POS)
#define BARKER_DNLOAD_JUMP_POS		4
#define BARKER_DNLOAD_JUMP_MSK		BIT(BARKER_DNLOAD_JUMP_POS)
#define BARKER_DNLOAD_SYNC_POS		5
#define BARKER_DNLOAD_SYNC_MSK		BIT(BARKER_DNLOAD_SYNC_POS)
#define BARKER_DNLOAD_RESERVED2_POS	6
#define BARKER_DNLOAD_RESERVED2_MSK	(0x3 << BARKER_DNLOAD_RESERVED2_POS)
#define BARKER_DNLOAD_BARKER_POS	8
#define BARKER_DNLOAD_BARKER_MSK	(0xffffff << BARKER_DNLOAD_BARKER_POS)
#define IWMC_BARKER_REBOOT 	(0xdeadbe << BARKER_DNLOAD_BARKER_POS)
#define IWMC_BARKER_ACK 	0xfeedbabe
#define IWMC_CMD_SIGNATURE 	0xcbbc
#define CMD_HDR_OPCODE_POS		0
#define CMD_HDR_OPCODE_MSK_MSK		(0xf << CMD_HDR_OPCODE_MSK_POS)
#define CMD_HDR_RESPONSE_CODE_POS	4
#define CMD_HDR_RESPONSE_CODE_MSK	(0xf << CMD_HDR_RESPONSE_CODE_POS)
#define CMD_HDR_USE_CHECKSUM_POS	8
#define CMD_HDR_USE_CHECKSUM_MSK	BIT(CMD_HDR_USE_CHECKSUM_POS)
#define CMD_HDR_RESPONSE_REQUIRED_POS	9
#define CMD_HDR_RESPONSE_REQUIRED_MSK	BIT(CMD_HDR_RESPONSE_REQUIRED_POS)
#define CMD_HDR_DIRECT_ACCESS_POS	10
#define CMD_HDR_DIRECT_ACCESS_MSK	BIT(CMD_HDR_DIRECT_ACCESS_POS)
#define CMD_HDR_RESERVED_POS		11
#define CMD_HDR_RESERVED_MSK		BIT(0x1f << CMD_HDR_RESERVED_POS)
#define CMD_HDR_SIGNATURE_POS		16
#define CMD_HDR_SIGNATURE_MSK		BIT(0xffff << CMD_HDR_SIGNATURE_POS)
enum ;
struct iwmct_fw_load_hdr ;
struct iwmct_fw_hdr ;
struct iwmct_fw_sec_hdr ;
struct iwmct_parser ;
struct iwmct_work_struct ;
struct iwmct_dbg ;
struct iwmct_debugfs;
struct iwmct_priv ;
extern int iwmct_tx(struct iwmct_priv *priv, void *src, int count);
extern int iwmct_fw_load(struct iwmct_priv *priv);
extern void iwmct_dbg_init_params(struct iwmct_priv *drv);
extern void iwmct_dbg_init_drv_attrs(struct device_driver *drv);
extern void iwmct_dbg_remove_drv_attrs(struct device_driver *drv);
extern int iwmct_send_hcmd(struct iwmct_priv *priv, u8 *cmd, u16 len);
