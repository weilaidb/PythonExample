#define _ASM_MACH_POWERTV_ASIC_H
#define DVR_CAPABLE     (1<<0)
#define PCIE_CAPABLE    (1<<1)
#define FFS_CAPABLE     (1<<2)
#define DISPLAY_CAPABLE (1<<3)
enum family_type ;
extern const struct register_map calliope_register_map;
extern const struct register_map cronus_register_map;
extern const struct register_map gaia_register_map;
extern const struct register_map zeus_register_map;
extern struct resource dvr_cronus_resources[];
extern struct resource dvr_gaia_resources[];
extern struct resource dvr_zeus_resources[];
extern struct resource non_dvr_calliope_resources[];
extern struct resource non_dvr_cronus_resources[];
extern struct resource non_dvr_cronuslite_resources[];
extern struct resource non_dvr_gaia_resources[];
extern struct resource non_dvr_vz_calliope_resources[];
extern struct resource non_dvr_vze_calliope_resources[];
extern struct resource non_dvr_vzf_calliope_resources[];
extern struct resource non_dvr_zeus_resources[];
extern void powertv_platform_init(void);
extern void platform_alloc_bootmem(void);
extern enum asic_type platform_get_asic(void);
extern enum family_type platform_get_family(void);
extern int platform_supports_dvr(void);
extern int platform_supports_ffs(void);
extern int platform_supports_pcie(void);
extern int platform_supports_display(void);
extern void configure_platform(void);
#define ASIC_RESOURCE_GET_EXISTS 1
extern struct resource *asic_resource_get(const char *name);
extern void platform_release_memory(void *baddr, int size);
struct usb_hcd;
extern void platform_configure_usb_ehci(void);
extern void platform_unconfigure_usb_ehci(void);
extern void platform_configure_usb_ohci(void);
extern void platform_unconfigure_usb_ohci(void);
extern struct resource asic_resource;
extern int platform_usb_devices_init(struct platform_device **echi_dev,
struct platform_device **ohci_dev);
extern void set_reboot_cause(char code, unsigned int data, unsigned int data2);
extern void set_locked_reboot_cause(char code, unsigned int data,
unsigned int data2);
enum sys_reboot_type ;
