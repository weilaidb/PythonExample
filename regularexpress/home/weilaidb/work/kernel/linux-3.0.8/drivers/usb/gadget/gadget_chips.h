#define __GADGET_CHIPS_H
#define	gadget_is_net2280(g)	!strcmp("net2280", (g)->name)
#define	gadget_is_net2280(g)	0
#define	gadget_is_amd5536udc(g)	!strcmp("amd5536udc", (g)->name)
#define	gadget_is_amd5536udc(g)	0
#define	gadget_is_dummy(g)	!strcmp("dummy_udc", (g)->name)
#define	gadget_is_dummy(g)	0
#define	gadget_is_pxa(g)	!strcmp("pxa25x_udc", (g)->name)
#define	gadget_is_pxa(g)	0
#define	gadget_is_goku(g)	!strcmp("goku_udc", (g)->name)
#define	gadget_is_goku(g)	0
#define	gadget_is_omap(g)	!strcmp("omap_udc", (g)->name)
#define	gadget_is_omap(g)	0
#define	gadget_is_pxa27x(g)	!strcmp("pxa27x_udc", (g)->name)
#define	gadget_is_pxa27x(g)	0
#define gadget_is_atmel_usba(g)	!strcmp("atmel_usba_udc", (g)->name)
#define gadget_is_atmel_usba(g)	0
#define gadget_is_s3c2410(g)    !strcmp("s3c2410_udc", (g)->name)
#define gadget_is_s3c2410(g)    0
#define gadget_is_at91(g)	!strcmp("at91_udc", (g)->name)
#define gadget_is_at91(g)	0
#define gadget_is_imx(g)	!strcmp("imx_udc", (g)->name)
#define gadget_is_imx(g)	0
#define gadget_is_fsl_usb2(g)	!strcmp("fsl-usb2-udc", (g)->name)
#define gadget_is_fsl_usb2(g)	0
#define gadget_is_musbhdrc(g)	!strcmp("musb-hdrc", (g)->name)
#define gadget_is_musbhdrc(g)	0
#define gadget_is_langwell(g)	(!strcmp("langwell_udc", (g)->name))
#define gadget_is_langwell(g)	0
#define	gadget_is_m66592(g)	!strcmp("m66592_udc", (g)->name)
#define	gadget_is_m66592(g)	0
#define gadget_is_fsl_qe(g)	!strcmp("fsl_qe_udc", (g)->name)
#define gadget_is_fsl_qe(g)	0
#define gadget_is_ci13xxx_pci(g)	(!strcmp("ci13xxx_pci", (g)->name))
#define gadget_is_ci13xxx_pci(g)	0
#define	gadget_is_r8a66597(g)	!strcmp("r8a66597_udc", (g)->name)
#define	gadget_is_r8a66597(g)	0
#define gadget_is_s3c_hsotg(g)    (!strcmp("s3c-hsotg", (g)->name))
#define gadget_is_s3c_hsotg(g)    0
#define gadget_is_s3c_hsudc(g) (!strcmp("s3c-hsudc", (g)->name))
#define gadget_is_s3c_hsudc(g) 0
#define	gadget_is_pch(g)	(!strcmp("pch_udc", (g)->name))
#define	gadget_is_pch(g)	0
#define gadget_is_ci13xxx_msm(g)	(!strcmp("ci13xxx_msm", (g)->name))
#define gadget_is_ci13xxx_msm(g)	0
#define	gadget_is_renesas_usbhs(g) (!strcmp("renesas_usbhs_udc", (g)->name))
#define	gadget_is_renesas_usbhs(g) 0
static inline int usb_gadget_controller_number(struct usb_gadget *gadget)
static inline bool gadget_supports_altsettings(struct usb_gadget *gadget)
