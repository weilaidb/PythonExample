#define __IWM_BUS_H__
struct iwm_if_ops ;
static inline int iwm_bus_send_chunk(struct iwm_priv *iwm, u8 *buf, int count)
static inline int iwm_bus_enable(struct iwm_priv *iwm)
static inline int iwm_bus_disable(struct iwm_priv *iwm)
