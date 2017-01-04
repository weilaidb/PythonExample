#define __NET_IPIP_H 1
#define IPTUNNEL_ERR_TIMEO	(30*HZ)
struct ip_tunnel_6rd_parm ;
struct ip_tunnel ;
struct ip_tunnel_prl_entry ;
#define __IPTUNNEL_XMIT(stats1, stats2) do  while (0)
#define IPTUNNEL_XMIT() __IPTUNNEL_XMIT(txq, stats)
