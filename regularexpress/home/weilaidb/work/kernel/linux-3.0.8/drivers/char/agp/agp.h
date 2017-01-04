#define _AGP_BACKEND_PRIV_H 1
#define PFX "agpgart: "
#define DBG(x,y...) printk (KERN_DEBUG PFX "%s: " x "\n", __func__ , ## y)
#define DBG(x,y...) do  while (0)
extern struct agp_bridge_data *agp_bridge;
enum aper_size_type ;
struct gatt_mask ;
#define AGP_PAGE_DESTROY_UNMAP 1
#define AGP_PAGE_DESTROY_FREE 2
struct aper_size_info_8 ;
struct aper_size_info_16 ;
struct aper_size_info_32 ;
struct aper_size_info_lvl2 ;
struct aper_size_info_fixed ;
struct agp_bridge_driver ;
struct agp_bridge_data ;
#define KB(x)	((x) * 1024)
#define MB(x)	(KB (KB (x)))
#define GB(x)	(MB (KB (x)))
#define A_SIZE_8(x)	((struct aper_size_info_8 *) x)
#define A_SIZE_16(x)	((struct aper_size_info_16 *) x)
#define A_SIZE_32(x)	((struct aper_size_info_32 *) x)
#define A_SIZE_LVL2(x)	((struct aper_size_info_lvl2 *) x)
#define A_SIZE_FIX(x)	((struct aper_size_info_fixed *) x)
#define A_IDX8(bridge)	(A_SIZE_8((bridge)->driver->aperture_sizes) + i)
#define A_IDX16(bridge)	(A_SIZE_16((bridge)->driver->aperture_sizes) + i)
#define A_IDX32(bridge)	(A_SIZE_32((bridge)->driver->aperture_sizes) + i)
#define MAXKEY		(4096 * 32)
#define PGE_EMPTY(b, p)	(!(p) || (p) == (unsigned long) (b)->scratch_page)
struct agp_device_ids ;
struct agp_bridge_data *agp_alloc_bridge(void);
void agp_put_bridge(struct agp_bridge_data *bridge);
int agp_add_bridge(struct agp_bridge_data *bridge);
void agp_remove_bridge(struct agp_bridge_data *bridge);
int agp_frontend_initialize(void);
void agp_frontend_cleanup(void);
void agp_generic_enable(struct agp_bridge_data *bridge, u32 mode);
int agp_generic_create_gatt_table(struct agp_bridge_data *bridge);
int agp_generic_free_gatt_table(struct agp_bridge_data *bridge);
struct agp_memory *agp_create_memory(int scratch_pages);
int agp_generic_insert_memory(struct agp_memory *mem, off_t pg_start, int type);
int agp_generic_remove_memory(struct agp_memory *mem, off_t pg_start, int type);
struct agp_memory *agp_generic_alloc_by_type(size_t page_count, int type);
void agp_generic_free_by_type(struct agp_memory *curr);
struct page *agp_generic_alloc_page(struct agp_bridge_data *bridge);
int agp_generic_alloc_pages(struct agp_bridge_data *agp_bridge,
struct agp_memory *memory, size_t page_count);
void agp_generic_destroy_page(struct page *page, int flags);
void agp_generic_destroy_pages(struct agp_memory *memory);
void agp_free_key(int key);
int agp_num_entries(void);
u32 agp_collect_device_status(struct agp_bridge_data *bridge, u32 mode, u32 command);
void agp_device_command(u32 command, bool agp_v3);
int agp_3_5_enable(struct agp_bridge_data *bridge);
void global_cache_flush(void);
void get_agp_version(struct agp_bridge_data *bridge);
unsigned long agp_generic_mask_memory(struct agp_bridge_data *bridge,
dma_addr_t phys, int type);
int agp_generic_type_to_mask_type(struct agp_bridge_data *bridge,
int type);
struct agp_bridge_data *agp_generic_find_bridge(struct pci_dev *pdev);
struct agp_memory *agp_generic_alloc_user(size_t page_count, int type);
void agp_alloc_page_array(size_t size, struct agp_memory *mem);
void agp_free_page_array(struct agp_memory *mem);
int agp3_generic_fetch_size(void);
void agp3_generic_tlbflush(struct agp_memory *mem);
int agp3_generic_configure(void);
void agp3_generic_cleanup(void);
#define AGP_GENERIC_SIZES_ENTRIES 11
extern const struct aper_size_info_16 agp3_generic_sizes[];
extern int agp_off;
extern int agp_try_unsupported_boot;
long compat_agp_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
#define AGP_APBASE	0x10
#define AGPSTAT		0x4
#define AGPCMD		0x8
#define AGPNISTAT	0xc
#define AGPCTRL		0x10
#define AGPAPSIZE	0x14
#define AGPNEPG		0x16
#define AGPGARTLO	0x18
#define AGPGARTHI	0x1c
#define AGPNICMD	0x20
#define AGP_MAJOR_VERSION_SHIFT	(20)
#define AGP_MINOR_VERSION_SHIFT	(16)
#define AGPSTAT_RQ_DEPTH	(0xff000000)
#define AGPSTAT_RQ_DEPTH_SHIFT	24
#define AGPSTAT_CAL_MASK	(1<<12|1<<11|1<<10)
#define AGPSTAT_ARQSZ		(1<<15|1<<14|1<<13)
#define AGPSTAT_ARQSZ_SHIFT	13
#define AGPSTAT_SBA		(1<<9)
#define AGPSTAT_AGP_ENABLE	(1<<8)
#define AGPSTAT_FW		(1<<4)
#define AGPSTAT_MODE_3_0	(1<<3)
#define AGPSTAT2_1X		(1<<0)
#define AGPSTAT2_2X		(1<<1)
#define AGPSTAT2_4X		(1<<2)
#define AGPSTAT3_RSVD		(1<<2)
#define AGPSTAT3_8X		(1<<1)
#define AGPSTAT3_4X		(1)
#define AGPCTRL_APERENB		(1<<8)
#define AGPCTRL_GTLBEN		(1<<7)
#define AGP2_RESERVED_MASK 0x00fffcc8
#define AGP3_RESERVED_MASK 0x00ff00c4
#define AGP_ERRATA_FASTWRITES 1<<0
#define AGP_ERRATA_SBA	 1<<1
#define AGP_ERRATA_1X 1<<2
