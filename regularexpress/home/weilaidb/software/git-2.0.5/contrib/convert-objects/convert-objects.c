struct entry ;
#define MAXOBJECTS (1000000)
static struct entry *convert[MAXOBJECTS];
static int nr_convert;
static struct entry * convert_entry(unsigned char *sha1);
static struct entry *insert_new(unsigned char *sha1, int pos)
static struct entry *lookup_entry(unsigned char *sha1)
static void convert_binary_sha1(void *buffer)
static void convert_ascii_sha1(void *buffer)
static unsigned int convert_mode(unsigned int mode)
static int write_subdirectory(void *buffer, unsigned long size, const char *base, int baselen, unsigned char *result_sha1)
static void convert_tree(void *buffer, unsigned long size, unsigned char *result_sha1)
static unsigned long parse_oldstyle_date(const char *buf)
static int convert_date_line(char *dst, void **buf, unsigned long *sp)
static void convert_date(void *buffer, unsigned long size, unsigned char *result_sha1)
static void convert_commit(void *buffer, unsigned long size, unsigned char *result_sha1)
static struct entry * convert_entry(unsigned char *sha1)
int main(int argc, char **argv)
