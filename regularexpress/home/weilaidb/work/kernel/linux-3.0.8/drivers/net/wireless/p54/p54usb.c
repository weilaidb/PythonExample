MODULE_AUTHOR("Michael Wu <flamingice@sourmilk.net>");
MODULE_DESCRIPTION("Prism54 USB wireless driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("prism54usb");
MODULE_FIRMWARE("isl3886usb");
MODULE_FIRMWARE("isl3887usb");
static struct usb_device_id p54u_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(usb, p54u_table);
static const struct  p54u_fwlist[__NUM_P54U_HWTYPES] = ;
static void p54u_rx_cb(struct urb *urb)
static void p54u_tx_cb(struct urb *urb)
static void p54u_tx_dummy_cb(struct urb *urb)
static void p54u_free_urbs(struct ieee80211_hw *dev)
static int p54u_init_urbs(struct ieee80211_hw *dev)
static __le32 p54u_lm87_chksum(const __le32 *data, size_t length)
static void p54u_tx_lm87(struct ieee80211_hw *dev, struct sk_buff *skb)
static void p54u_tx_net2280(struct ieee80211_hw *dev, struct sk_buff *skb)
static int p54u_write(struct p54u_priv *priv,
struct net2280_reg_write *buf,
enum net2280_op_type type,
__le32 addr, __le32 val)
static int p54u_read(struct p54u_priv *priv, void *buf,
enum net2280_op_type type,
__le32 addr, __le32 *val)
static int p54u_bulk_msg(struct p54u_priv *priv, unsigned int ep,
void *data, size_t len)
static int p54u_device_reset(struct ieee80211_hw *dev)
static const char p54u_romboot_3887[] = "~~~~";
static int p54u_firmware_reset_3887(struct ieee80211_hw *dev)
static const char p54u_firmware_upload_3887[] = "<\r";
static int p54u_upload_firmware_3887(struct ieee80211_hw *dev)
data++;
}
err = p54u_bulk_msg(priv, P54U_PIPE_DATA, buf, block_size);
if (err)
tmp = buf;
left = block_size = min((unsigned int)P54U_FW_BLOCK, remains);
}
*((__le32 *)buf) = cpu_to_le32(~crc32_le(~0, priv->fw->data,
priv->fw->size));
err = p54u_bulk_msg(priv, P54U_PIPE_DATA, buf, sizeof(u32));
if (err)
timeout = jiffies + msecs_to_jiffies(1000);
while (!(err = usb_bulk_msg(priv->udev,
usb_rcvbulkpipe(priv->udev, P54U_PIPE_DATA), buf, 128, &alen, 1000)))
if (err)
buf[0] = 'g';
buf[1] = '\r';
err = p54u_bulk_msg(priv, P54U_PIPE_DATA, buf, 2);
if (err)
timeout = jiffies + msecs_to_jiffies(1000);
while (!(err = usb_bulk_msg(priv->udev,
usb_rcvbulkpipe(priv->udev, P54U_PIPE_DATA), buf, 128, &alen, 1000)))
if (err)
goto err_upload_failed;
err_upload_failed:
kfree(buf);
return err;
}
static int p54u_upload_firmware_net2280(struct ieee80211_hw *dev)
static int p54u_load_firmware(struct ieee80211_hw *dev)
static int p54u_open(struct ieee80211_hw *dev)
static void p54u_stop(struct ieee80211_hw *dev)
static int __devinit p54u_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void __devexit p54u_disconnect(struct usb_interface *intf)
static int p54u_pre_reset(struct usb_interface *intf)
static int p54u_resume(struct usb_interface *intf)
static int p54u_post_reset(struct usb_interface *intf)
static int p54u_suspend(struct usb_interface *intf, pm_message_t message)
static struct usb_driver p54u_driver = ;
static int __init p54u_init(void)
static void __exit p54u_exit(void)
module_init(p54u_init);
module_exit(p54u_exit);
