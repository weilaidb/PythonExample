#define __DRV_TYPES_H__
struct _adapter;
enum _NIC_VERSION ;
struct _adapter;
struct	qos_priv	;
#define SPEC_DEV_ID_NONE BIT(0)
#define SPEC_DEV_ID_DISABLE_HT BIT(1)
#define SPEC_DEV_ID_ENABLE_PS BIT(2)
struct specific_device_id ;
struct registry_priv ;
#define RGTRY_OFT(field) ((addr_t)FIELD_OFFSET(struct registry_priv, field))
#define RGTRY_SZ(field)   sizeof(((struct registry_priv *)0)->field)
#define BSSID_OFT(field) ((addr_t)FIELD_OFFSET(struct ndis_wlan_bssid_ex, \
field))
#define BSSID_SZ(field)   sizeof(((struct ndis_wlan_bssid_ex *)0)->field)
struct dvobj_priv ;
struct _adapter ;
static inline u8 *myid(struct eeprom_priv *peepriv)
u8 r8712_usb_hal_bus_init(struct _adapter *adapter);
