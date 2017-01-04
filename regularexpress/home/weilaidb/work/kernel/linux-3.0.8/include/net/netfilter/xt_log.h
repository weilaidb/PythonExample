#define S_SIZE (1024 - (sizeof(unsigned int) + 1))
struct sbuff ;
static struct sbuff emergency, *emergency_ptr = &emergency;
static int sb_add(struct sbuff *m, const char *f, ...)
static struct sbuff *sb_open(void)
static void sb_close(struct sbuff *m)
