const struct gcov_link gcov_link[] = ;
static int counter_active(struct gcov_info *info, unsigned int type)
static unsigned int num_counter_active(struct gcov_info *info)
void gcov_info_reset(struct gcov_info *info)
int gcov_info_is_compatible(struct gcov_info *info1, struct gcov_info *info2)
void gcov_info_add(struct gcov_info *dest, struct gcov_info *source)
static size_t get_fn_size(struct gcov_info *info)
static struct gcov_fn_info *get_fn_info(struct gcov_info *info, unsigned int fn)
struct gcov_info *gcov_info_dup(struct gcov_info *info)
void gcov_info_free(struct gcov_info *info)
struct type_info ;
struct gcov_iterator ;
static struct gcov_fn_info *get_func(struct gcov_iterator *iter)
static struct type_info *get_type(struct gcov_iterator *iter)
struct gcov_iterator *gcov_iter_new(struct gcov_info *info)
void gcov_iter_free(struct gcov_iterator *iter)
struct gcov_info *gcov_iter_get_info(struct gcov_iterator *iter)
void gcov_iter_start(struct gcov_iterator *iter)
#define RECORD_FILE_MAGIC	0
#define RECORD_GCOV_VERSION	1
#define RECORD_TIME_STAMP	2
#define RECORD_FUNCTION_TAG	3
#define RECORD_FUNCTON_TAG_LEN	4
#define RECORD_FUNCTION_IDENT	5
#define RECORD_FUNCTION_CHECK	6
#define RECORD_COUNT_TAG	7
#define RECORD_COUNT_LEN	8
#define RECORD_COUNT		9
int gcov_iter_next(struct gcov_iterator *iter)
static int seq_write_gcov_u32(struct seq_file *seq, u32 v)
static int seq_write_gcov_u64(struct seq_file *seq, u64 v)
int gcov_iter_write(struct gcov_iterator *iter, struct seq_file *seq)
