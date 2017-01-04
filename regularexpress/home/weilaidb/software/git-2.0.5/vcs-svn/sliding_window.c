static int input_error(struct line_buffer *file)
static int skip_or_whine(struct line_buffer *file, off_t gap)
static int read_to_fill_or_whine(struct line_buffer *file,
struct strbuf *buf, size_t width)
static int check_offset_overflow(off_t offset, uintmax_t len)
int move_window(struct sliding_view *view, off_t off, size_t width)
