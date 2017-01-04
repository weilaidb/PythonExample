#define HASH_LIMIT 64
#define RABIN_SHIFT 23
#define RABIN_WINDOW 16
static const unsigned int T[256] = ;
static const unsigned int U[256] = ;
struct index_entry ;
struct unpacked_index_entry ;
struct delta_index ;
struct delta_index * create_delta_index(const void *buf, unsigned long bufsize)
void free_delta_index(struct delta_index *index)
unsigned long sizeof_delta_index(struct delta_index *index)
#define MAX_OP_SIZE	(5 + 5 + 1 + RABIN_WINDOW + 7)
void *
create_delta(const struct delta_index *index,
const void *trg_buf, unsigned long trg_size,
unsigned long *delta_size, unsigned long max_size)
