DEFINE_SPINLOCK(global_register_lock);
static int number_rgmii_ports;
static void cvm_oct_rgmii_poll(struct net_device *dev)
static irqreturn_t cvm_oct_rgmii_rml_interrupt(int cpl, void *dev_id)
int cvm_oct_rgmii_open(struct net_device *dev)
int cvm_oct_rgmii_stop(struct net_device *dev)
static void cvm_oct_rgmii_immediate_poll(struct work_struct *work)
int cvm_oct_rgmii_init(struct net_device *dev)
void cvm_oct_rgmii_uninit(struct net_device *dev)
