#define max(a, b) ()
#define min(a, b) ()
typedef enum  attributes_t;
extern attributes_t attributes[];
typedef enum  function_key;
void set_colors(void);
void print_in_middle(WINDOW *win,
int starty,
int startx,
int width,
const char *string,
chtype color);
int get_line_length(const char *line);
int get_line_no(const char *text);
const char *get_line(const char *text, int line_no);
void fill_window(WINDOW *win, const char *text);
int btn_dialog(WINDOW *main_window, const char *msg, int btn_num, ...);
int dialog_inputbox(WINDOW *main_window,
const char *title, const char *prompt,
const char *init, char *result, int result_len);
void refresh_all_windows(WINDOW *main_window);
void show_scroll_win(WINDOW *main_window,
const char *title,
const char *text);
