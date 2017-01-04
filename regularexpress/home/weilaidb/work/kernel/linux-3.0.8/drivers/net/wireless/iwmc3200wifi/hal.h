#define _IWM_HAL_H_
#define GET_VAL8(s, name)	((s >> name##_POS) & name##_SEED)
#define GET_VAL16(s, name)	((le16_to_cpu(s) >> name##_POS) & name##_SEED)
#define GET_VAL32(s, name)	((le32_to_cpu(s) >> name##_POS) & name##_SEED)
#define SET_VAL8(s, name, val)						  \
do  while (0)
#define SET_VAL16(s, name, val)						  \
do  while (0)
#define SET_VAL32(s, name, val)						  \
do  while (0)
#define UDMA_UMAC_INIT
#define UDMA_LMAC_INIT
#define UDMA_HDI_IN_NW_CMD_OPCODE_POS		0
#define UDMA_HDI_IN_NW_CMD_OPCODE_SEED		0xF
#define UDMA_IN_OPCODE_GENERAL_RESP		0x0
#define UDMA_IN_OPCODE_READ_RESP		0x1
#define UDMA_IN_OPCODE_WRITE_RESP		0x2
#define UDMA_IN_OPCODE_PERS_WRITE_RESP		0x5
#define UDMA_IN_OPCODE_PERS_READ_RESP		0x6
#define UDMA_IN_OPCODE_RD_MDFY_WR_RESP		0x7
#define UDMA_IN_OPCODE_EP_MNGMT_MSG		0x8
#define UDMA_IN_OPCODE_CRDT_CHNG_MSG		0x9
#define UDMA_IN_OPCODE_CNTRL_DATABASE_MSG	0xA
#define UDMA_IN_OPCODE_SW_MSG			0xB
#define UDMA_IN_OPCODE_WIFI			0xF
#define UDMA_IN_OPCODE_WIFI_LMAC		0x1F
#define UDMA_IN_OPCODE_WIFI_UMAC		0x2F
#define UDMA_HDI_OUT_NW_CMD_RESP_POS		9
#define UDMA_HDI_OUT_NW_CMD_RESP_SEED		0x1
#define UDMA_HDI_OUT_NW_CMD_HANDLE_BY_HW_POS	11
#define UDMA_HDI_OUT_NW_CMD_HANDLE_BY_HW_SEED	0x1
#define UDMA_HDI_OUT_NW_CMD_SEQ_NUM_POS		12
#define UDMA_HDI_OUT_NW_CMD_SEQ_NUM_SEED	0xF
#define UDMA_IN_NW_HW_SEQ_NUM_POS		12
#define UDMA_IN_NW_HW_SEQ_NUM_SEED		0xF
#define UDMA_IN_NW_HW_SIG_POS			16
#define UDMA_IN_NW_HW_SIG_SEED			0xFFFF
#define UDMA_IN_NW_HW_SIG			0xCBBC
#define UDMA_IN_NW_HW_LENGTH_SEED		0xF
#define UDMA_IN_NW_HW_LENGTH_POS		32
#define IWM_SDIO_FW_MAX_CHUNK_SIZE	2032
#define IWM_MAX_WIFI_HEADERS_SIZE	32
#define IWM_MAX_NONWIFI_HEADERS_SIZE	16
#define IWM_MAX_NONWIFI_CMD_BUFF_SIZE	(IWM_SDIO_FW_MAX_CHUNK_SIZE - \
IWM_MAX_NONWIFI_HEADERS_SIZE)
#define IWM_MAX_WIFI_CMD_BUFF_SIZE	(IWM_SDIO_FW_MAX_CHUNK_SIZE - \
IWM_MAX_WIFI_HEADERS_SIZE)
#define IWM_HAL_CONCATENATE_BUF_SIZE	(32 * 1024)
struct iwm_wifi_cmd_buff ;
struct iwm_nonwifi_cmd_buff ;
struct iwm_udma_nonwifi_cmd ;
struct iwm_udma_wifi_cmd ;
struct iwm_umac_cmd ;
struct iwm_lmac_cmd ;
struct iwm_nonwifi_cmd ;
struct iwm_wifi_cmd ;
void iwm_cmd_flush(struct iwm_priv *iwm);
struct iwm_wifi_cmd *iwm_get_pending_wifi_cmd(struct iwm_priv *iwm,
u16 seq_num);
struct iwm_nonwifi_cmd *iwm_get_pending_nonwifi_cmd(struct iwm_priv *iwm,
u8 seq_num, u8 cmd_opcode);
int iwm_hal_send_target_cmd(struct iwm_priv *iwm,
struct iwm_udma_nonwifi_cmd *ucmd,
const void *payload);
int iwm_hal_send_host_cmd(struct iwm_priv *iwm,
struct iwm_udma_wifi_cmd *udma_cmd,
struct iwm_umac_cmd *umac_cmd,
struct iwm_lmac_cmd *lmac_cmd,
const void *payload, u16 payload_size);
int iwm_hal_send_umac_cmd(struct iwm_priv *iwm,
struct iwm_udma_wifi_cmd *udma_cmd,
struct iwm_umac_cmd *umac_cmd,
const void *payload, u16 payload_size);
u16 iwm_alloc_wifi_cmd_seq(struct iwm_priv *iwm);
void iwm_udma_wifi_hdr_set_eop(struct iwm_priv *iwm, u8 *buf, u8 eop);
void iwm_build_udma_wifi_hdr(struct iwm_priv *iwm,
struct iwm_udma_out_wifi_hdr *hdr,
struct iwm_udma_wifi_cmd *cmd);
void iwm_build_umac_hdr(struct iwm_priv *iwm,
struct iwm_umac_fw_cmd_hdr *hdr,
struct iwm_umac_cmd *cmd);
