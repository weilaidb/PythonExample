#define LKC_DIRECT_LINK
static char *escape(const char* text, char *bf, int len)
struct file_line ;
static struct file_line *file_line__new(const char *file, int lineno)
struct message ;
static struct message *message__list;
static struct message *message__new(const char *msg, char *option,
const char *file, int lineno)
static struct message *mesage__find(const char *msg)
static int message__add_file_line(struct message *self, const char *file,
int lineno)
static int message__add(const char *msg, char *option, const char *file,
int lineno)
static void menu_build_message_list(struct menu *menu)
static void message__print_file_lineno(struct message *self)
static void message__print_gettext_msgid_msgstr(struct message *self)
static void menu__xgettext(void)
int main(int ac, char **av)
