static const char fw_barker[] = "*WESTOPFORNOONE*";
static int iwm_fw_op_offset(struct iwm_priv *iwm, const struct firmware *fw,
u16 op_code, u32 index)
static int iwm_load_firmware_chunk(struct iwm_priv *iwm,
const struct firmware *fw,
struct iwm_fw_img_desc *img_desc)
static int iwm_load_img(struct iwm_priv *iwm, const char *img_name)
static int iwm_load_umac(struct iwm_priv *iwm)
static int iwm_load_lmac(struct iwm_priv *iwm, const char *img_name)
static int iwm_init_calib(struct iwm_priv *iwm, unsigned long cfg_bitmap,
unsigned long expected_bitmap, u8 rx_iq_cmd)
int iwm_load_fw(struct iwm_priv *iwm)
