static int should_break(struct diff_filespec *src,
struct diff_filespec *dst,
int break_score,
int *merge_score_p)
void diffcore_break(int break_score)
static void merge_broken(struct diff_filepair *p,
struct diff_filepair *pp,
struct diff_queue_struct *outq)
void diffcore_merge_broken(void)
