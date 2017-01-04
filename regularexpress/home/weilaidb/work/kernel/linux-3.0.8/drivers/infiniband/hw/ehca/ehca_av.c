static struct kmem_cache *av_cache;
int ehca_calc_ipd(struct ehca_shca *shca, int port,
enum ib_rate path_rate, u32 *ipd)
struct ib_ah *ehca_create_ah(struct ib_pd *pd, struct ib_ah_attr *ah_attr)
int ehca_modify_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr)
int ehca_query_ah(struct ib_ah *ah, struct ib_ah_attr *ah_attr)
int ehca_destroy_ah(struct ib_ah *ah)
int ehca_init_av_cache(void)
void ehca_cleanup_av_cache(void)
