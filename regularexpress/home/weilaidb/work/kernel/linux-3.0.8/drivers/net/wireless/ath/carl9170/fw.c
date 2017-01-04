#define MAKE_STR(symbol) #symbol
#define TO_STR(symbol) MAKE_STR(symbol)
#define CARL9170FW_API_VER_STR TO_STR(CARL9170FW_API_MAX_VER)
MODULE_VERSION(CARL9170FW_API_VER_STR ":" CARL9170FW_VERSION_GIT);
static const u8 otus_magic[4] = ;
static const void *carl9170_fw_find_desc(struct ar9170 *ar, const u8 descid[4],
const unsigned int len, const u8 compatible_revision)
static int carl9170_fw_verify_descs(struct ar9170 *ar,
const struct carl9170fw_desc_head *head, unsigned int max_len)
static void carl9170_fw_info(struct ar9170 *ar)
static bool valid_dma_addr(const u32 address)
static bool valid_cpu_addr(const u32 address)
static int carl9170_fw(struct ar9170 *ar, const __u8 *data, size_t len)
static struct carl9170fw_desc_head *
carl9170_find_fw_desc(struct ar9170 *ar, const __u8 *fw_data, const size_t len)
int carl9170_fw_fix_eeprom(struct ar9170 *ar)
int carl9170_parse_firmware(struct ar9170 *ar)
