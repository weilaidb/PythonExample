static int vmw_gmr_build_descriptors(struct list_head *desc_pages,
struct page *pages[],
unsigned long num_pages)
static inline void vmw_gmr_free_descriptors(struct list_head *desc_pages)
static void vmw_gmr_fire_descriptors(struct vmw_private *dev_priv,
int gmr_id, struct list_head *desc_pages)
static unsigned long vmw_gmr_count_descriptors(struct page *pages[],
unsigned long num_pages)
int vmw_gmr_bind(struct vmw_private *dev_priv,
struct page *pages[],
unsigned long num_pages,
int gmr_id)
void vmw_gmr_unbind(struct vmw_private *dev_priv, int gmr_id)
