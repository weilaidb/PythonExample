#define _LINUX_REISER_FS_SB
typedef enum  reiserfs_super_block_flags;
#define sb_block_count(sbp)         (le32_to_cpu((sbp)->s_v1.s_block_count))
#define set_sb_block_count(sbp,v)   ((sbp)->s_v1.s_block_count = cpu_to_le32(v))
#define sb_free_blocks(sbp)         (le32_to_cpu((sbp)->s_v1.s_free_blocks))
#define set_sb_free_blocks(sbp,v)   ((sbp)->s_v1.s_free_blocks = cpu_to_le32(v))
#define sb_root_block(sbp)          (le32_to_cpu((sbp)->s_v1.s_root_block))
#define set_sb_root_block(sbp,v)    ((sbp)->s_v1.s_root_block = cpu_to_le32(v))
#define sb_jp_journal_1st_block(sbp)  \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_1st_block))
#define set_sb_jp_journal_1st_block(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_1st_block = cpu_to_le32(v))
#define sb_jp_journal_dev(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_dev))
#define set_sb_jp_journal_dev(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_dev = cpu_to_le32(v))
#define sb_jp_journal_size(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_size))
#define set_sb_jp_journal_size(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_size = cpu_to_le32(v))
#define sb_jp_journal_trans_max(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_trans_max))
#define set_sb_jp_journal_trans_max(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_trans_max = cpu_to_le32(v))
#define sb_jp_journal_magic(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_magic))
#define set_sb_jp_journal_magic(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_magic = cpu_to_le32(v))
#define sb_jp_journal_max_batch(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_max_batch))
#define set_sb_jp_journal_max_batch(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_max_batch = cpu_to_le32(v))
#define sb_jp_jourmal_max_commit_age(sbp) \
(le32_to_cpu((sbp)->s_v1.s_journal.jp_journal_max_commit_age))
#define set_sb_jp_journal_max_commit_age(sbp,v) \
((sbp)->s_v1.s_journal.jp_journal_max_commit_age = cpu_to_le32(v))
#define sb_blocksize(sbp)          (le16_to_cpu((sbp)->s_v1.s_blocksize))
#define set_sb_blocksize(sbp,v)    ((sbp)->s_v1.s_blocksize = cpu_to_le16(v))
#define sb_oid_maxsize(sbp)        (le16_to_cpu((sbp)->s_v1.s_oid_maxsize))
#define set_sb_oid_maxsize(sbp,v)  ((sbp)->s_v1.s_oid_maxsize = cpu_to_le16(v))
#define sb_oid_cursize(sbp)        (le16_to_cpu((sbp)->s_v1.s_oid_cursize))
#define set_sb_oid_cursize(sbp,v)  ((sbp)->s_v1.s_oid_cursize = cpu_to_le16(v))
#define sb_umount_state(sbp)       (le16_to_cpu((sbp)->s_v1.s_umount_state))
#define set_sb_umount_state(sbp,v) ((sbp)->s_v1.s_umount_state = cpu_to_le16(v))
#define sb_fs_state(sbp)           (le16_to_cpu((sbp)->s_v1.s_fs_state))
#define set_sb_fs_state(sbp,v)     ((sbp)->s_v1.s_fs_state = cpu_to_le16(v))
#define sb_hash_function_code(sbp) \
(le32_to_cpu((sbp)->s_v1.s_hash_function_code))
#define set_sb_hash_function_code(sbp,v) \
((sbp)->s_v1.s_hash_function_code = cpu_to_le32(v))
#define sb_tree_height(sbp)        (le16_to_cpu((sbp)->s_v1.s_tree_height))
#define set_sb_tree_height(sbp,v)  ((sbp)->s_v1.s_tree_height = cpu_to_le16(v))
#define sb_bmap_nr(sbp)            (le16_to_cpu((sbp)->s_v1.s_bmap_nr))
#define set_sb_bmap_nr(sbp,v)      ((sbp)->s_v1.s_bmap_nr = cpu_to_le16(v))
#define sb_version(sbp)            (le16_to_cpu((sbp)->s_v1.s_version))
#define set_sb_version(sbp,v)      ((sbp)->s_v1.s_version = cpu_to_le16(v))
#define sb_mnt_count(sbp)	   (le16_to_cpu((sbp)->s_mnt_count))
#define set_sb_mnt_count(sbp, v)   ((sbp)->s_mnt_count = cpu_to_le16(v))
#define sb_reserved_for_journal(sbp) \
(le16_to_cpu((sbp)->s_v1.s_reserved_for_journal))
#define set_sb_reserved_for_journal(sbp,v) \
((sbp)->s_v1.s_reserved_for_journal = cpu_to_le16(v))
#define JOURNAL_BLOCK_SIZE  4096
#define JOURNAL_MAX_CNODE   1500
#define JOURNAL_HASH_SIZE 8192
#define JOURNAL_NUM_BITMAPS 5
struct reiserfs_journal_cnode ;
struct reiserfs_bitmap_node ;
struct reiserfs_list_bitmap ;
struct reiserfs_journal_list ;
struct reiserfs_journal ;
enum journal_state_bits ;
#define JOURNAL_DESC_MAGIC "ReIsErLB"
typedef __u32(*hashf_t) (const signed char *, int);
struct reiserfs_bitmap_info ;
struct proc_dir_entry;
#if defined( CONFIG_PROC_FS ) && defined( CONFIG_REISERFS_PROC_INFO )
typedef unsigned long int stat_cnt_t;
typedef struct reiserfs_proc_info_data  reiserfs_proc_info_data_t;
typedef struct reiserfs_proc_info_data  reiserfs_proc_info_data_t;
struct reiserfs_sb_info ;
#define REISERFS_3_5 0
#define REISERFS_3_6 1
#define REISERFS_OLD_FORMAT 2
enum reiserfs_mount_options ;
#define reiserfs_r5_hash(s) (REISERFS_SB(s)->s_mount_opt & (1 << FORCE_R5_HASH))
#define reiserfs_rupasov_hash(s) (REISERFS_SB(s)->s_mount_opt & (1 << FORCE_RUPASOV_HASH))
#define reiserfs_tea_hash(s) (REISERFS_SB(s)->s_mount_opt & (1 << FORCE_TEA_HASH))
#define reiserfs_hash_detect(s) (REISERFS_SB(s)->s_mount_opt & (1 << FORCE_HASH_DETECT))
#define reiserfs_no_border(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_NO_BORDER))
#define reiserfs_no_unhashed_relocation(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_NO_UNHASHED_RELOCATION))
#define reiserfs_hashed_relocation(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_HASHED_RELOCATION))
#define reiserfs_test4(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_TEST4))
#define have_large_tails(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_LARGETAIL))
#define have_small_tails(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_SMALLTAIL))
#define replay_only(s) (REISERFS_SB(s)->s_mount_opt & (1 << REPLAYONLY))
#define reiserfs_attrs(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_ATTRS))
#define old_format_only(s) (REISERFS_SB(s)->s_properties & (1 << REISERFS_3_5))
#define convert_reiserfs(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_CONVERT))
#define reiserfs_data_log(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_DATA_LOG))
#define reiserfs_data_ordered(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_DATA_ORDERED))
#define reiserfs_data_writeback(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_DATA_WRITEBACK))
#define reiserfs_xattrs_user(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_XATTRS_USER))
#define reiserfs_posixacl(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_POSIXACL))
#define reiserfs_expose_privroot(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_EXPOSE_PRIVROOT))
#define reiserfs_xattrs_optional(s) (reiserfs_xattrs_user(s) || reiserfs_posixacl(s))
#define reiserfs_barrier_none(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_BARRIER_NONE))
#define reiserfs_barrier_flush(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_BARRIER_FLUSH))
#define reiserfs_error_panic(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_ERROR_PANIC))
#define reiserfs_error_ro(s) (REISERFS_SB(s)->s_mount_opt & (1 << REISERFS_ERROR_RO))
void reiserfs_file_buffer(struct buffer_head *bh, int list);
extern struct file_system_type reiserfs_fs_type;
int reiserfs_resize(struct super_block *, unsigned long);
#define CARRY_ON                0
#define SCHEDULE_OCCURRED       1
#define SB_BUFFER_WITH_SB(s) (REISERFS_SB(s)->s_sbh)
#define SB_JOURNAL(s) (REISERFS_SB(s)->s_journal)
#define SB_JOURNAL_1st_RESERVED_BLOCK(s) (SB_JOURNAL(s)->j_1st_reserved_block)
#define SB_JOURNAL_LEN_FREE(s) (SB_JOURNAL(s)->j_journal_len_free)
#define SB_AP_BITMAP(s) (REISERFS_SB(s)->s_ap_bitmap)
#define SB_DISK_JOURNAL_HEAD(s) (SB_JOURNAL(s)->j_header_bh->)
static inline char *reiserfs_bdevname(struct super_block *s)
#define reiserfs_is_journal_aborted(journal) (unlikely (__reiserfs_is_journal_aborted (journal)))
static inline int __reiserfs_is_journal_aborted(struct reiserfs_journal
*journal)
