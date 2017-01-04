static struct otg_transceiver *xceiv;
struct otg_transceiver *otg_get_transceiver(void)
EXPORT_SYMBOL(otg_get_transceiver);
void otg_put_transceiver(struct otg_transceiver *x)
EXPORT_SYMBOL(otg_put_transceiver);
int otg_set_transceiver(struct otg_transceiver *x)
EXPORT_SYMBOL(otg_set_transceiver);
const char *otg_state_string(enum usb_otg_state state)
EXPORT_SYMBOL(otg_state_string);
