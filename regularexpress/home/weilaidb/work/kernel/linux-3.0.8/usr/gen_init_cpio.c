#define xstr(s) #s
#define str(s) xstr(s)
static unsigned int offset;
static unsigned int ino = 721;
static time_t default_mtime;
struct file_handler ;
static void push_string(const char *name)
static void push_pad (void)
static void push_rest(const char *name)
static void push_hdr(const char *s)
static void cpio_trailer(void)
static int cpio_mkslink(const char *name, const char *target,
unsigned int mode, uid_t uid, gid_t gid)
static int cpio_mkslink_line(const char *line)
static int cpio_mkgeneric(const char *name, unsigned int mode,
uid_t uid, gid_t gid)
enum generic_types ;
struct generic_type ;
static struct generic_type generic_type_table[] = ;
static int cpio_mkgeneric_line(const char *line, enum generic_types gt)
static int cpio_mkdir_line(const char *line)
static int cpio_mkpipe_line(const char *line)
static int cpio_mksock_line(const char *line)
static int cpio_mknod(const char *name, unsigned int mode,
uid_t uid, gid_t gid, char dev_type,
unsigned int maj, unsigned int min)
static int cpio_mknod_line(const char *line)
static int cpio_mkfile(const char *name, const char *location,
unsigned int mode, uid_t uid, gid_t gid,
unsigned int nlinks)
static char *cpio_replace_env(char *new_location)
static int cpio_mkfile_line(const char *line)
static void usage(const char *prog)
struct file_handler file_handler_table[] = ;
#define LINE_SIZE (2 * PATH_MAX + 50)
int main (int argc, char *argv[])
