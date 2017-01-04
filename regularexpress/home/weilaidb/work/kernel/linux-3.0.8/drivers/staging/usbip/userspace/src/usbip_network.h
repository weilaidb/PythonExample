#define _USBIP_NETWORK_H
struct op_common  __attribute__((packed));
#define PACK_OP_COMMON(pack, op_common)  do  while (0)
#define OP_UNSPEC	0x00
#define OP_REQ_UNSPEC	OP_UNSPEC
#define OP_REP_UNSPEC	OP_UNSPEC
#define OP_DEVINFO	0x02
#define OP_REQ_DEVINFO	(OP_REQUEST | OP_DEVINFO)
#define OP_REP_DEVINFO	(OP_REPLY   | OP_DEVINFO)
struct op_devinfo_request  __attribute__((packed));
struct op_devinfo_reply  __attribute__((packed));
#define OP_IMPORT	0x03
#define OP_REQ_IMPORT	(OP_REQUEST | OP_IMPORT)
#define OP_REP_IMPORT   (OP_REPLY   | OP_IMPORT)
struct op_import_request  __attribute__((packed));
struct op_import_reply  __attribute__((packed));
#define PACK_OP_IMPORT_REQUEST(pack, request)  do  while (0)
#define PACK_OP_IMPORT_REPLY(pack, reply)  do  while (0)
#define OP_EXPORT	0x06
#define OP_REQ_EXPORT	(OP_REQUEST | OP_EXPORT)
#define OP_REP_EXPORT	(OP_REPLY   | OP_EXPORT)
struct op_export_request  __attribute__((packed));
struct op_export_reply  __attribute__((packed));
#define PACK_OP_EXPORT_REQUEST(pack, request)  do  while (0)
#define PACK_OP_EXPORT_REPLY(pack, reply)  do  while (0)
#define OP_UNEXPORT	0x07
#define OP_REQ_UNEXPORT	(OP_REQUEST | OP_UNEXPORT)
#define OP_REP_UNEXPORT	(OP_REPLY   | OP_UNEXPORT)
struct op_unexport_request  __attribute__((packed));
struct op_unexport_reply  __attribute__((packed));
#define PACK_OP_UNEXPORT_REQUEST(pack, request)  do  while (0)
#define PACK_OP_UNEXPORT_REPLY(pack, reply)  do  while (0)
#define OP_CRYPKEY	0x04
#define OP_REQ_CRYPKEY	(OP_REQUEST | OP_CRYPKEY)
#define OP_REP_CRYPKEY	(OP_REPLY   | OP_CRYPKEY)
struct op_crypkey_request  __attribute__((packed));
struct op_crypkey_reply  __attribute__((packed));
#define OP_DEVLIST	0x05
#define OP_REQ_DEVLIST	(OP_REQUEST | OP_DEVLIST)
#define OP_REP_DEVLIST	(OP_REPLY   | OP_DEVLIST)
struct op_devlist_request  __attribute__((packed));
struct op_devlist_reply  __attribute__((packed));
struct op_devlist_reply_extra  __attribute__((packed));
#define PACK_OP_DEVLIST_REQUEST(pack, request)  do  while (0)
#define PACK_OP_DEVLIST_REPLY(pack, reply)  do  while (0)
void pack_uint32_t(int pack, uint32_t *num);
void pack_uint16_t(int pack, uint16_t *num);
void pack_usb_device(int pack, struct usb_device *udev);
void pack_usb_interface(int pack, struct usb_interface *uinf);
ssize_t usbip_recv(int sockfd, void *buff, size_t bufflen);
ssize_t usbip_send(int sockfd, void *buff, size_t bufflen);
int usbip_send_op_common(int sockfd, uint32_t code, uint32_t status);
int usbip_recv_op_common(int sockfd, uint16_t *code);
int usbip_set_reuseaddr(int sockfd);
int usbip_set_nodelay(int sockfd);
int usbip_set_keepalive(int sockfd);
int tcp_connect(char *hostname, char *service);
#define USBIP_PORT 3240
#define USBIP_PORT_STRING "3240"
