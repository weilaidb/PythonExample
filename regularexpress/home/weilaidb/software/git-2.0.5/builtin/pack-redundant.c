#define BLKSIZE 512
static const char pack_redundant_usage[] =
"git pack-redundant [ --verbose ] [ --alt-odb ] < --all | <.pack filename> ...>";
static int load_all_packs, verbose, alt_odb;
struct llist_item ;
static struct llist  *all_objects;
static struct pack_list  *local_packs = NULL, *altodb_packs = NULL;
struct pll ;
static struct llist_item *free_nodes;
static inline void llist_item_put(struct llist_item *item)
static inline struct llist_item *llist_item_get(void)
static void llist_free(struct llist *list)
static inline void llist_init(struct llist **list)
static struct llist * llist_copy(struct llist *list)
static inline struct llist_item *llist_insert(struct llist *list,
struct llist_item *after,
const unsigned char *sha1)
static inline struct llist_item *llist_insert_back(struct llist *list,
const unsigned char *sha1)
static inline struct llist_item *llist_insert_sorted_unique(struct llist *list,
const unsigned char *sha1, struct llist_item *hint)
static inline struct llist_item * llist_sorted_remove(struct llist *list, const unsigned char *sha1, struct llist_item *hint)
static void llist_sorted_difference_inplace(struct llist *A,
struct llist *B)
static inline struct pack_list * pack_list_insert(struct pack_list **pl,
struct pack_list *entry)
static inline size_t pack_list_size(struct pack_list *pl)
static struct pack_list * pack_list_difference(const struct pack_list *A,
const struct pack_list *B)
static void cmp_two_packs(struct pack_list *p1, struct pack_list *p2)
static void pll_free(struct pll *l)
static struct pll * get_permutations(struct pack_list *list, int n)
static int is_superset(struct pack_list *pl, struct llist *list)
static size_t sizeof_union(struct packed_git *p1, struct packed_git *p2)
static size_t get_pack_redundancy(struct pack_list *pl)
static inline off_t pack_set_bytecount(struct pack_list *pl)
static void minimize(struct pack_list **min)
static void load_all_objects(void)
static void cmp_local_packs(void)
static void scan_alt_odb_packs(void)
static struct pack_list * add_pack(struct packed_git *p)
static struct pack_list * add_pack_file(const char *filename)
static void load_all(void)
int cmd_pack_redundant(int argc, const char **argv, const char *prefix)
