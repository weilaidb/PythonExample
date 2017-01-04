static int xencomm_init(struct xencomm_desc *desc,
void *buffer, unsigned long bytes)
static struct xencomm_desc *xencomm_alloc(gfp_t gfp_mask,
void *buffer, unsigned long bytes)
void xencomm_free(struct xencomm_handle *desc)
static int xencomm_create(void *buffer, unsigned long bytes,
struct xencomm_desc **ret, gfp_t gfp_mask)
static struct xencomm_handle *xencomm_create_inline(void *ptr)
static int xencomm_create_mini(void *buffer,
unsigned long bytes, struct xencomm_mini *xc_desc,
struct xencomm_desc **ret)
struct xencomm_handle *xencomm_map(void *ptr, unsigned long bytes)
struct xencomm_handle *__xencomm_map_no_alloc(void *ptr, unsigned long bytes,
struct xencomm_mini *xc_desc)
