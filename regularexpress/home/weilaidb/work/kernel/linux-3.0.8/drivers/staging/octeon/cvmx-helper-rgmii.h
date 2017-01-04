#define __CVMX_HELPER_RGMII_H__
extern int __cvmx_helper_rgmii_probe(int interface);
extern void cvmx_helper_rgmii_internal_loopback(int port);
extern int __cvmx_helper_rgmii_enable(int interface);
extern cvmx_helper_link_info_t __cvmx_helper_rgmii_link_get(int ipd_port);
extern int __cvmx_helper_rgmii_link_set(int ipd_port,
cvmx_helper_link_info_t link_info);
extern int __cvmx_helper_rgmii_configure_loopback(int ipd_port,
int enable_internal,
int enable_external);
