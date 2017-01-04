static int mantis_ca_read_attr_mem(struct dvb_ca_en50221 *en50221, int slot, int addr)
static int mantis_ca_write_attr_mem(struct dvb_ca_en50221 *en50221, int slot, int addr, u8 data)
static int mantis_ca_read_cam_ctl(struct dvb_ca_en50221 *en50221, int slot, u8 addr)
static int mantis_ca_write_cam_ctl(struct dvb_ca_en50221 *en50221, int slot, u8 addr, u8 data)
static int mantis_ca_slot_reset(struct dvb_ca_en50221 *en50221, int slot)
static int mantis_ca_slot_shutdown(struct dvb_ca_en50221 *en50221, int slot)
static int mantis_ts_control(struct dvb_ca_en50221 *en50221, int slot)
static int mantis_slot_status(struct dvb_ca_en50221 *en50221, int slot, int open)
int mantis_ca_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_ca_init);
void mantis_ca_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_ca_exit);
