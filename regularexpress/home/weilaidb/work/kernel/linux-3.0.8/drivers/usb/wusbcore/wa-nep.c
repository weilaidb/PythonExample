struct wa_notif_work ;
static void wa_notif_dispatch(struct work_struct *ws)
static int wa_nep_queue(struct wahc *wa, size_t size)
static void wa_nep_cb(struct urb *urb)
int wa_nep_create(struct wahc *wa, struct usb_interface *iface)
void wa_nep_destroy(struct wahc *wa)
