static int boolean = 0;
static int integer = 0;
static unsigned long timestamp;
static int abbrev = 7;
static int verbose = 0, dry_run = 0, quiet = 0;
static char *string = NULL;
static char *file = NULL;
static int ambiguous;
static struct string_list list;
static int length_callback(const struct option *opt, const char *arg, int unset)
static int number_callback(const struct option *opt, const char *arg, int unset)
int main(int argc, char **argv)
