#define IVRS_HEADER_LENGTH 48
#define ACPI_IVHD_TYPE                  0x10
#define ACPI_IVMD_TYPE_ALL              0x20
#define ACPI_IVMD_TYPE                  0x21
#define ACPI_IVMD_TYPE_RANGE            0x22
#define IVHD_DEV_ALL                    0x01
#define IVHD_DEV_SELECT                 0x02
#define IVHD_DEV_SELECT_RANGE_START     0x03
#define IVHD_DEV_RANGE_END              0x04
#define IVHD_DEV_ALIAS                  0x42
#define IVHD_DEV_ALIAS_RANGE            0x43
#define IVHD_DEV_EXT_SELECT             0x46
#define IVHD_DEV_EXT_SELECT_RANGE       0x47
#define IVHD_FLAG_HT_TUN_EN_MASK        0x01
#define IVHD_FLAG_PASSPW_EN_MASK        0x02
#define IVHD_FLAG_RESPASSPW_EN_MASK     0x04
#define IVHD_FLAG_ISOC_EN_MASK          0x08
#define IVMD_FLAG_EXCL_RANGE            0x08
#define IVMD_FLAG_UNITY_MAP             0x01
#define ACPI_DEVFLAG_INITPASS           0x01
#define ACPI_DEVFLAG_EXTINT             0x02
#define ACPI_DEVFLAG_NMI                0x04
#define ACPI_DEVFLAG_SYSMGT1            0x10
#define ACPI_DEVFLAG_SYSMGT2            0x20
#define ACPI_DEVFLAG_LINT0              0x40
#define ACPI_DEVFLAG_LINT1              0x80
#define ACPI_DEVFLAG_ATSDIS             0x10000000
struct ivhd_header  __attribute__((packed));
struct ivhd_entry  __attribute__((packed));
struct ivmd_header  __attribute__((packed));
bool amd_iommu_dump;
static int __initdata amd_iommu_detected;
static bool __initdata amd_iommu_disabled;
u16 amd_iommu_last_bdf;
LIST_HEAD(amd_iommu_unity_map);
bool amd_iommu_unmap_flush;
LIST_HEAD(amd_iommu_list);
struct amd_iommu *amd_iommus[MAX_IOMMUS];
int amd_iommus_present;
bool amd_iommu_np_cache __read_mostly;
bool amd_iommu_iotlb_sup __read_mostly = true;
static int __initdata amd_iommu_init_err;
LIST_HEAD(amd_iommu_pd_list);
spinlock_t amd_iommu_pd_lock;
struct dev_table_entry *amd_iommu_dev_table;
u16 *amd_iommu_alias_table;
struct amd_iommu **amd_iommu_rlookup_table;
unsigned long *amd_iommu_pd_alloc_bitmap;
static u32 dev_table_size;
static u32 alias_table_size;
static u32 rlookup_table_size;
extern void iommu_flush_all_caches(struct amd_iommu *iommu);
static inline void update_last_devid(u16 devid)
static inline unsigned long tbl_size(int entry_size)
static u32 iommu_read_l1(struct amd_iommu *iommu, u16 l1, u8 address)
static void iommu_write_l1(struct amd_iommu *iommu, u16 l1, u8 address, u32 val)
static u32 iommu_read_l2(struct amd_iommu *iommu, u8 address)
static void iommu_write_l2(struct amd_iommu *iommu, u8 address, u32 val)
static void iommu_set_exclusion_range(struct amd_iommu *iommu)
static void __init iommu_set_device_table(struct amd_iommu *iommu)
static void iommu_feature_enable(struct amd_iommu *iommu, u8 bit)
static void iommu_feature_disable(struct amd_iommu *iommu, u8 bit)
static void iommu_enable(struct amd_iommu *iommu)
static void iommu_disable(struct amd_iommu *iommu)
static u8 * __init iommu_map_mmio_space(u64 address)
static void __init iommu_unmap_mmio_space(struct amd_iommu *iommu)
static inline int ivhd_entry_length(u8 *ivhd)
static int __init find_last_devid_on_pci(int bus, int dev, int fn, int cap_ptr)
static int __init find_last_devid_from_ivhd(struct ivhd_header *h)
static int __init find_last_devid_acpi(struct acpi_table_header *table)
static u8 * __init alloc_command_buffer(struct amd_iommu *iommu)
void amd_iommu_reset_cmd_buffer(struct amd_iommu *iommu)
static void iommu_enable_command_buffer(struct amd_iommu *iommu)
static void __init free_command_buffer(struct amd_iommu *iommu)
static u8 * __init alloc_event_buffer(struct amd_iommu *iommu)
static void iommu_enable_event_buffer(struct amd_iommu *iommu)
static void __init free_event_buffer(struct amd_iommu *iommu)
static void set_dev_entry_bit(u16 devid, u8 bit)
static int get_dev_entry_bit(u16 devid, u8 bit)
void amd_iommu_apply_erratum_63(u16 devid)
static void __init set_iommu_for_device(struct amd_iommu *iommu, u16 devid)
static void __init set_dev_entry_from_acpi(struct amd_iommu *iommu,
u16 devid, u32 flags, u32 ext_flags)
static void __init set_device_exclusion_range(u16 devid, struct ivmd_header *m)
static void __init init_iommu_from_pci(struct amd_iommu *iommu)
static void __init init_iommu_from_acpi(struct amd_iommu *iommu,
struct ivhd_header *h)
static int __init init_iommu_devices(struct amd_iommu *iommu)
static void __init free_iommu_one(struct amd_iommu *iommu)
static void __init free_iommu_all(void)
static int __init init_iommu_one(struct amd_iommu *iommu, struct ivhd_header *h)
static int __init init_iommu_all(struct acpi_table_header *table)
static int iommu_setup_msi(struct amd_iommu *iommu)
static int iommu_init_msi(struct amd_iommu *iommu)
static void __init free_unity_maps(void)
static int __init init_exclusion_range(struct ivmd_header *m)
static int __init init_unity_map_range(struct ivmd_header *m)
static int __init init_memory_definitions(struct acpi_table_header *table)
static void init_device_table(void)
static void iommu_init_flags(struct amd_iommu *iommu)
static void iommu_apply_resume_quirks(struct amd_iommu *iommu)
static void enable_iommus(void)
static void disable_iommus(void)
static void amd_iommu_resume(void)
static int amd_iommu_suspend(void)
static struct syscore_ops amd_iommu_syscore_ops = ;
static int __init amd_iommu_init(void)
static int __init early_amd_iommu_detect(struct acpi_table_header *table)
int __init amd_iommu_detect(void)
static int __init parse_amd_iommu_dump(char *str)
static int __init parse_amd_iommu_options(char *str)
__setup("amd_iommu_dump", parse_amd_iommu_dump);
__setup("amd_iommu=", parse_amd_iommu_options);
IOMMU_INIT_FINISH(amd_iommu_detect,
gart_iommu_hole_init,
0,
0);
