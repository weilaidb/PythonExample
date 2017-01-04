static inline void ntfs_rl_mm(runlist_element *base, int dst, int src,
int size)
static inline void ntfs_rl_mc(runlist_element *dstbase, int dst,
runlist_element *srcbase, int src, int size)
static inline runlist_element *ntfs_rl_realloc(runlist_element *rl,
int old_size, int new_size)
static inline runlist_element *ntfs_rl_realloc_nofail(runlist_element *rl,
int old_size, int new_size)
static inline bool ntfs_are_rl_mergeable(runlist_element *dst,
runlist_element *src)
static inline void __ntfs_rl_merge(runlist_element *dst, runlist_element *src)
static inline runlist_element *ntfs_rl_append(runlist_element *dst,
int dsize, runlist_element *src, int ssize, int loc)
static inline runlist_element *ntfs_rl_insert(runlist_element *dst,
int dsize, runlist_element *src, int ssize, int loc)
static inline runlist_element *ntfs_rl_replace(runlist_element *dst,
int dsize, runlist_element *src, int ssize, int loc)
static inline runlist_element *ntfs_rl_split(runlist_element *dst, int dsize,
runlist_element *src, int ssize, int loc)
runlist_element *ntfs_runlists_merge(runlist_element *drl,
runlist_element *srl)
runlist_element *ntfs_mapping_pairs_decompress(const ntfs_volume *vol,
const ATTR_RECORD *attr, runlist_element *old_rl)
LCN ntfs_rl_vcn_to_lcn(const runlist_element *rl, const VCN vcn)
runlist_element *ntfs_rl_find_vcn_nolock(runlist_element *rl, const VCN vcn)
static inline int ntfs_get_nr_significant_bytes(const s64 n)
int ntfs_get_size_for_mapping_pairs(const ntfs_volume *vol,
const runlist_element *rl, const VCN first_vcn,
const VCN last_vcn)
static inline int ntfs_write_significant_bytes(s8 *dst, const s8 *dst_max,
const s64 n)
int ntfs_mapping_pairs_build(const ntfs_volume *vol, s8 *dst,
const int dst_len, const runlist_element *rl,
const VCN first_vcn, const VCN last_vcn, VCN *const stop_vcn)
int ntfs_rl_truncate_nolock(const ntfs_volume *vol, runlist *const runlist,
const s64 new_length)
int ntfs_rl_punch_nolock(const ntfs_volume *vol, runlist *const runlist,
const VCN start, const s64 length)
