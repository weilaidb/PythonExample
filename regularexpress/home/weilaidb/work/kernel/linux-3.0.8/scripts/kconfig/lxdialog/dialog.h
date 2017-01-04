# include <libintl.h>
# define gettext(Msgid) ((const char *) (Msgid))
#define CURS_MACROS
#if defined(NCURSES_VERSION) && defined(_NEED_WRAP) && !defined(GCC_PRINTFLIKE)
#define OLD_NCURSES 1
#undef  wbkgdset
#define wbkgdset(w,p)
#define OLD_NCURSES 0
#define TR(params) _tracef params
#define KEY_ESC 27
#define TAB 9
#define MAX_LEN 2048
#define BUF_SIZE (10*1024)
#define MIN(x,y) (x < y ? x : y)
#define MAX(x,y) (x > y ? x : y)
#define ACS_ULCORNER '+'
#define ACS_LLCORNER '+'
#define ACS_URCORNER '+'
#define ACS_LRCORNER '+'
#define ACS_HLINE '-'
#define ACS_VLINE '|'
#define ACS_LTEE '+'
#define ACS_RTEE '+'
#define ACS_UARROW '^'
#define ACS_DARROW 'v'
#define ERRDISPLAYTOOSMALL (KEY_MAX + 1)
struct dialog_color ;
struct dialog_info ;
extern struct dialog_info dlg;
extern char dialog_input_result[];
void item_reset(void);
void item_make(const char *fmt, ...);
void item_add_str(const char *fmt, ...);
void item_set_tag(char tag);
void item_set_data(void *p);
void item_set_selected(int val);
int item_activate_selected(void);
void *item_data(void);
char item_tag(void);
#define MAXITEMSTR 200
struct dialog_item ;
struct dialog_list ;
extern struct dialog_list *item_cur;
extern struct dialog_list item_nil;
extern struct dialog_list *item_head;
int item_count(void);
void item_set(int n);
int item_n(void);
const char *item_str(void);
int item_is_selected(void);
int item_is_tag(char tag);
#define item_foreach() \
for (item_cur = item_head ? item_head: item_cur; \
item_cur && (item_cur != &item_nil); item_cur = item_cur->next)
int on_key_esc(WINDOW *win);
int on_key_resize(void);
int init_dialog(const char *backtitle);
void set_dialog_backtitle(const char *backtitle);
void end_dialog(int x, int y);
void attr_clear(WINDOW * win, int height, int width, chtype attr);
void dialog_clear(void);
void print_autowrap(WINDOW * win, const char *prompt, int width, int y, int x);
void print_button(WINDOW * win, const char *label, int y, int x, int selected);
void print_title(WINDOW *dialog, const char *title, int width);
void draw_box(WINDOW * win, int y, int x, int height, int width, chtype box,
chtype border);
void draw_shadow(WINDOW * win, int y, int x, int height, int width);
int first_alpha(const char *string, const char *exempt);
int dialog_yesno(const char *title, const char *prompt, int height, int width);
int dialog_msgbox(const char *title, const char *prompt, int height,
int width, int pause);
int dialog_textbox(const char *title, const char *file, int height, int width);
int dialog_menu(const char *title, const char *prompt,
const void *selected, int *s_scroll);
int dialog_checklist(const char *title, const char *prompt, int height,
int width, int list_height);
extern char dialog_input_result[];
int dialog_inputbox(const char *title, const char *prompt, int height,
int width, const char *init);
#define M_EVENT (KEY_MAX+1)
