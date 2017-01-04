static LIST_HEAD(rio_mports);
static unsigned char next_portid;
u16 rio_local_get_device_id(struct rio_mport *port)
int rio_request_inb_mbox(struct rio_mport *mport,
void *dev_id,
int mbox,
int entries,
void (*minb) (struct rio_mport * mport, void *dev_id, int mbox,
int slot))
int rio_release_inb_mbox(struct rio_mport *mport, int mbox)
int rio_request_outb_mbox(struct rio_mport *mport,
void *dev_id,
int mbox,
int entries,
void (*moutb) (struct rio_mport * mport, void *dev_id, int mbox, int slot))
int rio_release_outb_mbox(struct rio_mport *mport, int mbox)
static int
rio_setup_inb_dbell(struct rio_mport *mport, void *dev_id, struct resource *res,
void (*dinb) (struct rio_mport * mport, void *dev_id, u16 src, u16 dst,
u16 info))
int rio_request_inb_dbell(struct rio_mport *mport,
void *dev_id,
u16 start,
u16 end,
void (*dinb) (struct rio_mport * mport, void *dev_id, u16 src,
u16 dst, u16 info))
int rio_release_inb_dbell(struct rio_mport *mport, u16 start, u16 end)
struct resource *rio_request_outb_dbell(struct rio_dev *rdev, u16 start,
u16 end)
int rio_release_outb_dbell(struct rio_dev *rdev, struct resource *res)
int rio_request_inb_pwrite(struct rio_dev *rdev,
int (*pwcback)(struct rio_dev *rdev, union rio_pw_msg *msg, int step))
EXPORT_SYMBOL_GPL(rio_request_inb_pwrite);
int rio_release_inb_pwrite(struct rio_dev *rdev)
EXPORT_SYMBOL_GPL(rio_release_inb_pwrite);
u32
rio_mport_get_physefb(struct rio_mport *port, int local,
u16 destid, u8 hopcount)
struct rio_dev *rio_get_comptag(u32 comp_tag, struct rio_dev *from)
int rio_set_port_lockout(struct rio_dev *rdev, u32 pnum, int lock)
static int
rio_chk_dev_route(struct rio_dev *rdev, struct rio_dev **nrdev, int *npnum)
int
rio_mport_chk_dev_access(struct rio_mport *mport, u16 destid, u8 hopcount)
static int rio_chk_dev_access(struct rio_dev *rdev)
static int
rio_get_input_status(struct rio_dev *rdev, int pnum, u32 *lnkresp)
static int rio_clr_err_stopped(struct rio_dev *rdev, u32 pnum, u32 err_status)
int rio_inb_pwrite_handler(union rio_pw_msg *pw_msg)
EXPORT_SYMBOL_GPL(rio_inb_pwrite_handler);
u32
rio_mport_get_efb(struct rio_mport *port, int local, u16 destid,
u8 hopcount, u32 from)
u32
rio_mport_get_feature(struct rio_mport * port, int local, u16 destid,
u8 hopcount, int ftr)
struct rio_dev *rio_get_asm(u16 vid, u16 did,
u16 asm_vid, u16 asm_did, struct rio_dev *from)
struct rio_dev *rio_get_device(u16 vid, u16 did, struct rio_dev *from)
int rio_std_route_add_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 route_port)
int rio_std_route_get_entry(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table, u16 route_destid, u8 *route_port)
int rio_std_route_clr_table(struct rio_mport *mport, u16 destid, u8 hopcount,
u16 table)
static void rio_fixup_device(struct rio_dev *dev)
static int __devinit rio_init(void)
int __devinit rio_init_mports(void)
device_initcall_sync(rio_init_mports);
static int hdids[RIO_MAX_MPORTS + 1];
static int rio_get_hdid(int index)
static int rio_hdid_setup(char *str)
__setup("riohdid=", rio_hdid_setup);
int rio_register_mport(struct rio_mport *port)
EXPORT_SYMBOL_GPL(rio_local_get_device_id);
EXPORT_SYMBOL_GPL(rio_get_device);
EXPORT_SYMBOL_GPL(rio_get_asm);
EXPORT_SYMBOL_GPL(rio_request_inb_dbell);
EXPORT_SYMBOL_GPL(rio_release_inb_dbell);
EXPORT_SYMBOL_GPL(rio_request_outb_dbell);
EXPORT_SYMBOL_GPL(rio_release_outb_dbell);
EXPORT_SYMBOL_GPL(rio_request_inb_mbox);
EXPORT_SYMBOL_GPL(rio_release_inb_mbox);
EXPORT_SYMBOL_GPL(rio_request_outb_mbox);
EXPORT_SYMBOL_GPL(rio_release_outb_mbox);
