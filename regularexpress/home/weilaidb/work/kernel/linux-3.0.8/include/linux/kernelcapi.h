#define __KERNELCAPI_H__
#define CAPI_MAXAPPL	240
#define CAPI_MAXCONTR	32
#define CAPI_MAXDATAWINDOW	8
typedef struct kcapi_flagdef  kcapi_flagdef;
typedef struct kcapi_carddef  kcapi_carddef;
#define KCAPI_CMD_TRACE		10
#define KCAPI_CMD_ADDCARD	11
#define KCAPI_TRACE_OFF			0
#define KCAPI_TRACE_SHORT_NO_DATA	1
#define KCAPI_TRACE_FULL_NO_DATA	2
#define KCAPI_TRACE_SHORT		3
#define KCAPI_TRACE_FULL		4
struct capi20_appl ;
u16 capi20_isinstalled(void);
u16 capi20_register(struct capi20_appl *ap);
u16 capi20_release(struct capi20_appl *ap);
u16 capi20_put_message(struct capi20_appl *ap, struct sk_buff *skb);
u16 capi20_get_manufacturer(u32 contr, u8 buf[CAPI_MANUFACTURER_LEN]);
u16 capi20_get_version(u32 contr, struct capi_version *verp);
u16 capi20_get_serial(u32 contr, u8 serial[CAPI_SERIAL_LEN]);
u16 capi20_get_profile(u32 contr, struct capi_profile *profp);
int capi20_manufacturer(unsigned int cmd, void __user *data);
#define CAPICTR_UP			0
#define CAPICTR_DOWN			1
int register_capictr_notifier(struct notifier_block *nb);
int unregister_capictr_notifier(struct notifier_block *nb);
#define CAPI_NOERROR                      0x0000
#define CAPI_TOOMANYAPPLS		  0x1001
#define CAPI_LOGBLKSIZETOSMALL	          0x1002
#define CAPI_BUFFEXECEEDS64K 	          0x1003
#define CAPI_MSGBUFSIZETOOSMALL	          0x1004
#define CAPI_ANZLOGCONNNOTSUPPORTED	  0x1005
#define CAPI_REGRESERVED		  0x1006
#define CAPI_REGBUSY 		          0x1007
#define CAPI_REGOSRESOURCEERR	          0x1008
#define CAPI_REGNOTINSTALLED 	          0x1009
#define CAPI_REGCTRLERNOTSUPPORTEXTEQUIP  0x100a
#define CAPI_REGCTRLERONLYSUPPORTEXTEQUIP 0x100b
#define CAPI_ILLAPPNR		          0x1101
#define CAPI_ILLCMDORSUBCMDORMSGTOSMALL   0x1102
#define CAPI_SENDQUEUEFULL		  0x1103
#define CAPI_RECEIVEQUEUEEMPTY	          0x1104
#define CAPI_RECEIVEOVERFLOW 	          0x1105
#define CAPI_UNKNOWNNOTPAR		  0x1106
#define CAPI_MSGBUSY 		          0x1107
#define CAPI_MSGOSRESOURCEERR	          0x1108
#define CAPI_MSGNOTINSTALLED 	          0x1109
#define CAPI_MSGCTRLERNOTSUPPORTEXTEQUIP  0x110a
#define CAPI_MSGCTRLERONLYSUPPORTEXTEQUIP 0x110b
typedef enum  RESOURCE_CODING_PROBLEM;
typedef enum  REQUESTED_SERVICES_PROBLEM;
typedef enum  SUPPLEMENTARY_SERVICE_INFO;
typedef enum  CAPI_REASON;
