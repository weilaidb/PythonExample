static DEFINE_SPINLOCK(pstore_lock);
static struct pstore_info *psinfo;
static unsigned long kmsg_bytes = 10240;
void pstore_set_kmsg_bytes(int bytes)
static int	oopscount;
static char *reason_str[] = ;
static void pstore_dump(struct kmsg_dumper *dumper,
enum kmsg_dump_reason reason,
const char *s1, unsigned long l1,
const char *s2, unsigned long l2)
static struct kmsg_dumper pstore_dumper = ;
int pstore_register(struct pstore_info *psi)
EXPORT_SYMBOL_GPL(pstore_register);
void pstore_get_records(void)
int pstore_write(enum pstore_type_id type, char *buf, size_t size)
EXPORT_SYMBOL_GPL(pstore_write);
