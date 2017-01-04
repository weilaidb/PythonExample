#  undef main
static void
UnEscapeQuotes(char *arg)
static int
ParseCommandLine(char *cmdline, char **argv)
static BOOL
OutOfMemory(void)
#if defined(_MSC_VER)
# define console_ansi_main main
# if UNICODE
#  define console_wmain wmain
# endif
static int
main_utf8(int argc, char *argv[])
static int
main_getcmdline()
int
console_ansi_main(int argc, char *argv[])
#if UNICODE
int
console_wmain(int argc, wchar_t *wargv[], wchar_t *wenvp)
int WINAPI
WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR szCmdLine, int sw)
