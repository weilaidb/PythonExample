#define CHECKSUM_BYTES_NUM sizeof(u32)
static int iwmct_fw_parser_init(struct iwmct_priv *priv, const u8 *file,
size_t file_size, size_t block_size)
static bool iwmct_checksum(struct iwmct_priv *priv)
static int iwmct_parse_next_section(struct iwmct_priv *priv, const u8 **p_sec,
size_t *sec_size, __le32 *sec_addr)
static int iwmct_download_section(struct iwmct_priv *priv, const u8 *p_sec,
size_t sec_size, __le32 addr)
static int iwmct_kick_fw(struct iwmct_priv *priv, bool jump)
int iwmct_fw_load(struct iwmct_priv *priv)
