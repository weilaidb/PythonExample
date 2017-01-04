#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd_erp:"
struct dasd_ccw_req *
dasd_alloc_erp_request(char *magic, int cplength, int datasize,
struct dasd_device * device)
void
dasd_free_erp_request(struct dasd_ccw_req *cqr, struct dasd_device * device)
struct dasd_ccw_req *
dasd_default_erp_action(struct dasd_ccw_req *cqr)
struct dasd_ccw_req *dasd_default_erp_postaction(struct dasd_ccw_req *cqr)
void
dasd_log_sense(struct dasd_ccw_req *cqr, struct irb *irb)
void
dasd_log_sense_dbf(struct dasd_ccw_req *cqr, struct irb *irb)
EXPORT_SYMBOL(dasd_log_sense_dbf);
EXPORT_SYMBOL(dasd_default_erp_action);
EXPORT_SYMBOL(dasd_default_erp_postaction);
EXPORT_SYMBOL(dasd_alloc_erp_request);
EXPORT_SYMBOL(dasd_free_erp_request);
EXPORT_SYMBOL(dasd_log_sense);
