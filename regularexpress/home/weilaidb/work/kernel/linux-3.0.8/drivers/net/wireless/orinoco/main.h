#define _ORINOCO_MAIN_H_
#define SPY_NUMBER(priv)	(priv->spy_data.spy_number)
#define SPY_NUMBER(priv)	0
extern int force_monitor;
struct net_device;
struct work_struct;
void set_port_type(struct orinoco_private *priv);
int orinoco_commit(struct orinoco_private *priv);
void orinoco_reset(struct work_struct *work);
#define WPA_OUI_TYPE	"\x00\x50\xF2\x01"
#define WPA_SELECTOR_LEN 4
static inline u8 *orinoco_get_wpa_ie(u8 *data, size_t len)
