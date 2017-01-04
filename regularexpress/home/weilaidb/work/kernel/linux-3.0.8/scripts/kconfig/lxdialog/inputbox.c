char dialog_input_result[MAX_LEN + 1];
static void print_buttons(WINDOW * dialog, int height, int width, int selected)
int dialog_inputbox(const char *title, const char *prompt, int height, int width,
const char *init)
