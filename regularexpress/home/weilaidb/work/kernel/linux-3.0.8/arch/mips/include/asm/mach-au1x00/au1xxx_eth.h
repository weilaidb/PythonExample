#define __AU1X00_ETH_DATA_H
struct au1000_eth_platform_data ;
void __init au1xxx_override_eth_cfg(unsigned port,
struct au1000_eth_platform_data *eth_data);
