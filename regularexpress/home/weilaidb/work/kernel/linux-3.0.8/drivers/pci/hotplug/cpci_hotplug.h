#define _CPCI_HOTPLUG_H
#define HS_CSR_INS	0x0080
#define HS_CSR_EXT	0x0040
#define HS_CSR_PI	0x0030
#define HS_CSR_LOO	0x0008
#define HS_CSR_PIE	0x0004
#define HS_CSR_EIM	0x0002
#define HS_CSR_DHA	0x0001
struct slot ;
struct cpci_hp_controller_ops ;
struct cpci_hp_controller ;
static inline const char *slot_name(struct slot *slot)
extern int cpci_hp_register_controller(struct cpci_hp_controller *controller);
extern int cpci_hp_unregister_controller(struct cpci_hp_controller *controller);
extern int cpci_hp_register_bus(struct pci_bus *bus, u8 first, u8 last);
extern int cpci_hp_unregister_bus(struct pci_bus *bus);
extern int cpci_hp_start(void);
extern int cpci_hp_stop(void);
extern u8 cpci_get_attention_status(struct slot *slot);
extern u8 cpci_get_latch_status(struct slot *slot);
extern u8 cpci_get_adapter_status(struct slot *slot);
extern u16 cpci_get_hs_csr(struct slot * slot);
extern int cpci_set_attention_status(struct slot *slot, int status);
extern int cpci_check_and_clear_ins(struct slot * slot);
extern int cpci_check_ext(struct slot * slot);
extern int cpci_clear_ext(struct slot * slot);
extern int cpci_led_on(struct slot * slot);
extern int cpci_led_off(struct slot * slot);
extern int cpci_configure_slot(struct slot *slot);
extern int cpci_unconfigure_slot(struct slot *slot);
