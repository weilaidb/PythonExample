struct errormap ;
#define ERRHASHSZ		32
static struct hlist_head hash_errmap[ERRHASHSZ];
static struct errormap errmap[] = ;
int p9_error_init(void)
EXPORT_SYMBOL(p9_error_init);
int p9_errstr2errno(char *errstr, int len)
EXPORT_SYMBOL(p9_errstr2errno);
