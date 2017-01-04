#define _XENBUS_COMMS_H
int xs_init(void);
int xb_init_comms(void);
int xb_write(const void *data, unsigned len);
int xb_read(void *data, unsigned len);
int xb_data_to_read(void);
int xb_wait_for_data_to_read(void);
int xs_input_avail(void);
extern struct xenstore_domain_interface *xen_store_interface;
extern int xen_store_evtchn;
