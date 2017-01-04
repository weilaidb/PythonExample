#define _ATMEL_H
typedef enum  AtmelFWType;
struct net_device *init_atmel_card(unsigned short, unsigned long, const AtmelFWType, struct device *,
int (*present_func)(void *), void * );
void stop_atmel_card( struct net_device *);
int atmel_open( struct net_device * );
