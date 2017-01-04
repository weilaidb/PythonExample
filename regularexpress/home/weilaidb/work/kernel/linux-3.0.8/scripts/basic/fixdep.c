#define INT_CONF ntohl(0x434f4e46)
#define INT_ONFI ntohl(0x4f4e4649)
#define INT_NFIG ntohl(0x4e464947)
#define INT_FIG_ ntohl(0x4649475f)
char *target;
char *depfile;
char *cmdline;
static void usage(void)
static void print_cmdline(void)
struct item ;
#define HASHSZ 256
static struct item *hashtab[HASHSZ];
static unsigned int strhash(const char *str, unsigned int sz)
static int is_defined_config(const char *name, int len, unsigned int hash)
static void define_config(const char *name, int len, unsigned int hash)
static void clear_config(void)
static void use_config(const char *m, int slen)
static void parse_config_file(const char *map, size_t len)
static int strrcmp(char *s, char *sub)
static void do_config_file(const char *filename)
static void parse_dep_file(void *map, size_t len)
static void print_deps(void)
static void traps(void)
int main(int argc, char *argv[])
