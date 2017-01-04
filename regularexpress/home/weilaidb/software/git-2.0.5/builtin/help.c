#define DEFAULT_HELP_FORMAT "man"
static struct man_viewer_list  *man_viewer_list;
static struct man_viewer_info_list  *man_viewer_info_list;
enum help_format ;
static const char *html_path;
static int show_all = 0;
static int show_guides = 0;
static unsigned int colopts;
static enum help_format help_format = HELP_FORMAT_NONE;
static struct option builtin_help_options[] = ;
static const char * const builtin_help_usage[] = ;
static enum help_format parse_help_format(const char *format)
static const char *get_man_viewer_info(const char *name)
static int check_emacsclient_version(void)
static void exec_woman_emacs(const char *path, const char *page)
static void exec_man_konqueror(const char *path, const char *page)
static void exec_man_man(const char *path, const char *page)
static void exec_man_cmd(const char *cmd, const char *page)
static void add_man_viewer(const char *name)
static int supported_man_viewer(const char *name, size_t len)
static void do_add_man_viewer_info(const char *name,
size_t len,
const char *value)
static int add_man_viewer_path(const char *name,
size_t len,
const char *value)
static int add_man_viewer_cmd(const char *name,
size_t len,
const char *value)
static int add_man_viewer_info(const char *var, const char *value)
static int git_help_config(const char *var, const char *value, void *cb)
static struct cmdnames main_cmds, other_cmds;
static int is_git_command(const char *s)
static const char *prepend(const char *prefix, const char *cmd)
static const char *cmd_to_page(const char *git_cmd)
static void setup_man_path(void)
static void exec_viewer(const char *name, const char *page)
static void show_man_page(const char *git_cmd)
static void show_info_page(const char *git_cmd)
static void get_html_page_path(struct strbuf *page_path, const char *page)
strbuf_init(page_path, 0);
strbuf_addf(page_path, "%s/%s.html", html_path, page);
}
static void open_html(const char *path)
static void show_html_page(const char *git_cmd)
static struct  common_guides[] = ;
static void list_common_guides_help(void)
int cmd_help(int argc, const char **argv, const char *prefix)
