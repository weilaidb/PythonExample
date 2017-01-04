struct swsusp_info  __attribute__((aligned(PAGE_SIZE)));
extern void __init hibernate_reserved_size_init(void);
extern void __init hibernate_image_size_init(void);
#define MAX_ARCH_HEADER_SIZE	(sizeof(struct new_utsname) + 4)
extern int arch_hibernation_header_save(void *addr, unsigned int max_size);
extern int arch_hibernation_header_restore(void *addr);
static inline int init_header_complete(struct swsusp_info *info)
static inline char *check_image_kernel(struct swsusp_info *info)
#define PAGES_FOR_IO	((4096 * 1024) >> PAGE_SHIFT)
#define SPARE_PAGES	((1024 * 1024) >> PAGE_SHIFT)
extern int hibernation_snapshot(int platform_mode);
extern int hibernation_restore(int platform_mode);
extern int hibernation_platform_enter(void);
static inline void hibernate_reserved_size_init(void)
static inline void hibernate_image_size_init(void)
extern int pfn_is_nosave(unsigned long);
#define power_attr(_name) \
static struct kobj_attribute _name##_attr =
extern unsigned long image_size;
extern unsigned long reserved_size;
extern int in_suspend;
extern dev_t swsusp_resume_device;
extern sector_t swsusp_resume_block;
extern asmlinkage int swsusp_arch_suspend(void);
extern asmlinkage int swsusp_arch_resume(void);
extern int create_basic_memory_bitmaps(void);
extern void free_basic_memory_bitmaps(void);
extern int hibernate_preallocate_memory(void);
struct snapshot_handle ;
#define data_of(handle)	((handle).buffer)
extern unsigned int snapshot_additional_pages(struct zone *zone);
extern unsigned long snapshot_get_image_size(void);
extern int snapshot_read_next(struct snapshot_handle *handle);
extern int snapshot_write_next(struct snapshot_handle *handle);
extern void snapshot_write_finalize(struct snapshot_handle *handle);
extern int snapshot_image_loaded(struct snapshot_handle *handle);
extern atomic_t snapshot_device_available;
extern sector_t alloc_swapdev_block(int swap);
extern void free_all_swap_pages(int swap);
extern int swsusp_swap_in_use(void);
#define SF_PLATFORM_MODE	1
#define SF_NOCOMPRESS_MODE	2
extern int swsusp_check(void);
extern void swsusp_free(void);
extern int swsusp_read(unsigned int *flags_p);
extern int swsusp_write(unsigned int flags);
extern void swsusp_close(fmode_t);
extern struct block_device *hib_resume_bdev;
extern int hib_bio_read_page(pgoff_t page_off, void *addr,
struct bio **bio_chain);
extern int hib_bio_write_page(pgoff_t page_off, void *addr,
struct bio **bio_chain);
extern int hib_wait_on_bio_chain(struct bio **bio_chain);
struct timeval;
extern void swsusp_show_speed(struct timeval *, struct timeval *,
unsigned int, char *);
extern const char *const pm_states[];
extern bool valid_state(suspend_state_t state);
extern int suspend_devices_and_enter(suspend_state_t state);
extern int enter_state(suspend_state_t state);
static inline int suspend_devices_and_enter(suspend_state_t state)
static inline int enter_state(suspend_state_t state)
static inline bool valid_state(suspend_state_t state)
extern void suspend_test_start(void);
extern void suspend_test_finish(const char *label);
static inline void suspend_test_start(void)
static inline void suspend_test_finish(const char *label)
extern int pm_notifier_call_chain(unsigned long val);
int restore_highmem(void);
static inline unsigned int count_highmem_pages(void)
static inline int restore_highmem(void)
enum ;
#define TEST_FIRST	TEST_NONE
#define TEST_MAX	(__TEST_AFTER_LAST - 1)
extern int pm_test_level;
static inline int suspend_freeze_processes(void)
static inline void suspend_thaw_processes(void)
static inline int suspend_freeze_processes(void)
static inline void suspend_thaw_processes(void)
