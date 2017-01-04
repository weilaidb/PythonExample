#define STUB_BUSID_OTHER 0
#define STUB_BUSID_REMOV 1
#define STUB_BUSID_ADDED 2
#define STUB_BUSID_ALLOC 3
struct stub_device ;
struct stub_priv ;
struct stub_unlink ;
#define BUSID_SIZE 20
struct bus_id_priv ;
extern struct kmem_cache *stub_priv_cache;
extern struct usb_driver stub_driver;
struct bus_id_priv *get_busid_priv(const char *busid);
int del_match_busid(char *busid);
void stub_device_cleanup_urbs(struct stub_device *sdev);
int stub_rx_loop(void *data);
void stub_enqueue_ret_unlink(struct stub_device *sdev, __u32 seqnum,
__u32 status);
void stub_complete(struct urb *urb);
int stub_tx_loop(void *data);
