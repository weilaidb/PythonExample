#define NON_UNIQUE ULONG_MAX
struct hashmap ;
static void insert_record(int line, struct hashmap *map, int pass)
static int fill_hashmap(mmfile_t *file1, mmfile_t *file2,
xpparam_t const *xpp, xdfenv_t *env,
struct hashmap *result,
int line1, int count1, int line2, int count2)
static int binary_search(struct entry **sequence, int longest,
struct entry *entry)
static struct entry *find_longest_common_sequence(struct hashmap *map)
static int match(struct hashmap *map, int line1, int line2)
static int patience_diff(mmfile_t *file1, mmfile_t *file2,
xpparam_t const *xpp, xdfenv_t *env,
int line1, int count1, int line2, int count2);
static int walk_common_sequence(struct hashmap *map, struct entry *first,
int line1, int count1, int line2, int count2)
static int fall_back_to_classic_diff(struct hashmap *map,
int line1, int count1, int line2, int count2)
static int patience_diff(mmfile_t *file1, mmfile_t *file2,
xpparam_t const *xpp, xdfenv_t *env,
int line1, int count1, int line2, int count2)
int xdl_do_patience_diff(mmfile_t *file1, mmfile_t *file2,
xpparam_t const *xpp, xdfenv_t *env)
