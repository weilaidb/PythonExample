#define NR_RESERVED_ENTRIES 8
#define GNTTAB_LIST_END 0xffffffff
#define GREFS_PER_GRANT_FRAME (PAGE_SIZE / sizeof(struct grant_entry))
static grant_ref_t **gnttab_list;
static unsigned int nr_grant_frames;
static unsigned int boot_max_nr_grant_frames;
static int gnttab_free_count;
static grant_ref_t gnttab_free_head;
static DEFINE_SPINLOCK(gnttab_list_lock);
unsigned long xen_hvm_resume_frames;
EXPORT_SYMBOL_GPL(xen_hvm_resume_frames);
static struct grant_entry *shared;
static struct gnttab_free_callback *gnttab_free_callback_list;
static int gnttab_expand(unsigned int req_entries);
#define RPP (PAGE_SIZE / sizeof(grant_ref_t))
static inline grant_ref_t *__gnttab_entry(grant_ref_t entry)
#define gnttab_entry(entry) (*__gnttab_entry(entry))
static int get_free_entries(unsigned count)
static void do_free_callbacks(void)
static inline void check_free_callbacks(void)
static void put_free_entry(grant_ref_t ref)
static void update_grant_entry(grant_ref_t ref, domid_t domid,
unsigned long frame, unsigned flags)
void gnttab_grant_foreign_access_ref(grant_ref_t ref, domid_t domid,
unsigned long frame, int readonly)
EXPORT_SYMBOL_GPL(gnttab_grant_foreign_access_ref);
int gnttab_grant_foreign_access(domid_t domid, unsigned long frame,
int readonly)
EXPORT_SYMBOL_GPL(gnttab_grant_foreign_access);
int gnttab_query_foreign_access(grant_ref_t ref)
EXPORT_SYMBOL_GPL(gnttab_query_foreign_access);
int gnttab_end_foreign_access_ref(grant_ref_t ref, int readonly)
EXPORT_SYMBOL_GPL(gnttab_end_foreign_access_ref);
void gnttab_end_foreign_access(grant_ref_t ref, int readonly,
unsigned long page)
EXPORT_SYMBOL_GPL(gnttab_end_foreign_access);
int gnttab_grant_foreign_transfer(domid_t domid, unsigned long pfn)
EXPORT_SYMBOL_GPL(gnttab_grant_foreign_transfer);
void gnttab_grant_foreign_transfer_ref(grant_ref_t ref, domid_t domid,
unsigned long pfn)
EXPORT_SYMBOL_GPL(gnttab_grant_foreign_transfer_ref);
unsigned long gnttab_end_foreign_transfer_ref(grant_ref_t ref)
EXPORT_SYMBOL_GPL(gnttab_end_foreign_transfer_ref);
unsigned long gnttab_end_foreign_transfer(grant_ref_t ref)
EXPORT_SYMBOL_GPL(gnttab_end_foreign_transfer);
void gnttab_free_grant_reference(grant_ref_t ref)
EXPORT_SYMBOL_GPL(gnttab_free_grant_reference);
void gnttab_free_grant_references(grant_ref_t head)
EXPORT_SYMBOL_GPL(gnttab_free_grant_references);
int gnttab_alloc_grant_references(u16 count, grant_ref_t *head)
EXPORT_SYMBOL_GPL(gnttab_alloc_grant_references);
int gnttab_empty_grant_references(const grant_ref_t *private_head)
EXPORT_SYMBOL_GPL(gnttab_empty_grant_references);
int gnttab_claim_grant_reference(grant_ref_t *private_head)
EXPORT_SYMBOL_GPL(gnttab_claim_grant_reference);
void gnttab_release_grant_reference(grant_ref_t *private_head,
grant_ref_t release)
EXPORT_SYMBOL_GPL(gnttab_release_grant_reference);
void gnttab_request_free_callback(struct gnttab_free_callback *callback,
void (*fn)(void *), void *arg, u16 count)
EXPORT_SYMBOL_GPL(gnttab_request_free_callback);
void gnttab_cancel_free_callback(struct gnttab_free_callback *callback)
EXPORT_SYMBOL_GPL(gnttab_cancel_free_callback);
static int grow_gnttab_list(unsigned int more_frames)
static unsigned int __max_nr_grant_frames(void)
unsigned int gnttab_max_grant_frames(void)
EXPORT_SYMBOL_GPL(gnttab_max_grant_frames);
int gnttab_map_refs(struct gnttab_map_grant_ref *map_ops,
struct page **pages, unsigned int count)
EXPORT_SYMBOL_GPL(gnttab_map_refs);
int gnttab_unmap_refs(struct gnttab_unmap_grant_ref *unmap_ops,
struct page **pages, unsigned int count)
EXPORT_SYMBOL_GPL(gnttab_unmap_refs);
static int gnttab_map(unsigned int start_idx, unsigned int end_idx)
int gnttab_resume(void)
int gnttab_suspend(void)
static int gnttab_expand(unsigned int req_entries)
int gnttab_init(void)
EXPORT_SYMBOL_GPL(gnttab_init);
static int __devinit __gnttab_init(void)
core_initcall(__gnttab_init);
