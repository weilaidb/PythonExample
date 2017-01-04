#define _LINUX_NTFS_H
typedef enum  NTFS_CONSTANTS;
extern struct kmem_cache *ntfs_name_cache;
extern struct kmem_cache *ntfs_inode_cache;
extern struct kmem_cache *ntfs_big_inode_cache;
extern struct kmem_cache *ntfs_attr_ctx_cache;
extern struct kmem_cache *ntfs_index_ctx_cache;
extern const struct address_space_operations ntfs_aops;
extern const struct address_space_operations ntfs_mst_aops;
extern const struct  file_operations ntfs_file_ops;
extern const struct inode_operations ntfs_file_inode_ops;
extern const struct  file_operations ntfs_dir_ops;
extern const struct inode_operations ntfs_dir_inode_ops;
extern const struct  file_operations ntfs_empty_file_ops;
extern const struct inode_operations ntfs_empty_inode_ops;
extern const struct export_operations ntfs_export_ops;
static inline ntfs_volume *NTFS_SB(struct super_block *sb)
extern int ntfs_read_compressed_block(struct page *page);
extern int allocate_compression_buffers(void);
extern void free_compression_buffers(void);
#define default_upcase_len 0x10000
extern struct mutex ntfs_lock;
typedef struct  option_t;
extern const option_t on_errors_arr[];
extern int post_read_mst_fixup(NTFS_RECORD *b, const u32 size);
extern int pre_write_mst_fixup(NTFS_RECORD *b, const u32 size);
extern void post_write_mst_fixup(NTFS_RECORD *b);
extern bool ntfs_are_names_equal(const ntfschar *s1, size_t s1_len,
const ntfschar *s2, size_t s2_len,
const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_size);
extern int ntfs_collate_names(const ntfschar *name1, const u32 name1_len,
const ntfschar *name2, const u32 name2_len,
const int err_val, const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_len);
extern int ntfs_ucsncmp(const ntfschar *s1, const ntfschar *s2, size_t n);
extern int ntfs_ucsncasecmp(const ntfschar *s1, const ntfschar *s2, size_t n,
const ntfschar *upcase, const u32 upcase_size);
extern void ntfs_upcase_name(ntfschar *name, u32 name_len,
const ntfschar *upcase, const u32 upcase_len);
extern void ntfs_file_upcase_value(FILE_NAME_ATTR *file_name_attr,
const ntfschar *upcase, const u32 upcase_len);
extern int ntfs_file_compare_values(FILE_NAME_ATTR *file_name_attr1,
FILE_NAME_ATTR *file_name_attr2,
const int err_val, const IGNORE_CASE_BOOL ic,
const ntfschar *upcase, const u32 upcase_len);
extern int ntfs_nlstoucs(const ntfs_volume *vol, const char *ins,
const int ins_len, ntfschar **outs);
extern int ntfs_ucstonls(const ntfs_volume *vol, const ntfschar *ins,
const int ins_len, unsigned char **outs, int outs_len);
extern ntfschar *generate_default_upcase(void);
static inline int ntfs_ffs(int x)
