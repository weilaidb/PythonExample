#define DEFAULT_PAGER "less"
struct pager_config ;
static const char *pager_argv[] = ;
static struct child_process pager_process;
static void wait_for_pager(void)
static void wait_for_pager_signal(int signo)
const char *git_pager(int stdout_is_tty)
void setup_pager(void)
int pager_in_use(void)
int term_columns(void)
int decimal_width(int number)
static int pager_command_config(const char *var, const char *value, void *data)
int check_pager_config(const char *cmd)
