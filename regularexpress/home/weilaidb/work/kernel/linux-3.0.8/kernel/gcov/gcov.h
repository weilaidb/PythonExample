#define GCOV_H GCOV_H
#define GCOV_COUNTERS		5
#define GCOV_DATA_MAGIC		((unsigned int) 0x67636461)
#define GCOV_TAG_FUNCTION	((unsigned int) 0x01000000)
#define GCOV_TAG_COUNTER_BASE	((unsigned int) 0x01a10000)
#define GCOV_TAG_FOR_COUNTER(count)					\
(GCOV_TAG_COUNTER_BASE + ((unsigned int) (count) << 17))
#if BITS_PER_LONG >= 64
typedef long gcov_type;
typedef long long gcov_type;
struct gcov_fn_info ;
struct gcov_ctr_info ;
struct gcov_info ;
enum gcov_action ;
void gcov_event(enum gcov_action action, struct gcov_info *info);
void gcov_enable_events(void);
struct seq_file;
struct gcov_iterator;
struct gcov_iterator *gcov_iter_new(struct gcov_info *info);
void gcov_iter_free(struct gcov_iterator *iter);
void gcov_iter_start(struct gcov_iterator *iter);
int gcov_iter_next(struct gcov_iterator *iter);
int gcov_iter_write(struct gcov_iterator *iter, struct seq_file *seq);
struct gcov_info *gcov_iter_get_info(struct gcov_iterator *iter);
void gcov_info_reset(struct gcov_info *info);
int gcov_info_is_compatible(struct gcov_info *info1, struct gcov_info *info2);
void gcov_info_add(struct gcov_info *dest, struct gcov_info *source);
struct gcov_info *gcov_info_dup(struct gcov_info *info);
void gcov_info_free(struct gcov_info *info);
struct gcov_link ;
extern const struct gcov_link gcov_link[];
