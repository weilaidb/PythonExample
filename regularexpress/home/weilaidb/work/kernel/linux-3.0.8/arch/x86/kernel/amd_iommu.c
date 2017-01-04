#define CMD_SET_TYPE(cmd, t) ((cmd)->data[1] |= ((t) << 28))
#define LOOP_TIMEOUT	100000
static DEFINE_RWLOCK(amd_iommu_devtable_lock);
static LIST_HEAD(iommu_pd_list);
static DEFINE_SPINLOCK(iommu_pd_list_lock);
static struct protection_domain *pt_domain;
static struct iommu_ops amd_iommu_ops;
struct iommu_cmd ;
static void update_domain(struct protection_domain *domain);
static inline u16 get_device_id(struct device *dev)
static struct iommu_dev_data *get_dev_data(struct device *dev)
static struct dma_ops_domain *find_protection_domain(u16 devid)
static bool check_device(struct device *dev)
static int iommu_init_device(struct device *dev)
static void iommu_ignore_device(struct device *dev)
static void iommu_uninit_device(struct device *dev)
void __init amd_iommu_uninit_devices(void)
int __init amd_iommu_init_devices(void)
DECLARE_STATS_COUNTER(compl_wait);
DECLARE_STATS_COUNTER(cnt_map_single);
DECLARE_STATS_COUNTER(cnt_unmap_single);
DECLARE_STATS_COUNTER(cnt_map_sg);
DECLARE_STATS_COUNTER(cnt_unmap_sg);
DECLARE_STATS_COUNTER(cnt_alloc_coherent);
DECLARE_STATS_COUNTER(cnt_free_coherent);
DECLARE_STATS_COUNTER(cross_page);
DECLARE_STATS_COUNTER(domain_flush_single);
DECLARE_STATS_COUNTER(domain_flush_all);
DECLARE_STATS_COUNTER(alloced_io_mem);
DECLARE_STATS_COUNTER(total_map_requests);
static struct dentry *stats_dir;
static struct dentry *de_fflush;
static void amd_iommu_stats_add(struct __iommu_counter *cnt)
static void amd_iommu_stats_init(void)
static void dump_dte_entry(u16 devid)
static void dump_command(unsigned long phys_addr)
static void iommu_print_event(struct amd_iommu *iommu, void *__evt)
static void iommu_poll_events(struct amd_iommu *iommu)
irqreturn_t amd_iommu_int_thread(int irq, void *data)
irqreturn_t amd_iommu_int_handler(int irq, void *data)
static int wait_on_sem(volatile u64 *sem)
static void copy_cmd_to_buffer(struct amd_iommu *iommu,
struct iommu_cmd *cmd,
u32 tail)
static void build_completion_wait(struct iommu_cmd *cmd, u64 address)
static void build_inv_dte(struct iommu_cmd *cmd, u16 devid)
static void build_inv_iommu_pages(struct iommu_cmd *cmd, u64 address,
size_t size, u16 domid, int pde)
static void build_inv_iotlb_pages(struct iommu_cmd *cmd, u16 devid, int qdep,
u64 address, size_t size)
static void build_inv_all(struct iommu_cmd *cmd)
static int iommu_queue_command_sync(struct amd_iommu *iommu,
struct iommu_cmd *cmd,
bool sync)
static int iommu_queue_command(struct amd_iommu *iommu, struct iommu_cmd *cmd)
static int iommu_completion_wait(struct amd_iommu *iommu)
static int iommu_flush_dte(struct amd_iommu *iommu, u16 devid)
static void iommu_flush_dte_all(struct amd_iommu *iommu)
static void iommu_flush_tlb_all(struct amd_iommu *iommu)
static void iommu_flush_all(struct amd_iommu *iommu)
void iommu_flush_all_caches(struct amd_iommu *iommu)
static int device_flush_iotlb(struct device *dev, u64 address, size_t size)
static int device_flush_dte(struct device *dev)
static void __domain_flush_pages(struct protection_domain *domain,
u64 address, size_t size, int pde)
static void domain_flush_pages(struct protection_domain *domain,
u64 address, size_t size)
static void domain_flush_tlb(struct protection_domain *domain)
static void domain_flush_tlb_pde(struct protection_domain *domain)
static void domain_flush_complete(struct protection_domain *domain)
static void domain_flush_devices(struct protection_domain *domain)
static bool increase_address_space(struct protection_domain *domain,
gfp_t gfp)
static u64 *alloc_pte(struct protection_domain *domain,
unsigned long address,
unsigned long page_size,
u64 **pte_page,
gfp_t gfp)
static u64 *fetch_pte(struct protection_domain *domain, unsigned long address)
static int iommu_map_page(struct protection_domain *dom,
unsigned long bus_addr,
unsigned long phys_addr,
int prot,
unsigned long page_size)
static unsigned long iommu_unmap_page(struct protection_domain *dom,
unsigned long bus_addr,
unsigned long page_size)
static int iommu_for_unity_map(struct amd_iommu *iommu,
struct unity_map_entry *entry)
static int dma_ops_unity_map(struct dma_ops_domain *dma_dom,
struct unity_map_entry *e)
static int iommu_init_unity_mappings(struct amd_iommu *iommu)
static int init_unity_mappings_for_device(struct dma_ops_domain *dma_dom,
u16 devid)
static void dma_ops_reserve_addresses(struct dma_ops_domain *dom,
unsigned long start_page,
unsigned int pages)
static int alloc_new_range(struct dma_ops_domain *dma_dom,
bool populate, gfp_t gfp)
static unsigned long dma_ops_area_alloc(struct device *dev,
struct dma_ops_domain *dom,
unsigned int pages,
unsigned long align_mask,
u64 dma_mask,
unsigned long start)
static unsigned long dma_ops_alloc_addresses(struct device *dev,
struct dma_ops_domain *dom,
unsigned int pages,
unsigned long align_mask,
u64 dma_mask)
static void dma_ops_free_addresses(struct dma_ops_domain *dom,
unsigned long address,
unsigned int pages)
static void add_domain_to_list(struct protection_domain *domain)
static void del_domain_from_list(struct protection_domain *domain)
static u16 domain_id_alloc(void)
static void domain_id_free(int id)
static void free_pagetable(struct protection_domain *domain)
static void dma_ops_domain_free(struct dma_ops_domain *dom)
static struct dma_ops_domain *dma_ops_domain_alloc(void)
static bool dma_ops_domain(struct protection_domain *domain)
static void set_dte_entry(u16 devid, struct protection_domain *domain, bool ats)
static void clear_dte_entry(u16 devid)
static void do_attach(struct device *dev, struct protection_domain *domain)
static void do_detach(struct device *dev)
static int __attach_device(struct device *dev,
struct protection_domain *domain)
static int attach_device(struct device *dev,
struct protection_domain *domain)
static void __detach_device(struct device *dev)
static void detach_device(struct device *dev)
static struct protection_domain *domain_for_device(struct device *dev)
static int device_change_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block device_nb = ;
void amd_iommu_init_notifier(void)
static struct protection_domain *get_domain(struct device *dev)
static void update_device_table(struct protection_domain *domain)
static void update_domain(struct protection_domain *domain)
static u64* dma_ops_get_pte(struct dma_ops_domain *dom,
unsigned long address)
static dma_addr_t dma_ops_domain_map(struct dma_ops_domain *dom,
unsigned long address,
phys_addr_t paddr,
int direction)
static void dma_ops_domain_unmap(struct dma_ops_domain *dom,
unsigned long address)
static dma_addr_t __map_single(struct device *dev,
struct dma_ops_domain *dma_dom,
phys_addr_t paddr,
size_t size,
int dir,
bool align,
u64 dma_mask)
static void __unmap_single(struct dma_ops_domain *dma_dom,
dma_addr_t dma_addr,
size_t size,
int dir)
static dma_addr_t map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void unmap_page(struct device *dev, dma_addr_t dma_addr, size_t size,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int map_sg_no_iommu(struct device *dev, struct scatterlist *sglist,
int nelems, int dir)
static int map_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void unmap_sg(struct device *dev, struct scatterlist *sglist,
int nelems, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void *alloc_coherent(struct device *dev, size_t size,
dma_addr_t *dma_addr, gfp_t flag)
static void free_coherent(struct device *dev, size_t size,
void *virt_addr, dma_addr_t dma_addr)
static int amd_iommu_dma_supported(struct device *dev, u64 mask)
static void prealloc_protection_domains(void)
static struct dma_map_ops amd_iommu_dma_ops = ;
static unsigned device_dma_ops_init(void)
void __init amd_iommu_init_api(void)
int __init amd_iommu_init_dma_ops(void)
static void cleanup_domain(struct protection_domain *domain)
static void protection_domain_free(struct protection_domain *domain)
static struct protection_domain *protection_domain_alloc(void)
static int amd_iommu_domain_init(struct iommu_domain *dom)
static void amd_iommu_domain_destroy(struct iommu_domain *dom)
static void amd_iommu_detach_device(struct iommu_domain *dom,
struct device *dev)
static int amd_iommu_attach_device(struct iommu_domain *dom,
struct device *dev)
static int amd_iommu_map(struct iommu_domain *dom, unsigned long iova,
phys_addr_t paddr, int gfp_order, int iommu_prot)
static int amd_iommu_unmap(struct iommu_domain *dom, unsigned long iova,
int gfp_order)
static phys_addr_t amd_iommu_iova_to_phys(struct iommu_domain *dom,
unsigned long iova)
static int amd_iommu_domain_has_cap(struct iommu_domain *domain,
unsigned long cap)
static struct iommu_ops amd_iommu_ops = ;
int __init amd_iommu_init_passthrough(void)
