#define L1_CACHE_MASK (L1_CACHE_BYTES - 1)
#define MAX_INTERFACES_TO_TRY		4
#define MAX_NODES_TO_TRY		2
static struct bteinfo_s *bte_if_on_node(nasid_t nasid, int interface)
static inline void bte_start_transfer(struct bteinfo_s *bte, u64 len, u64 mode)
bte_result_t bte_copy(u64 src, u64 dest, u64 len, u64 mode, void *notification)
EXPORT_SYMBOL(bte_copy);
bte_result_t bte_unaligned_copy(u64 src, u64 dest, u64 len, u64 mode)
EXPORT_SYMBOL(bte_unaligned_copy);
void bte_init_node(nodepda_t * mynodepda, cnodeid_t cnode)
