static void back_lines(int n);
static void print_page(WINDOW * win, int height, int width);
static void print_line(WINDOW * win, int row, int width);
static char *get_line(void);
static void print_position(WINDOW * win);
static int hscroll;
static int begin_reached, end_reached, page_length;
static const char *buf;
static const char *page;
static void refresh_text_box(WINDOW *dialog, WINDOW *box, int boxh, int boxw,
int cur_y, int cur_x)
int dialog_textbox(const char *title, const char *tbuf,
int initial_height, int initial_width)
static void back_lines(int n)
static void print_page(WINDOW * win, int height, int width)
static void print_line(WINDOW * win, int row, int width)
static char *get_line(void)
static void print_position(WINDOW * win)
