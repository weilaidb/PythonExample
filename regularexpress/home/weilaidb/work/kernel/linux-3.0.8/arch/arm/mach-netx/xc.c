static DEFINE_MUTEX(xc_lock);
static int xc_in_use = 0;
struct fw_desc ;
struct fw_header  __attribute__ ((packed));
int xc_stop(struct xc *x)
int xc_start(struct xc *x)
int xc_running(struct xc *x)
int xc_reset(struct xc *x)
static int xc_check_ptr(struct xc *x, unsigned long adr, unsigned int size)
static int xc_patch(struct xc *x, const void *patch, int count)
int xc_request_firmware(struct xc *x)
struct xc *request_xc(int xcno, struct device *dev)
void free_xc(struct xc *x)
EXPORT_SYMBOL(free_xc);
EXPORT_SYMBOL(request_xc);
EXPORT_SYMBOL(xc_request_firmware);
EXPORT_SYMBOL(xc_reset);
EXPORT_SYMBOL(xc_running);
EXPORT_SYMBOL(xc_start);
EXPORT_SYMBOL(xc_stop);
