static struct table_header *unpack_table(char *blob, size_t bsize)
static int verify_dfa(struct aa_dfa *dfa, int flags)
static void dfa_free(struct aa_dfa *dfa)
void aa_dfa_free_kref(struct kref *kref)
struct aa_dfa *aa_dfa_unpack(void *blob, size_t size, int flags)
unsigned int aa_dfa_match_len(struct aa_dfa *dfa, unsigned int start,
const char *str, int len)
unsigned int aa_dfa_match(struct aa_dfa *dfa, unsigned int start,
const char *str)
