#define IWL_AC_UNSET -1
struct queue_to_fifo_ac ;
static const struct queue_to_fifo_ac iwlagn_default_queue_to_tx_fifo[] = ;
static const struct queue_to_fifo_ac iwlagn_ipan_queue_to_tx_fifo[] = ;
static struct iwl_wimax_coex_event_entry cu_priorities[COEX_NUM_OF_EVENTS] = ;
static int iwlagn_load_section(struct iwl_priv *priv, const char *name,
struct fw_desc *image, u32 dst_addr)
static int iwlagn_load_given_ucode(struct iwl_priv *priv,
struct fw_img *image)
static int iwlagn_set_Xtal_calib(struct iwl_priv *priv)
static int iwlagn_set_temperature_offset_calib(struct iwl_priv *priv)
static int iwlagn_send_calib_cfg(struct iwl_priv *priv)
void iwlagn_rx_calib_result(struct iwl_priv *priv,
struct iwl_rx_mem_buffer *rxb)
int iwlagn_init_alive_start(struct iwl_priv *priv)
static int iwlagn_send_wimax_coex(struct iwl_priv *priv)
static const u8 iwlagn_bt_prio_tbl[BT_COEX_PRIO_TBL_EVT_MAX] = ;
void iwlagn_send_prio_tbl(struct iwl_priv *priv)
int iwlagn_send_bt_env(struct iwl_priv *priv, u8 action, u8 type)
static int iwlagn_alive_notify(struct iwl_priv *priv)
static int iwlcore_verify_inst_sparse(struct iwl_priv *priv,
struct fw_desc *fw_desc)
static void iwl_print_mismatch_inst(struct iwl_priv *priv,
struct fw_desc *fw_desc)
static int iwl_verify_ucode(struct iwl_priv *priv, struct fw_img *img)
struct iwlagn_alive_data ;
static void iwlagn_alive_fn(struct iwl_priv *priv,
struct iwl_rx_packet *pkt,
void *data)
#define UCODE_ALIVE_TIMEOUT	HZ
#define UCODE_CALIB_TIMEOUT	(2*HZ)
int iwlagn_load_ucode_wait_alive(struct iwl_priv *priv,
struct fw_img *image,
int subtype, int alternate_subtype)
int iwlagn_run_init_ucode(struct iwl_priv *priv)
