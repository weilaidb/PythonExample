#define _LINUX_NTFS_ATTRIB_H
typedef struct  ntfs_attr_search_ctx;
extern int ntfs_map_runlist_nolock(ntfs_inode *ni, VCN vcn,
ntfs_attr_search_ctx *ctx);
extern int ntfs_map_runlist(ntfs_inode *ni, VCN vcn);
extern LCN ntfs_attr_vcn_to_lcn_nolock(ntfs_inode *ni, const VCN vcn,
const bool write_locked);
extern runlist_element *ntfs_attr_find_vcn_nolock(ntfs_inode *ni,
const VCN vcn, ntfs_attr_search_ctx *ctx);
int ntfs_attr_lookup(const ATTR_TYPE type, const ntfschar *name,
const u32 name_len, const IGNORE_CASE_BOOL ic,
const VCN lowest_vcn, const u8 *val, const u32 val_len,
ntfs_attr_search_ctx *ctx);
extern int load_attribute_list(ntfs_volume *vol, runlist *rl, u8 *al_start,
const s64 size, const s64 initialized_size);
static inline s64 ntfs_attr_size(const ATTR_RECORD *a)
extern void ntfs_attr_reinit_search_ctx(ntfs_attr_search_ctx *ctx);
extern ntfs_attr_search_ctx *ntfs_attr_get_search_ctx(ntfs_inode *ni,
MFT_RECORD *mrec);
extern void ntfs_attr_put_search_ctx(ntfs_attr_search_ctx *ctx);
extern int ntfs_attr_size_bounds_check(const ntfs_volume *vol,
const ATTR_TYPE type, const s64 size);
extern int ntfs_attr_can_be_non_resident(const ntfs_volume *vol,
const ATTR_TYPE type);
extern int ntfs_attr_can_be_resident(const ntfs_volume *vol,
const ATTR_TYPE type);
extern int ntfs_attr_record_resize(MFT_RECORD *m, ATTR_RECORD *a, u32 new_size);
extern int ntfs_resident_attr_value_resize(MFT_RECORD *m, ATTR_RECORD *a,
const u32 new_size);
extern int ntfs_attr_make_non_resident(ntfs_inode *ni, const u32 data_size);
extern s64 ntfs_attr_extend_allocation(ntfs_inode *ni, s64 new_alloc_size,
const s64 new_data_size, const s64 data_start);
extern int ntfs_attr_set(ntfs_inode *ni, const s64 ofs, const s64 cnt,
const u8 val);
