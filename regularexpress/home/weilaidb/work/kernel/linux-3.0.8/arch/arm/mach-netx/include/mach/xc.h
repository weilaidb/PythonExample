#define __ASM_ARCH_XC_H
struct xc ;
int xc_reset(struct xc *x);
int xc_stop(struct xc* x);
int xc_start(struct xc *x);
int xc_running(struct xc *x);
int xc_request_firmware(struct xc* x);
struct xc* request_xc(int xcno, struct device *dev);
void free_xc(struct xc *x);
