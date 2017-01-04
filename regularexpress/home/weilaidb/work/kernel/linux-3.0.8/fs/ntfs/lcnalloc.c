int ntfs_cluster_free_from_rl_nolock(ntfs_volume *vol,
const runlist_element *rl)
runlist_element *ntfs_cluster_alloc(ntfs_volume *vol, const VCN start_vcn,
const s64 count, const LCN start_lcn,
const NTFS_CLUSTER_ALLOCATION_ZONES zone,
const bool is_extension)
s64 __ntfs_cluster_free(ntfs_inode *ni, const VCN start_vcn, s64 count,
ntfs_attr_search_ctx *ctx, const bool is_rollback)
