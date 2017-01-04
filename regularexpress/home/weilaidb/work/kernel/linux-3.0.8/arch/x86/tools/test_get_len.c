#define unlikely(cond) (cond)
const char *prog;
static int verbose;
static int x86_64;
static void usage(void)
static void malformed_line(const char *line, int line_nr)
static void dump_field(FILE *fp, const char *name, const char *indent,
struct insn_field *field)
static void dump_insn(FILE *fp, struct insn *insn)
static void parse_args(int argc, char **argv)
#define BUFSIZE 256
int main(int argc, char **argv)
