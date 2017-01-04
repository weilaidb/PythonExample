#define __CVMX_HELPER_XAUI_H__
extern int __cvmx_helper_xaui_probe(int interface);
extern int __cvmx_helper_xaui_enable(int interface);
extern cvmx_helper_link_info_t __cvmx_helper_xaui_link_get(int ipd_port);
extern int __cvmx_helper_xaui_link_set(int ipd_port,
cvmx_helper_link_info_t link_info);
extern int __cvmx_helper_xaui_configure_loopback(int ipd_port,
int enable_internal,
int enable_external);
