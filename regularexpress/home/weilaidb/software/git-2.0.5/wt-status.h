#define STATUS_H
enum color_wt_status ;
enum untracked_status_type ;
enum commit_whence ;
struct wt_status_change_data ;
struct wt_status ;
struct wt_status_state ;
void wt_status_truncate_message_at_cut_line(struct strbuf *);
void wt_status_add_cut_line(FILE *fp);
void wt_status_prepare(struct wt_status *s);
void wt_status_print(struct wt_status *s);
void wt_status_collect(struct wt_status *s);
void wt_status_get_state(struct wt_status_state *state, int get_detached_from);
void wt_shortstatus_print(struct wt_status *s);
void wt_porcelain_print(struct wt_status *s);
__attribute__((format (printf, 3, 4)))
void status_printf_ln(struct wt_status *s, const char *color, const char *fmt, ...);
__attribute__((format (printf, 3, 4)))
void status_printf(struct wt_status *s, const char *color, const char *fmt, ...);
