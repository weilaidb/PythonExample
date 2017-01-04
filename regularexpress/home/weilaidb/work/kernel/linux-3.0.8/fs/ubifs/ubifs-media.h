#define __UBIFS_MEDIA_H__
#define UBIFS_NODE_MAGIC  0x06101831
#define UBIFS_FORMAT_VERSION 4
#define UBIFS_RO_COMPAT_VERSION 0
#define UBIFS_MIN_LEB_SZ (15*1024)
#define UBIFS_CRC32_INIT 0xFFFFFFFFU
#define UBIFS_MIN_COMPR_LEN 128
#define UBIFS_MIN_COMPRESS_DIFF 64
#define UBIFS_ROOT_INO 1
#define UBIFS_FIRST_INO 64
#define UBIFS_MAX_NLEN 255
#define UBIFS_MAX_JHEADS 1
#define UBIFS_BLOCK_SIZE  4096
#define UBIFS_BLOCK_SHIFT 12
#define UBIFS_PADDING_BYTE 0xCE
#define UBIFS_MAX_KEY_LEN 16
#define UBIFS_SK_LEN 8
#define UBIFS_MIN_FANOUT 3
#define UBIFS_MAX_LEVELS 512
#define UBIFS_MAX_INO_DATA UBIFS_BLOCK_SIZE
#define UBIFS_LPT_FANOUT 4
#define UBIFS_LPT_FANOUT_SHIFT 2
#define UBIFS_LPT_CRC_BITS 16
#define UBIFS_LPT_CRC_BYTES 2
#define UBIFS_LPT_TYPE_BITS 4
#define UBIFS_KEY_OFFSET offsetof(struct ubifs_ino_node, key)
#define UBIFS_GC_HEAD   0
#define UBIFS_BASE_HEAD 1
#define UBIFS_DATA_HEAD 2
enum ;
enum ;
enum ;
enum ;
#define UBIFS_S_KEY_BLOCK_BITS 29
#define UBIFS_S_KEY_BLOCK_MASK 0x1FFFFFFF
#define UBIFS_S_KEY_HASH_BITS  UBIFS_S_KEY_BLOCK_BITS
#define UBIFS_S_KEY_HASH_MASK  UBIFS_S_KEY_BLOCK_MASK
enum ;
#define UBIFS_SB_LEBS 1
#define UBIFS_MST_LEBS 2
#define UBIFS_SB_LNUM 0
#define UBIFS_MST_LNUM (UBIFS_SB_LNUM + UBIFS_SB_LEBS)
#define UBIFS_LOG_LNUM (UBIFS_MST_LNUM + UBIFS_MST_LEBS)
#define UBIFS_MIN_LOG_LEBS 2
#define UBIFS_MIN_BUD_LEBS 3
#define UBIFS_MIN_JNL_LEBS (UBIFS_MIN_LOG_LEBS + UBIFS_MIN_BUD_LEBS)
#define UBIFS_MIN_LPT_LEBS 2
#define UBIFS_MIN_ORPH_LEBS 1
#define UBIFS_MIN_MAIN_LEBS (UBIFS_MIN_BUD_LEBS + 6)
#define UBIFS_MIN_LEB_CNT (UBIFS_SB_LEBS + UBIFS_MST_LEBS + \
UBIFS_MIN_LOG_LEBS + UBIFS_MIN_LPT_LEBS + \
UBIFS_MIN_ORPH_LEBS + UBIFS_MIN_MAIN_LEBS)
#define UBIFS_CH_SZ        sizeof(struct ubifs_ch)
#define UBIFS_INO_NODE_SZ  sizeof(struct ubifs_ino_node)
#define UBIFS_DATA_NODE_SZ sizeof(struct ubifs_data_node)
#define UBIFS_DENT_NODE_SZ sizeof(struct ubifs_dent_node)
#define UBIFS_TRUN_NODE_SZ sizeof(struct ubifs_trun_node)
#define UBIFS_PAD_NODE_SZ  sizeof(struct ubifs_pad_node)
#define UBIFS_SB_NODE_SZ   sizeof(struct ubifs_sb_node)
#define UBIFS_MST_NODE_SZ  sizeof(struct ubifs_mst_node)
#define UBIFS_REF_NODE_SZ  sizeof(struct ubifs_ref_node)
#define UBIFS_IDX_NODE_SZ  sizeof(struct ubifs_idx_node)
#define UBIFS_CS_NODE_SZ   sizeof(struct ubifs_cs_node)
#define UBIFS_ORPH_NODE_SZ sizeof(struct ubifs_orph_node)
#define UBIFS_XENT_NODE_SZ UBIFS_DENT_NODE_SZ
#define UBIFS_BRANCH_SZ    sizeof(struct ubifs_branch)
#define UBIFS_MAX_DATA_NODE_SZ  (UBIFS_DATA_NODE_SZ + UBIFS_BLOCK_SIZE)
#define UBIFS_MAX_INO_NODE_SZ   (UBIFS_INO_NODE_SZ + UBIFS_MAX_INO_DATA)
#define UBIFS_MAX_DENT_NODE_SZ  (UBIFS_DENT_NODE_SZ + UBIFS_MAX_NLEN + 1)
#define UBIFS_MAX_XENT_NODE_SZ  UBIFS_MAX_DENT_NODE_SZ
#define UBIFS_MAX_NODE_SZ UBIFS_MAX_INO_NODE_SZ
enum ;
#define UBIFS_FL_MASK 0x0000001F
enum ;
enum ;
enum ;
enum ;
enum ;
struct ubifs_ch  __packed;
union ubifs_dev_desc  __packed;
struct ubifs_ino_node  __packed;
struct ubifs_dent_node  __packed;
struct ubifs_data_node  __packed;
struct ubifs_trun_node  __packed;
struct ubifs_pad_node  __packed;
struct ubifs_sb_node  __packed;
struct ubifs_mst_node  __packed;
struct ubifs_ref_node  __packed;
struct ubifs_branch  __packed;
struct ubifs_idx_node  __packed;
struct ubifs_cs_node  __packed;
struct ubifs_orph_node  __packed;
