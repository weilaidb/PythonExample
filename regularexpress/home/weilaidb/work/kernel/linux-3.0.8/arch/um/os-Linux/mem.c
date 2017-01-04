static char *default_tmpdir = "/tmp";
static char *tempdir = NULL;
static void __init find_tempdir(void)
static int next(int fd, char *buf, size_t size, char c)
static int checked_tmpdir = 0;
static void which_tmpdir(void)
static int __init make_tempfile(const char *template, char **out_tempname,
int do_unlink)
#define TEMPNAME_TEMPLATE "vm_file-XXXXXX"
static int __init create_tmp_file(unsigned long long len)
int __init create_mem_file(unsigned long long len)
void __init check_tmpexec(void)
