#define LINE_LOG_H
struct rev_info;
struct commit;
struct range ;
struct range_set ;
struct diff_ranges ;
extern void range_set_init(struct range_set *, size_t prealloc);
extern void range_set_release(struct range_set *);
extern void range_set_append_unsafe(struct range_set *, long start, long end);
extern void range_set_append(struct range_set *, long start, long end);
extern void sort_and_merge_range_set(struct range_set *);
struct line_log_data ;
extern void line_log_data_init(struct line_log_data *r);
extern void line_log_init(struct rev_info *rev, const char *prefix, struct string_list *args);
extern int line_log_filter(struct rev_info *rev);
extern int line_log_print(struct rev_info *rev, struct commit *commit);
