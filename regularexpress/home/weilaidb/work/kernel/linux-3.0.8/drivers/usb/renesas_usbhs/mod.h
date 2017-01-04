#define RENESAS_USB_MOD_H
struct usbhs_irq_state ;
struct usbhs_mod ;
struct usbhs_mod_info ;
struct usbhs_mod *usbhs_mod_get(struct usbhs_priv *priv, int id);
struct usbhs_mod *usbhs_mod_get_current(struct usbhs_priv *priv);
void usbhs_mod_register(struct usbhs_priv *priv, struct usbhs_mod *usb, int id);
int usbhs_mod_is_host(struct usbhs_priv *priv, struct usbhs_mod *mod);
int usbhs_mod_change(struct usbhs_priv *priv, int id);
int usbhs_mod_probe(struct usbhs_priv *priv);
void usbhs_mod_remove(struct usbhs_priv *priv);
void usbhs_mod_autonomy_mode(struct usbhs_priv *priv);
int usbhs_status_get_usb_speed(struct usbhs_irq_state *irq_state);
int usbhs_status_get_device_state(struct usbhs_irq_state *irq_state);
int usbhs_status_get_ctrl_stage(struct usbhs_irq_state *irq_state);
void usbhs_irq_callback_update(struct usbhs_priv *priv, struct usbhs_mod *mod);
#define usbhs_mod_call(priv, func, param...)		\
()
extern int __devinit usbhs_mod_gadget_probe(struct usbhs_priv *priv);
extern void __devexit usbhs_mod_gadget_remove(struct usbhs_priv *priv);
static inline int usbhs_mod_gadget_probe(struct usbhs_priv *priv)
static inline void usbhs_mod_gadget_remove(struct usbhs_priv *priv)
