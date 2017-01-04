#define usbhs_priv_to_modinfo(priv) (&priv->mod_info)
#define usbhs_mod_info_call(priv, func, param...)	\
()
static int usbhsm_autonomy_get_vbus(struct platform_device *pdev)
static int usbhsm_autonomy_irq_vbus(struct usbhs_priv *priv,
struct usbhs_irq_state *irq_state)
void usbhs_mod_autonomy_mode(struct usbhs_priv *priv)
void usbhs_mod_register(struct usbhs_priv *priv, struct usbhs_mod *mod, int id)
struct usbhs_mod *usbhs_mod_get(struct usbhs_priv *priv, int id)
int usbhs_mod_is_host(struct usbhs_priv *priv, struct usbhs_mod *mod)
struct usbhs_mod *usbhs_mod_get_current(struct usbhs_priv *priv)
int usbhs_mod_change(struct usbhs_priv *priv, int id)
static irqreturn_t usbhs_interrupt(int irq, void *data);
int usbhs_mod_probe(struct usbhs_priv *priv)
void usbhs_mod_remove(struct usbhs_priv *priv)
int usbhs_status_get_usb_speed(struct usbhs_irq_state *irq_state)
int usbhs_status_get_device_state(struct usbhs_irq_state *irq_state)
int usbhs_status_get_ctrl_stage(struct usbhs_irq_state *irq_state)
static void usbhs_status_get_each_irq(struct usbhs_priv *priv,
struct usbhs_irq_state *state)
#define INTSTS0_MAGIC 0xF800
#define INTSTS1_MAGIC 0xA870
static irqreturn_t usbhs_interrupt(int irq, void *data)
void usbhs_irq_callback_update(struct usbhs_priv *priv, struct usbhs_mod *mod)
