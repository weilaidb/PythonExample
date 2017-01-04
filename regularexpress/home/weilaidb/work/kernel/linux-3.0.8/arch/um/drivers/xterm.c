struct xterm_chan ;
static void *xterm_init(char *str, int device, const struct chan_opts *opts)
static char *terminal_emulator = "xterm";
static char *title_switch = "-T";
static char *exec_switch = "-e";
static int __init xterm_setup(char *line, int *add)
__uml_setup("xterm=", xterm_setup,
"xterm=<terminal emulator>,<title switch>,<exec switch>\n"
"    Specifies an alternate terminal emulator to use for the debugger,\n"
"    consoles, and serial lines when they are attached to the xterm channel.\n"
"    The values are the terminal emulator binary, the switch it uses to set\n"
"    its title, and the switch it uses to execute a subprocess,\n"
"    respectively.  The title switch must have the form '<switch> title',\n"
"    not '<switch>=title'.  Similarly, the exec switch must have the form\n"
"    '<switch> command arg1 arg2 ...'.\n"
"    The default values are 'xterm=xterm,-T,-e'.  Values for gnome-terminal\n"
"    are 'xterm=gnome-terminal,-t,-x'.\n\n"
);
static int xterm_open(int input, int output, int primary, void *d,
char **dev_out)
static void xterm_close(int fd, void *d)
const struct chan_ops xterm_ops = ;
