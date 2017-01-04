#if defined(HAVE_DEV_TTY) || defined(GIT_WINDOWS_NATIVE)
static void restore_term(void);
static void restore_term_on_signal(int sig)
#define INPUT_PATH "/dev/tty"
#define OUTPUT_PATH "/dev/tty"
static int term_fd = -1;
static struct termios old_term;
static void restore_term(void)
static int disable_echo(void)
#elif defined(GIT_WINDOWS_NATIVE)
#define INPUT_PATH "CONIN$"
#define OUTPUT_PATH "CONOUT$"
#define FORCE_TEXT "t"
static HANDLE hconin = INVALID_HANDLE_VALUE;
static DWORD cmode;
static void restore_term(void)
static int disable_echo(void)
#define FORCE_TEXT
char *git_terminal_prompt(const char *prompt, int echo)
char *git_terminal_prompt(const char *prompt, int echo)
