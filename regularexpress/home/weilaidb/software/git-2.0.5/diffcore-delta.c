#define INITIAL_HASH_SIZE 9
#define INITIAL_FREE(sz_log2) ((1<<(sz_log2))*(sz_log2-3)/(sz_log2))
#define HASHBASE 107927
struct spanhash ;
struct spanhash_top ;
static struct spanhash_top *spanhash_rehash(struct spanhash_top *orig)
static struct spanhash_top *add_spanhash(struct spanhash_top *top,
unsigned int hashval, int cnt)
static int spanhash_cmp(const void *a_, const void *b_)
static struct spanhash_top *hash_chars(struct diff_filespec *one)
int diffcore_count_changes(struct diff_filespec *src,
struct diff_filespec *dst,
void **src_count_p,
void **dst_count_p,
unsigned long delta_limit,
unsigned long *src_copied,
unsigned long *literal_added)
