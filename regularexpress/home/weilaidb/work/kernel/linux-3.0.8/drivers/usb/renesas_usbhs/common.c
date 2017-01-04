#define USBHSF_RUNTIME_PWCTRL	(1 << 0)
#define usbhsc_flags_init(p)   do  while (0)
#define usbhsc_flags_set(p, b) ((p)->flags |=  (b))
#define usbhsc_flags_clr(p, b) ((p)->flags &= ~(b))
#define usbhsc_flags_has(p, b) ((p)->flags &   (b))
#define usbhs_platform_call(priv, func, args...)\
(!(priv) ? -ENODEV :			\
!((priv)->pfunc->func) ? 0 :		\
(priv)->pfunc->func(args))
u16 usbhs_read(struct usbhs_priv *priv, u32 reg)
void usbhs_write(struct usbhs_priv *priv, u32 reg, u16 data)
void usbhs_bset(struct usbhs_priv *priv, u32 reg, u16 mask, u16 data)
struct usbhs_priv *usbhs_pdev_to_priv(struct platform_device *pdev)
void usbhs_sys_clock_ctrl(struct usbhs_priv *priv, int enable)
void usbhs_sys_hispeed_ctrl(struct usbhs_priv *priv, int enable)
void usbhs_sys_usb_ctrl(struct usbhs_priv *priv, int enable)
void usbhs_sys_host_ctrl(struct usbhs_priv *priv, int enable)
void usbhs_sys_function_ctrl(struct usbhs_priv *priv, int enable)
int usbhs_frame_get_num(struct usbhs_priv *priv)
static void usbhsc_bus_ctrl(struct usbhs_priv *priv, int enable)
static u32 usbhsc_default_pipe_type[] = ;
static void usbhsc_power_ctrl(struct usbhs_priv *priv, int enable)
static void usbhsc_notify_hotplug(struct work_struct *work)
int usbhsc_drvcllbck_notify_hotplug(struct platform_device *pdev)
static int __devinit usbhs_probe(struct platform_device *pdev)
static int __devexit usbhs_remove(struct platform_device *pdev)
static struct platform_driver renesas_usbhs_driver = ;
static int __init usbhs_init(void)
static void __exit usbhs_exit(void)
module_init(usbhs_init);
module_exit(usbhs_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Renesas USB driver");
MODULE_AUTHOR("Kuninori Morimoto <kuninori.morimoto.gx@renesas.com>");
