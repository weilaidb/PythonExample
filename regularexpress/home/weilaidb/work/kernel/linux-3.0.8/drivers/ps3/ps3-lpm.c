#define PS3_PM_BOOKMARK_START                    0x8000000000000000ULL
#define PS3_PM_BOOKMARK_STOP                     0x4000000000000000ULL
#define PS3_PM_BOOKMARK_TAG_KERNEL               0x1000000000000000ULL
#define PS3_PM_BOOKMARK_TAG_USER                 0x3000000000000000ULL
#define PS3_PM_BOOKMARK_TAG_MASK_HI              0xF000000000000000ULL
#define PS3_PM_BOOKMARK_TAG_MASK_LO              0x0F00000000000000ULL
#define PS3_PM_CONTROL_PPU_TH0_BOOKMARK          0x00001000
#define PS3_PM_CONTROL_PPU_TH1_BOOKMARK          0x00000800
#define PS3_PM_CONTROL_PPU_COUNT_MODE_MASK       0x000C0000
#define PS3_PM_CONTROL_PPU_COUNT_MODE_PROBLEM    0x00080000
#define PS3_WRITE_PM_MASK                        0xFFFFFFFFFFFFFFFFULL
#define PS3_PM_START_STOP_PPU_TH0_BOOKMARK_START 0x02000000
#define PS3_PM_START_STOP_PPU_TH1_BOOKMARK_START 0x01000000
#define PS3_PM_START_STOP_PPU_TH0_BOOKMARK_STOP  0x00020000
#define PS3_PM_START_STOP_PPU_TH1_BOOKMARK_STOP  0x00010000
#define PS3_PM_START_STOP_START_MASK             0xFF000000
#define PS3_PM_START_STOP_STOP_MASK              0x00FF0000
#define PS3_PM_COUNTER_MASK_HI                   0xFFFFFFFF00000000ULL
#define PS3_PM_COUNTER_MASK_LO                   0x00000000FFFFFFFFULL
#define PM_ISLAND2_BASE_SIGNAL_GROUP_NUMBER  0
#define PM_ISLAND2_SIGNAL_GROUP_NUMBER1      6
#define PM_ISLAND2_SIGNAL_GROUP_NUMBER2      7
#define PM_ISLAND3_BASE_SIGNAL_GROUP_NUMBER  7
#define PM_ISLAND4_BASE_SIGNAL_GROUP_NUMBER  15
#define PM_SPU_TRIGGER_SIGNAL_GROUP_NUMBER   17
#define PM_SPU_EVENT_SIGNAL_GROUP_NUMBER     18
#define PM_ISLAND5_BASE_SIGNAL_GROUP_NUMBER  18
#define PM_ISLAND6_BASE_SIGNAL_GROUP_NUMBER  24
#define PM_ISLAND7_BASE_SIGNAL_GROUP_NUMBER  49
#define PM_ISLAND8_BASE_SIGNAL_GROUP_NUMBER  52
#define PM_SIG_GROUP_SPU                     41
#define PM_SIG_GROUP_SPU_TRIGGER             42
#define PM_SIG_GROUP_SPU_EVENT               43
#define PM_SIG_GROUP_MFC_MAX                 60
struct ps3_lpm_shadow_regs ;
#define PS3_LPM_SHADOW_REG_INIT 0xFFFFFFFF00000000ULL
struct ps3_lpm_priv ;
enum ;
static struct ps3_lpm_priv *lpm_priv;
static struct device *sbd_core(void)
enum ;
void ps3_set_bookmark(u64 bookmark)
EXPORT_SYMBOL_GPL(ps3_set_bookmark);
void ps3_set_pm_bookmark(u64 tag, u64 incident, u64 th_id)
EXPORT_SYMBOL_GPL(ps3_set_pm_bookmark);
u32 ps3_read_phys_ctr(u32 cpu, u32 phys_ctr)
EXPORT_SYMBOL_GPL(ps3_read_phys_ctr);
void ps3_write_phys_ctr(u32 cpu, u32 phys_ctr, u32 val)
EXPORT_SYMBOL_GPL(ps3_write_phys_ctr);
u32 ps3_read_ctr(u32 cpu, u32 ctr)
EXPORT_SYMBOL_GPL(ps3_read_ctr);
void ps3_write_ctr(u32 cpu, u32 ctr, u32 val)
EXPORT_SYMBOL_GPL(ps3_write_ctr);
u32 ps3_read_pm07_control(u32 cpu, u32 ctr)
EXPORT_SYMBOL_GPL(ps3_read_pm07_control);
void ps3_write_pm07_control(u32 cpu, u32 ctr, u32 val)
EXPORT_SYMBOL_GPL(ps3_write_pm07_control);
u32 ps3_read_pm(u32 cpu, enum pm_reg_name reg)
EXPORT_SYMBOL_GPL(ps3_read_pm);
void ps3_write_pm(u32 cpu, enum pm_reg_name reg, u32 val)
EXPORT_SYMBOL_GPL(ps3_write_pm);
u32 ps3_get_ctr_size(u32 cpu, u32 phys_ctr)
EXPORT_SYMBOL_GPL(ps3_get_ctr_size);
void ps3_set_ctr_size(u32 cpu, u32 phys_ctr, u32 ctr_size)
EXPORT_SYMBOL_GPL(ps3_set_ctr_size);
static u64 pm_translate_signal_group_number_on_island2(u64 subgroup)
static u64 pm_translate_signal_group_number_on_island3(u64 subgroup)
static u64 pm_translate_signal_group_number_on_island4(u64 subgroup)
static u64 pm_translate_signal_group_number_on_island5(u64 subgroup)
static u64 pm_translate_signal_group_number_on_island6(u64 subgroup,
u64 subsubgroup)
static u64 pm_translate_signal_group_number_on_island7(u64 subgroup)
static u64 pm_translate_signal_group_number_on_island8(u64 subgroup)
static u64 pm_signal_group_to_ps3_lv1_signal_group(u64 group)
static u64 pm_bus_word_to_ps3_lv1_bus_word(u8 word)
static int __ps3_set_signal(u64 lv1_signal_group, u64 bus_select,
u64 signal_select, u64 attr1, u64 attr2, u64 attr3)
int ps3_set_signal(u64 signal_group, u8 signal_bit, u16 sub_unit,
u8 bus_word)
EXPORT_SYMBOL_GPL(ps3_set_signal);
u32 ps3_get_hw_thread_id(int cpu)
EXPORT_SYMBOL_GPL(ps3_get_hw_thread_id);
void ps3_enable_pm(u32 cpu)
EXPORT_SYMBOL_GPL(ps3_enable_pm);
void ps3_disable_pm(u32 cpu)
EXPORT_SYMBOL_GPL(ps3_disable_pm);
int ps3_lpm_copy_tb(unsigned long offset, void *buf, unsigned long count,
unsigned long *bytes_copied)
EXPORT_SYMBOL_GPL(ps3_lpm_copy_tb);
int ps3_lpm_copy_tb_to_user(unsigned long offset, void __user *buf,
unsigned long count, unsigned long *bytes_copied)
EXPORT_SYMBOL_GPL(ps3_lpm_copy_tb_to_user);
u32 ps3_get_and_clear_pm_interrupts(u32 cpu)
EXPORT_SYMBOL_GPL(ps3_get_and_clear_pm_interrupts);
void ps3_enable_pm_interrupts(u32 cpu, u32 thread, u32 mask)
EXPORT_SYMBOL_GPL(ps3_enable_pm_interrupts);
void ps3_disable_pm_interrupts(u32 cpu)
EXPORT_SYMBOL_GPL(ps3_disable_pm_interrupts);
int ps3_lpm_open(enum ps3_lpm_tb_type tb_type, void *tb_cache,
u64 tb_cache_size)
EXPORT_SYMBOL_GPL(ps3_lpm_open);
int ps3_lpm_close(void)
EXPORT_SYMBOL_GPL(ps3_lpm_close);
static int __devinit ps3_lpm_probe(struct ps3_system_bus_device *dev)
static int ps3_lpm_remove(struct ps3_system_bus_device *dev)
static struct ps3_system_bus_driver ps3_lpm_driver = ;
static int __init ps3_lpm_init(void)
static void __exit ps3_lpm_exit(void)
module_init(ps3_lpm_init);
module_exit(ps3_lpm_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PS3 Logical Performance Monitor Driver");
MODULE_AUTHOR("Sony Corporation");
MODULE_ALIAS(PS3_MODULE_ALIAS_LPM);
