#define DIFFCORE_H
#define MAX_SCORE 60000.0
#define DEFAULT_RENAME_SCORE 30000
#define DEFAULT_BREAK_SCORE  30000
#define DEFAULT_MERGE_SCORE  36000
#define MINIMUM_BREAK_SIZE     400
struct userdiff_driver;
struct diff_filespec ;
extern struct diff_filespec *alloc_filespec(const char *);
extern void free_filespec(struct diff_filespec *);
extern void fill_filespec(struct diff_filespec *, const unsigned char *,
int, unsigned short);
extern int diff_populate_filespec(struct diff_filespec *, int);
extern void diff_free_filespec_data(struct diff_filespec *);
extern void diff_free_filespec_blob(struct diff_filespec *);
extern int diff_filespec_is_binary(struct diff_filespec *);
struct diff_filepair ;
#define DIFF_PAIR_UNMERGED(p) ((p)->is_unmerged)
#define DIFF_PAIR_RENAME(p) ((p)->renamed_pair)
#define DIFF_PAIR_BROKEN(p) \
( (!DIFF_FILE_VALID((p)->one) != !DIFF_FILE_VALID((p)->two)) && \
((p)->broken_pair != 0) )
#define DIFF_PAIR_TYPE_CHANGED(p) \
((S_IFMT & (p)->one->mode) != (S_IFMT & (p)->two->mode))
#define DIFF_PAIR_MODE_CHANGED(p) ((p)->one->mode != (p)->two->mode)
extern void diff_free_filepair(struct diff_filepair *);
extern int diff_unmodified_pair(struct diff_filepair *);
struct diff_queue_struct ;
#define DIFF_QUEUE_CLEAR(q) \
do  while (0)
extern struct diff_queue_struct diff_queued_diff;
extern struct diff_filepair *diff_queue(struct diff_queue_struct *,
struct diff_filespec *,
struct diff_filespec *);
extern void diff_q(struct diff_queue_struct *, struct diff_filepair *);
extern void diffcore_break(int);
extern void diffcore_rename(struct diff_options *);
extern void diffcore_merge_broken(void);
extern void diffcore_pickaxe(struct diff_options *);
extern void diffcore_order(const char *orderfile);
struct obj_order ;
typedef const char *(*obj_path_fn_t)(void *obj);
void order_objects(const char *orderfile, obj_path_fn_t obj_path,
struct obj_order *objs, int nr);
#define DIFF_DEBUG 0
#if DIFF_DEBUG
void diff_debug_filespec(struct diff_filespec *, int, const char *);
void diff_debug_filepair(const struct diff_filepair *, int);
void diff_debug_queue(const char *, struct diff_queue_struct *);
#define diff_debug_filespec(a,b,c) do  while (0)
#define diff_debug_filepair(a,b) do  while (0)
#define diff_debug_queue(a,b) do  while (0)
extern int diffcore_count_changes(struct diff_filespec *src,
struct diff_filespec *dst,
void **src_count_p,
void **dst_count_p,
unsigned long delta_limit,
unsigned long *src_copied,
unsigned long *literal_added);
