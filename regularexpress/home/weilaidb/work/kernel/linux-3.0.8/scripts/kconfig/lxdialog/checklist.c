static int list_width, check_x, item_x;
static void print_item(WINDOW * win, int choice, int selected)
static void print_arrows(WINDOW * win, int choice, int item_no, int scroll,
int y, int x, int height)
static void print_buttons(WINDOW * dialog, int height, int width, int selected)
int dialog_checklist(const char *title, const char *prompt, int height,
int width, int list_height)
