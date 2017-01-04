#define PCPU_SLOT_BASE_SHIFT		5
#define PCPU_DFL_MAP_ALLOC		16
#define __addr_to_pcpu_ptr(addr)					\
(void __percpu *)((unsigned long)(addr) -			\
(unsigned long)pcpu_base_addr	+		\
(unsigned long)__per_cpu_start)
#define __pcpu_ptr_to_addr(ptr)						\
(void __force *)((unsigned long)(ptr) +				\
(unsigned long)pcpu_base_addr -		\
(unsigned long)__per_cpu_start)
#define __addr_to_pcpu_ptr(addr)	(void __percpu *)(addr)
#define __pcpu_ptr_to_addr(ptr)		(void __force *)(ptr)
struct pcpu_chunk ;
static int pcpu_unit_pages __read_mostly;
static int pcpu_unit_size __read_mostly;
static int pcpu_nr_units __read_mostly;
static int pcpu_atom_size __read_mostly;
static int pcpu_nr_slots __read_mostly;
static size_t pcpu_chunk_struct_size __read_mostly;
static unsigned int pcpu_first_unit_cpu __read_mostly;
static unsigned int pcpu_last_unit_cpu __read_mostly;
void *pcpu_base_addr __read_mostly;
EXPORT_SYMBOL_GPL(pcpu_base_addr);
static const int *pcpu_unit_map __read_mostly;
const unsigned long *pcpu_unit_offsets __read_mostly;
static int pcpu_nr_groups __read_mostly;
static const unsigned long *pcpu_group_offsets __read_mostly;
static const size_t *pcpu_group_sizes __read_mostly;
static struct pcpu_chunk *pcpu_first_chunk;
static struct pcpu_chunk *pcpu_reserved_chunk;
static int pcpu_reserved_chunk_limit;
static DEFINE_MUTEX(pcpu_alloc_mutex);
static DEFINE_SPINLOCK(pcpu_lock);
static struct list_head *pcpu_slot __read_mostly;
static void pcpu_reclaim(struct work_struct *work);
static DECLARE_WORK(pcpu_reclaim_work, pcpu_reclaim);
static bool pcpu_addr_in_first_chunk(void *addr)
static bool pcpu_addr_in_reserved_chunk(void *addr)
static int __pcpu_size_to_slot(int size)
static int pcpu_size_to_slot(int size)
static int pcpu_chunk_slot(const struct pcpu_chunk *chunk)
static void pcpu_set_page_chunk(struct page *page, struct pcpu_chunk *pcpu)
static struct pcpu_chunk *pcpu_get_page_chunk(struct page *page)
static int __maybe_unused pcpu_page_idx(unsigned int cpu, int page_idx)
static unsigned long pcpu_chunk_addr(struct pcpu_chunk *chunk,
unsigned int cpu, int page_idx)
static void __maybe_unused pcpu_next_unpop(struct pcpu_chunk *chunk,
int *rs, int *re, int end)
static void __maybe_unused pcpu_next_pop(struct pcpu_chunk *chunk,
int *rs, int *re, int end)
#define pcpu_for_each_unpop_region(chunk, rs, re, start, end)		    \
for ((rs) = (start), pcpu_next_unpop((chunk), &(rs), &(re), (end)); \
(rs) < (re);						    \
(rs) = (re) + 1, pcpu_next_unpop((chunk), &(rs), &(re), (end)))
#define pcpu_for_each_pop_region(chunk, rs, re, start, end)		    \
for ((rs) = (start), pcpu_next_pop((chunk), &(rs), &(re), (end));   \
(rs) < (re);						    \
(rs) = (re) + 1, pcpu_next_pop((chunk), &(rs), &(re), (end)))
static void *pcpu_mem_alloc(size_t size)
static void pcpu_mem_free(void *ptr, size_t size)
static void pcpu_chunk_relocate(struct pcpu_chunk *chunk, int oslot)
static int pcpu_need_to_extend(struct pcpu_chunk *chunk)
static int pcpu_extend_area_map(struct pcpu_chunk *chunk, int new_alloc)
static void pcpu_split_block(struct pcpu_chunk *chunk, int i,
int head, int tail)
static int pcpu_alloc_area(struct pcpu_chunk *chunk, int size, int align)
static void pcpu_free_area(struct pcpu_chunk *chunk, int freeme)
static struct pcpu_chunk *pcpu_alloc_chunk(void)
static void pcpu_free_chunk(struct pcpu_chunk *chunk)
static int pcpu_populate_chunk(struct pcpu_chunk *chunk, int off, int size);
static void pcpu_depopulate_chunk(struct pcpu_chunk *chunk, int off, int size);
static struct pcpu_chunk *pcpu_create_chunk(void);
static void pcpu_destroy_chunk(struct pcpu_chunk *chunk);
static struct page *pcpu_addr_to_page(void *addr);
static int __init pcpu_verify_alloc_info(const struct pcpu_alloc_info *ai);
static struct pcpu_chunk *pcpu_chunk_addr_search(void *addr)
static void __percpu *pcpu_alloc(size_t size, size_t align, bool reserved)
void __percpu *__alloc_percpu(size_t size, size_t align)
EXPORT_SYMBOL_GPL(__alloc_percpu);
void __percpu *__alloc_reserved_percpu(size_t size, size_t align)
static void pcpu_reclaim(struct work_struct *work)
void free_percpu(void __percpu *ptr)
EXPORT_SYMBOL_GPL(free_percpu);
bool is_kernel_percpu_address(unsigned long addr)
phys_addr_t per_cpu_ptr_to_phys(void *addr)
struct pcpu_alloc_info * __init pcpu_alloc_alloc_info(int nr_groups,
int nr_units)
void __init pcpu_free_alloc_info(struct pcpu_alloc_info *ai)
static void pcpu_dump_alloc_info(const char *lvl,
const struct pcpu_alloc_info *ai)
int __init pcpu_setup_first_chunk(const struct pcpu_alloc_info *ai,
void *base_addr)
const char *pcpu_fc_names[PCPU_FC_NR] __initdata = ;
enum pcpu_fc pcpu_chosen_fc __initdata = PCPU_FC_AUTO;
static int __init percpu_alloc_setup(char *str)
early_param("percpu_alloc", percpu_alloc_setup);
#if defined(CONFIG_NEED_PER_CPU_EMBED_FIRST_CHUNK) || \
!defined(CONFIG_HAVE_SETUP_PER_CPU_AREA)
#define BUILD_EMBED_FIRST_CHUNK
#if defined(CONFIG_NEED_PER_CPU_PAGE_FIRST_CHUNK)
#define BUILD_PAGE_FIRST_CHUNK
#if defined(BUILD_EMBED_FIRST_CHUNK) || defined(BUILD_PAGE_FIRST_CHUNK)
static struct pcpu_alloc_info * __init pcpu_build_alloc_info(
size_t reserved_size, size_t dyn_size,
size_t atom_size,
pcpu_fc_cpu_distance_fn_t cpu_distance_fn)
#if defined(BUILD_EMBED_FIRST_CHUNK)
int __init pcpu_embed_first_chunk(size_t reserved_size, size_t dyn_size,
size_t atom_size,
pcpu_fc_cpu_distance_fn_t cpu_distance_fn,
pcpu_fc_alloc_fn_t alloc_fn,
pcpu_fc_free_fn_t free_fn)
int __init pcpu_page_first_chunk(size_t reserved_size,
pcpu_fc_alloc_fn_t alloc_fn,
pcpu_fc_free_fn_t free_fn,
pcpu_fc_populate_pte_fn_t populate_pte_fn)
unsigned long __per_cpu_offset[NR_CPUS] __read_mostly;
EXPORT_SYMBOL(__per_cpu_offset);
static void * __init pcpu_dfl_fc_alloc(unsigned int cpu, size_t size,
size_t align)
static void __init pcpu_dfl_fc_free(void *ptr, size_t size)
void __init setup_per_cpu_areas(void)
void __init setup_per_cpu_areas(void)
void __init percpu_init_late(void)
