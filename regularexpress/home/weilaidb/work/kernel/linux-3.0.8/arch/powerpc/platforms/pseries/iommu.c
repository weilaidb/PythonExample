static int tce_build_pSeries(struct iommu_table *tbl, long index,
long npages, unsigned long uaddr,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void tce_free_pSeries(struct iommu_table *tbl, long index, long npages)
static unsigned long tce_get_pseries(struct iommu_table *tbl, long index)
static void tce_free_pSeriesLP(struct iommu_table*, long, long);
static void tce_freemulti_pSeriesLP(struct iommu_table*, long, long);
static int tce_build_pSeriesLP(struct iommu_table *tbl, long tcenum,
long npages, unsigned long uaddr,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static DEFINE_PER_CPU(u64 *, tce_page);
static int tce_buildmulti_pSeriesLP(struct iommu_table *tbl, long tcenum,
long npages, unsigned long uaddr,
enum dma_data_direction direction,
struct dma_attrs *attrs)
static void tce_free_pSeriesLP(struct iommu_table *tbl, long tcenum, long npages)
static void tce_freemulti_pSeriesLP(struct iommu_table *tbl, long tcenum, long npages)
static unsigned long tce_get_pSeriesLP(struct iommu_table *tbl, long tcenum)
struct dynamic_dma_window_prop ;
struct direct_window ;
struct ddw_query_response ;
struct ddw_create_response ;
static LIST_HEAD(direct_window_list);
static DEFINE_SPINLOCK(direct_window_list_lock);
static DEFINE_MUTEX(direct_window_init_mutex);
#define DIRECT64_PROPNAME "linux,direct64-ddr-window-info"
static int tce_clearrange_multi_pSeriesLP(unsigned long start_pfn,
unsigned long num_pfn, const void *arg)
static int tce_setrange_multi_pSeriesLP(unsigned long start_pfn,
unsigned long num_pfn, const void *arg)
static int tce_setrange_multi_pSeriesLP_walk(unsigned long start_pfn,
unsigned long num_pfn, void *arg)
static void iommu_table_setparms(struct pci_controller *phb,
struct device_node *dn,
struct iommu_table *tbl)
static void iommu_table_setparms_lpar(struct pci_controller *phb,
struct device_node *dn,
struct iommu_table *tbl,
const void *dma_window)
static void pci_dma_bus_setup_pSeries(struct pci_bus *bus)
static void pci_dma_bus_setup_pSeriesLP(struct pci_bus *bus)
static void pci_dma_dev_setup_pSeries(struct pci_dev *dev)
static int __read_mostly disable_ddw;
static int __init disable_ddw_setup(char *str)
early_param("disable_ddw", disable_ddw_setup);
static void remove_ddw(struct device_node *np)
static u64 find_existing_ddw(struct device_node *pdn)
static int find_existing_ddw_windows(void)
machine_arch_initcall(pseries, find_existing_ddw_windows);
static int query_ddw(struct pci_dev *dev, const u32 *ddw_avail,
struct ddw_query_response *query)
static int create_ddw(struct pci_dev *dev, const u32 *ddw_avail,
struct ddw_create_response *create, int page_shift,
int window_shift)
static u64 enable_ddw(struct pci_dev *dev, struct device_node *pdn)
static void pci_dma_dev_setup_pSeriesLP(struct pci_dev *dev)
static int dma_set_mask_pSeriesLP(struct device *dev, u64 dma_mask)
#define pci_dma_bus_setup_pSeries	NULL
#define pci_dma_dev_setup_pSeries	NULL
#define pci_dma_bus_setup_pSeriesLP	NULL
#define pci_dma_dev_setup_pSeriesLP	NULL
#define dma_set_mask_pSeriesLP		NULL
static int iommu_mem_notifier(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block iommu_mem_nb = ;
static int iommu_reconfig_notifier(struct notifier_block *nb, unsigned long action, void *node)
static struct notifier_block iommu_reconfig_nb = ;
void iommu_init_early_pSeries(void)
static int __init disable_multitce(char *str)
__setup("multitce=", disable_multitce);
