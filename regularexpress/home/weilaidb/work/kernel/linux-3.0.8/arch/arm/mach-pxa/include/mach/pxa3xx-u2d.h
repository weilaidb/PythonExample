#define __PXA310_U2D__
struct pxa3xx_u2d_platform_data ;
int pxa3xx_u2d_start_hc(struct usb_bus *host);
void pxa3xx_u2d_stop_hc(struct usb_bus *host);
extern void pxa3xx_set_u2d_info(struct pxa3xx_u2d_platform_data *info);
