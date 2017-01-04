#define SLIDING_WINDOW_H_
struct sliding_view ;
#define SLIDING_VIEW_INIT(input, len)
extern int move_window(struct sliding_view *view, off_t off, size_t width);
