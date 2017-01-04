#define LL_MERGE_H
struct ll_merge_options ;
int ll_merge(mmbuffer_t *result_buf,
const char *path,
mmfile_t *ancestor, const char *ancestor_label,
mmfile_t *ours, const char *our_label,
mmfile_t *theirs, const char *their_label,
const struct ll_merge_options *opts);
int ll_merge_marker_size(const char *path);
