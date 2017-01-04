struct test_entry
;
static const char *get_value(const struct test_entry *e)
static int test_entry_cmp(const struct test_entry *e1,
const struct test_entry *e2, const char* key)
static int test_entry_cmp_icase(const struct test_entry *e1,
const struct test_entry *e2, const char* key)
static struct test_entry *alloc_test_entry(int hash, char *key, int klen,
char *value, int vlen)
#define HASH_METHOD_FNV 0
#define HASH_METHOD_I 1
#define HASH_METHOD_IDIV10 2
#define HASH_METHOD_0 3
#define HASH_METHOD_X2 4
#define TEST_SPARSE 8
#define TEST_ADD 16
#define TEST_SIZE 100000
static unsigned int hash(unsigned int method, unsigned int i, const char *key)
static void perf_hashmap(unsigned int method, unsigned int rounds)
#define DELIM " \t\r\n"
int main(int argc, char *argv[])
