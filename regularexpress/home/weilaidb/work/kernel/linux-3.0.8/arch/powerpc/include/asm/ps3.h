#if !defined(_ASM_POWERPC_PS3_H)
#define _ASM_POWERPC_PS3_H
union ps3_firmware_version ;
void ps3_get_firmware_version(union ps3_firmware_version *v);
int ps3_compare_firmware_version(u16 major, u16 minor, u16 rev);
enum ps3_param_av_multi_out ;
enum ps3_param_av_multi_out ps3_os_area_get_av_multi_out(void);
extern u64 ps3_os_area_get_rtc_diff(void);
extern void ps3_os_area_set_rtc_diff(u64 rtc_diff);
struct ps3_os_area_flash_ops ;
extern void ps3_os_area_flash_register(const struct ps3_os_area_flash_ops *ops);
enum ps3_dma_page_size ;
enum ps3_dma_region_type ;
struct ps3_dma_region_ops;
struct ps3_dma_region ;
struct ps3_dma_region_ops ;
struct ps3_system_bus_device;
int ps3_dma_region_init(struct ps3_system_bus_device *dev,
struct ps3_dma_region *r, enum ps3_dma_page_size page_size,
enum ps3_dma_region_type region_type, void *addr, unsigned long len);
int ps3_dma_region_create(struct ps3_dma_region *r);
int ps3_dma_region_free(struct ps3_dma_region *r);
int ps3_dma_map(struct ps3_dma_region *r, unsigned long virt_addr,
unsigned long len, dma_addr_t *bus_addr,
u64 iopte_pp);
int ps3_dma_unmap(struct ps3_dma_region *r, dma_addr_t bus_addr,
unsigned long len);
enum ps3_mmio_page_size ;
struct ps3_mmio_region_ops;
struct ps3_mmio_region ;
struct ps3_mmio_region_ops ;
int ps3_mmio_region_init(struct ps3_system_bus_device *dev,
struct ps3_mmio_region *r, unsigned long bus_addr, unsigned long len,
enum ps3_mmio_page_size page_size);
int ps3_mmio_region_create(struct ps3_mmio_region *r);
int ps3_free_mmio_region(struct ps3_mmio_region *r);
unsigned long ps3_mm_phys_to_lpar(unsigned long phys_addr);
enum ps3_cpu_binding ;
int ps3_irq_plug_setup(enum ps3_cpu_binding cpu, unsigned long outlet,
unsigned int *virq);
int ps3_irq_plug_destroy(unsigned int virq);
int ps3_event_receive_port_setup(enum ps3_cpu_binding cpu, unsigned int *virq);
int ps3_event_receive_port_destroy(unsigned int virq);
int ps3_send_event_locally(unsigned int virq);
int ps3_io_irq_setup(enum ps3_cpu_binding cpu, unsigned int interrupt_id,
unsigned int *virq);
int ps3_io_irq_destroy(unsigned int virq);
int ps3_vuart_irq_setup(enum ps3_cpu_binding cpu, void* virt_addr_bmp,
unsigned int *virq);
int ps3_vuart_irq_destroy(unsigned int virq);
int ps3_spe_irq_setup(enum ps3_cpu_binding cpu, unsigned long spe_id,
unsigned int class, unsigned int *virq);
int ps3_spe_irq_destroy(unsigned int virq);
int ps3_sb_event_receive_port_setup(struct ps3_system_bus_device *dev,
enum ps3_cpu_binding cpu, unsigned int *virq);
int ps3_sb_event_receive_port_destroy(struct ps3_system_bus_device *dev,
unsigned int virq);
enum lv1_result ;
static inline const char* ps3_result(int result)
enum ps3_match_id ;
enum ps3_match_sub_id ;
#define PS3_MODULE_ALIAS_EHCI		"ps3:1:0"
#define PS3_MODULE_ALIAS_OHCI		"ps3:2:0"
#define PS3_MODULE_ALIAS_GELIC		"ps3:3:0"
#define PS3_MODULE_ALIAS_AV_SETTINGS	"ps3:4:0"
#define PS3_MODULE_ALIAS_SYSTEM_MANAGER	"ps3:5:0"
#define PS3_MODULE_ALIAS_STOR_DISK	"ps3:6:0"
#define PS3_MODULE_ALIAS_STOR_ROM	"ps3:7:0"
#define PS3_MODULE_ALIAS_STOR_FLASH	"ps3:8:0"
#define PS3_MODULE_ALIAS_SOUND		"ps3:9:0"
#define PS3_MODULE_ALIAS_GPU_FB		"ps3:10:1"
#define PS3_MODULE_ALIAS_GPU_RAMDISK	"ps3:10:2"
#define PS3_MODULE_ALIAS_LPM		"ps3:11:0"
enum ps3_system_bus_device_type ;
struct ps3_system_bus_device ;
int ps3_open_hv_device(struct ps3_system_bus_device *dev);
int ps3_close_hv_device(struct ps3_system_bus_device *dev);
struct ps3_system_bus_driver ;
int ps3_system_bus_device_register(struct ps3_system_bus_device *dev);
int ps3_system_bus_driver_register(struct ps3_system_bus_driver *drv);
void ps3_system_bus_driver_unregister(struct ps3_system_bus_driver *drv);
static inline struct ps3_system_bus_driver *ps3_drv_to_system_bus_drv(
struct device_driver *_drv)
static inline struct ps3_system_bus_device *ps3_dev_to_system_bus_dev(
struct device *_dev)
static inline struct ps3_system_bus_driver *
ps3_system_bus_dev_to_system_bus_drv(struct ps3_system_bus_device *_dev)
static inline void ps3_system_bus_set_drvdata(
struct ps3_system_bus_device *dev, void *data)
static inline void *ps3_system_bus_get_drvdata(
struct ps3_system_bus_device *dev)
extern struct bus_type ps3_system_bus_type;
struct ps3_sys_manager_ops ;
void ps3_sys_manager_register_ops(const struct ps3_sys_manager_ops *ops);
void __noreturn ps3_sys_manager_power_off(void);
void __noreturn ps3_sys_manager_restart(void);
void __noreturn ps3_sys_manager_halt(void);
int ps3_sys_manager_get_wol(void);
void ps3_sys_manager_set_wol(int state);
struct ps3_prealloc ;
extern struct ps3_prealloc ps3fb_videomemory;
extern struct ps3_prealloc ps3flash_bounce_buffer;
enum ps3_lpm_rights ;
enum ps3_lpm_tb_type ;
int ps3_lpm_open(enum ps3_lpm_tb_type tb_type, void *tb_cache,
u64 tb_cache_size);
int ps3_lpm_close(void);
int ps3_lpm_copy_tb(unsigned long offset, void *buf, unsigned long count,
unsigned long *bytes_copied);
int ps3_lpm_copy_tb_to_user(unsigned long offset, void __user *buf,
unsigned long count, unsigned long *bytes_copied);
void ps3_set_bookmark(u64 bookmark);
void ps3_set_pm_bookmark(u64 tag, u64 incident, u64 th_id);
int ps3_set_signal(u64 rtas_signal_group, u8 signal_bit, u16 sub_unit,
u8 bus_word);
u32 ps3_read_phys_ctr(u32 cpu, u32 phys_ctr);
void ps3_write_phys_ctr(u32 cpu, u32 phys_ctr, u32 val);
u32 ps3_read_ctr(u32 cpu, u32 ctr);
void ps3_write_ctr(u32 cpu, u32 ctr, u32 val);
u32 ps3_read_pm07_control(u32 cpu, u32 ctr);
void ps3_write_pm07_control(u32 cpu, u32 ctr, u32 val);
u32 ps3_read_pm(u32 cpu, enum pm_reg_name reg);
void ps3_write_pm(u32 cpu, enum pm_reg_name reg, u32 val);
u32 ps3_get_ctr_size(u32 cpu, u32 phys_ctr);
void ps3_set_ctr_size(u32 cpu, u32 phys_ctr, u32 ctr_size);
void ps3_enable_pm(u32 cpu);
void ps3_disable_pm(u32 cpu);
void ps3_enable_pm_interrupts(u32 cpu, u32 thread, u32 mask);
void ps3_disable_pm_interrupts(u32 cpu);
u32 ps3_get_and_clear_pm_interrupts(u32 cpu);
void ps3_sync_irq(int node);
u32 ps3_get_hw_thread_id(int cpu);
u64 ps3_get_spe_id(void *arg);
