static int score_missing(unsigned mode, const char *path)
static int score_differs(unsigned mode1, unsigned mode2, const char *path)
static int score_matches(unsigned mode1, unsigned mode2, const char *path)
static void *fill_tree_desc_strict(struct tree_desc *desc,
const unsigned char *hash)
static int base_name_entries_compare(const struct name_entry *a,
const struct name_entry *b)
static int score_trees(const unsigned char *hash1, const unsigned char *hash2)
static void match_trees(const unsigned char *hash1,
const unsigned char *hash2,
int *best_score,
char **best_match,
const char *base,
int recurse_limit)
static int splice_tree(const unsigned char *hash1,
const char *prefix,
const unsigned char *hash2,
unsigned char *result)
void shift_tree(const unsigned char *hash1,
const unsigned char *hash2,
unsigned char *shifted,
int depth_limit)
void shift_tree_by(const unsigned char *hash1,
const unsigned char *hash2,
unsigned char *shifted,
const char *shift_prefix)
