#define __PM3386_H
void pm3386_reset(void);
int pm3386_port_count(void);
void pm3386_init_port(int port);
void pm3386_get_mac(int port, u8 *mac);
void pm3386_set_mac(int port, u8 *mac);
void pm3386_get_stats(int port, struct net_device_stats *stats);
void pm3386_set_carrier(int port, int state);
int pm3386_is_link_up(int port);
void pm3386_enable_rx(int port);
void pm3386_disable_rx(int port);
void pm3386_enable_tx(int port);
void pm3386_disable_tx(int port);
