#define __LINUX_NET_DSA_H
#define DSA_MAX_SWITCHES	4
#define DSA_MAX_PORTS		12
struct dsa_chip_data ;
struct dsa_platform_data ;
extern bool dsa_uses_dsa_tags(void *dsa_ptr);
extern bool dsa_uses_trailer_tags(void *dsa_ptr);
