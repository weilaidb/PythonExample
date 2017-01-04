#define _LINUX_NTFS_RUNLIST_H
typedef struct  runlist_element;
typedef struct  runlist;
static inline void ntfs_init_runlist(runlist *rl)
typedef enum  LCN_SPECIAL_VALUES;
extern runlist_element *ntfs_runlists_merge(runlist_element *drl,
runlist_element *srl);
extern runlist_element *ntfs_mapping_pairs_decompress(const ntfs_volume *vol,
const ATTR_RECORD *attr, runlist_element *old_rl);
extern LCN ntfs_rl_vcn_to_lcn(const runlist_element *rl, const VCN vcn);
extern runlist_element *ntfs_rl_find_vcn_nolock(runlist_element *rl,
const VCN vcn);
extern int ntfs_get_size_for_mapping_pairs(const ntfs_volume *vol,
const runlist_element *rl, const VCN first_vcn,
const VCN last_vcn);
extern int ntfs_mapping_pairs_build(const ntfs_volume *vol, s8 *dst,
const int dst_len, const runlist_element *rl,
const VCN first_vcn, const VCN last_vcn, VCN *const stop_vcn);
extern int ntfs_rl_truncate_nolock(const ntfs_volume *vol,
runlist *const runlist, const s64 new_length);
int ntfs_rl_punch_nolock(const ntfs_volume *vol, runlist *const runlist,
const VCN start, const s64 length);
