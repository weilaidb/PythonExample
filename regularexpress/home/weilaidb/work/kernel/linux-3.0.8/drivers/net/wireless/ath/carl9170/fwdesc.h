#define __CARL9170_SHARED_FWDESC_H
enum carl9170fw_feature_list ;
#define OTUS_MAGIC	"OTAR"
#define MOTD_MAGIC	"MOTD"
#define FIX_MAGIC	"FIX\0"
#define DBG_MAGIC	"DBG\0"
#define CHK_MAGIC	"CHK\0"
#define TXSQ_MAGIC	"TXSQ"
#define LAST_MAGIC	"LAST"
#define CARL9170FW_SET_DAY(d) (((d) - 1) % 31)
#define CARL9170FW_SET_MONTH(m) ((((m) - 1) % 12) * 31)
#define CARL9170FW_SET_YEAR(y) (((y) - 10) * 372)
#define CARL9170FW_GET_DAY(d) (((d) % 31) + 1)
#define CARL9170FW_GET_MONTH(m) ((((m) / 31) % 12) + 1)
#define CARL9170FW_GET_YEAR(y) ((y) / 372 + 10)
#define CARL9170FW_MAGIC_SIZE			4
struct carl9170fw_desc_head  __packed;
#define CARL9170FW_DESC_HEAD_SIZE			\
(sizeof(struct carl9170fw_desc_head))
#define CARL9170FW_OTUS_DESC_MIN_VER		6
#define CARL9170FW_OTUS_DESC_CUR_VER		6
struct carl9170fw_otus_desc  __packed;
#define CARL9170FW_OTUS_DESC_SIZE			\
(sizeof(struct carl9170fw_otus_desc))
#define CARL9170FW_MOTD_STRING_LEN			24
#define CARL9170FW_MOTD_RELEASE_LEN			20
#define CARL9170FW_MOTD_DESC_MIN_VER			1
#define CARL9170FW_MOTD_DESC_CUR_VER			2
struct carl9170fw_motd_desc  __packed;
#define CARL9170FW_MOTD_DESC_SIZE			\
(sizeof(struct carl9170fw_motd_desc))
#define CARL9170FW_FIX_DESC_MIN_VER			1
#define CARL9170FW_FIX_DESC_CUR_VER			2
struct carl9170fw_fix_entry  __packed;
struct carl9170fw_fix_desc  __packed;
#define CARL9170FW_FIX_DESC_SIZE			\
(sizeof(struct carl9170fw_fix_desc))
#define CARL9170FW_DBG_DESC_MIN_VER			1
#define CARL9170FW_DBG_DESC_CUR_VER			3
struct carl9170fw_dbg_desc  __packed;
#define CARL9170FW_DBG_DESC_SIZE			\
(sizeof(struct carl9170fw_dbg_desc))
#define CARL9170FW_CHK_DESC_MIN_VER			1
#define CARL9170FW_CHK_DESC_CUR_VER			2
struct carl9170fw_chk_desc  __packed;
#define CARL9170FW_CHK_DESC_SIZE			\
(sizeof(struct carl9170fw_chk_desc))
#define CARL9170FW_TXSQ_DESC_MIN_VER			1
#define CARL9170FW_TXSQ_DESC_CUR_VER			1
struct carl9170fw_txsq_desc  __packed;
#define CARL9170FW_TXSQ_DESC_SIZE			\
(sizeof(struct carl9170fw_txsq_desc))
#define CARL9170FW_LAST_DESC_MIN_VER			1
#define CARL9170FW_LAST_DESC_CUR_VER			2
struct carl9170fw_last_desc  __packed;
#define CARL9170FW_LAST_DESC_SIZE			\
(sizeof(struct carl9170fw_fix_desc))
#define CARL9170FW_DESC_MAX_LENGTH			8192
#define CARL9170FW_FILL_DESC(_magic, _length, _min_ver, _cur_ver)	\
.head =
static inline void carl9170fw_fill_desc(struct carl9170fw_desc_head *head,
u8 magic[CARL9170FW_MAGIC_SIZE],
__le16 length, u8 min_ver, u8 cur_ver)
#define carl9170fw_for_each_hdr(desc, fw_desc)				\
for (desc = fw_desc;						\
memcmp(desc->magic, LAST_MAGIC, CARL9170FW_MAGIC_SIZE) &&	\
le16_to_cpu(desc->length) >= CARL9170FW_DESC_HEAD_SIZE &&	\
le16_to_cpu(desc->length) < CARL9170FW_DESC_MAX_LENGTH;	\
desc = (void *)((unsigned long)desc + le16_to_cpu(desc->length)))
#define CHECK_HDR_VERSION(head, _min_ver)				\
(((head)->cur_ver < _min_ver) || ((head)->min_ver > _min_ver))	\
static inline bool carl9170fw_supports(__le32 list, u8 feature)
static inline bool carl9170fw_desc_cmp(const struct carl9170fw_desc_head *head,
const u8 descid[CARL9170FW_MAGIC_SIZE],
u16 min_len, u8 compatible_revision)
#define CARL9170FW_MIN_SIZE	32
#define CARL9170FW_MAX_SIZE	16384
static inline bool carl9170fw_size_check(unsigned int len)
