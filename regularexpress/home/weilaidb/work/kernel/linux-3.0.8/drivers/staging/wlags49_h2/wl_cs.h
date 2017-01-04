#define __WL_CS_H__
void wl_adapter_insert(struct pcmcia_device *link);
void wl_adapter_release(struct pcmcia_device *link);
int wl_adapter_init_module( void );
void wl_adapter_cleanup_module( void );
int wl_adapter_open(struct net_device *dev);
int wl_adapter_close(struct net_device *dev);
int wl_adapter_is_open(struct net_device *dev);
const char *DbgEvent( int mask );
