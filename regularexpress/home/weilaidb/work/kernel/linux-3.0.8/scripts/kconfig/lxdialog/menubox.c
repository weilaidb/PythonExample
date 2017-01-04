static int menu_width, item_x;
static void do_print_item(WINDOW * win, const char *item, int line_y,
int selected, int hotkey)
#define print_item(index, choice, selected)				\
do  while (0)
static void print_arrows(WINDOW * win, int item_no, int scroll, int y, int x,
int height)
static void print_buttons(WINDOW * win, int height, int width, int selected)
static void do_scroll(WINDOW *win, int *scroll, int n)
int dialog_menu(const char *title, const char *prompt,
const void *selected, int *s_scroll)
