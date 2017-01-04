int ntfs_map_runlist_nolock(ntfs_inode *ni, VCN vcn, ntfs_attr_search_ctx *ctx)
int ntfs_map_runlist(ntfs_inode *ni, VCN vcn)
LCN ntfs_attr_vcn_to_lcn_nolock(ntfs_inode *ni, const VCN vcn,
const bool write_locked)
runlist_element *ntfs_attr_find_vcn_nolock(ntfs_inode *ni, const VCN vcn,
ntfs_attr_search_ctx *ctx)
static int ntfs_attr_find(const ATTR_TYPE type, const ntfschar *name,
const u32 name_len, const IGNORE_CASE_BOOL ic,
const u8 *val, const u32 val_len, ntfs_attr_search_ctx *ctx)
int load_attribute_list(ntfs_volume *vol, runlist *runlist, u8 *al_start,
const s64 size, const s64 initialized_size)
static int ntfs_external_attr_find(const ATTR_TYPE type,
const ntfschar *name, const u32 name_len,
const IGNORE_CASE_BOOL ic, const VCN lowest_vcn,
const u8 *val, const u32 val_len, ntfs_attr_search_ctx *ctx)
int ntfs_attr_lookup(const ATTR_TYPE type, const ntfschar *name,
const u32 name_len, const IGNORE_CASE_BOOL ic,
const VCN lowest_vcn, const u8 *val, const u32 val_len,
ntfs_attr_search_ctx *ctx)
static inline void ntfs_attr_init_search_ctx(ntfs_attr_search_ctx *ctx,
ntfs_inode *ni, MFT_RECORD *mrec)
void ntfs_attr_reinit_search_ctx(ntfs_attr_search_ctx *ctx)
ntfs_attr_search_ctx *ntfs_attr_get_search_ctx(ntfs_inode *ni, MFT_RECORD *mrec)
void ntfs_attr_put_search_ctx(ntfs_attr_search_ctx *ctx)
static ATTR_DEF *ntfs_attr_find_in_attrdef(const ntfs_volume *vol,
const ATTR_TYPE type)
int ntfs_attr_size_bounds_check(const ntfs_volume *vol, const ATTR_TYPE type,
const s64 size)
int ntfs_attr_can_be_non_resident(const ntfs_volume *vol, const ATTR_TYPE type)
int ntfs_attr_can_be_resident(const ntfs_volume *vol, const ATTR_TYPE type)
int ntfs_attr_record_resize(MFT_RECORD *m, ATTR_RECORD *a, u32 new_size)
int ntfs_resident_attr_value_resize(MFT_RECORD *m, ATTR_RECORD *a,
const u32 new_size)
int ntfs_attr_make_non_resident(ntfs_inode *ni, const u32 data_size)
s64 ntfs_attr_extend_allocation(ntfs_inode *ni, s64 new_alloc_size,
const s64 new_data_size, const s64 data_start)
int ntfs_attr_set(ntfs_inode *ni, const s64 ofs, const s64 cnt, const u8 val)
