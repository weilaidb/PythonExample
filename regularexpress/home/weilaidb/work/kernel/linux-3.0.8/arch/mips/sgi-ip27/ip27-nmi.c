#define CNODEID_NONE (cnodeid_t)-1
typedef unsigned long machreg_t;
static arch_spinlock_t nmi_lock = __ARCH_SPIN_LOCK_UNLOCKED;
void nmi_dump(void)
void install_cpu_nmi_handler(int slice)
void nmi_cpu_eframe_save(nasid_t nasid, int slice)
void nmi_dump_hub_irq(nasid_t nasid, int slice)
void nmi_node_eframe_save(cnodeid_t  cnode)
void
nmi_eframes_save(void)
void
cont_nmi_dump(void)
