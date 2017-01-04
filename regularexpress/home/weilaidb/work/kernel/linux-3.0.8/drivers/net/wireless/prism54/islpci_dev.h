#define _ISLPCI_DEV_H
typedef enum  islpci_state_t;
struct mac_entry ;
struct islpci_acl ;
struct islpci_membuf ;
#define MAX_BSS_WPA_IE_COUNT 64
#define MAX_WPA_IE_LEN 64
struct islpci_bss_wpa_ie ;
typedef struct  islpci_private;
static inline islpci_state_t
islpci_get_state(islpci_private *priv)
islpci_state_t islpci_set_state(islpci_private *priv, islpci_state_t new_state);
#define ISLPCI_TX_TIMEOUT               (2*HZ)
irqreturn_t islpci_interrupt(int, void *);
int prism54_post_setup(islpci_private *, int);
int islpci_reset(islpci_private *, int);
static inline void
islpci_trigger(islpci_private *priv)
int islpci_free_memory(islpci_private *);
struct net_device *islpci_setup(struct pci_dev *);
#define DRV_NAME	"prism54"
#define DRV_VERSION	"1.2"
