#define LKC_DIRECT_LINK
static void conf(struct menu *menu);
static void check_conf(struct menu *menu);
enum input_mode  input_mode = oldaskconfig;
char *defconfig_file;
static int indent = 1;
static int valid_stdin = 1;
static int sync_kconfig;
static int conf_cnt;
static char line[128];
static struct menu *rootEntry;
static void print_help(struct menu *menu)
static void strip(char *str)
static void check_stdin(void)
static int conf_askvalue(struct symbol *sym, const char *def)
static int conf_string(struct menu *menu)
static int conf_sym(struct menu *menu)
static int conf_choice(struct menu *menu)
static void conf(struct menu *menu)
static void check_conf(struct menu *menu)
static struct option long_opts[] = ;
int main(int ac, char **av)
void xfgets(str, size, in)
char *str;
int size;
FILE *in;
