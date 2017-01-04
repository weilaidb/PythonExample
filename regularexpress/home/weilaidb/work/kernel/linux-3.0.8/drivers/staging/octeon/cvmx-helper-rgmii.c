void __cvmx_interrupt_gmxx_enable(int interface);
void __cvmx_interrupt_asxx_enable(int block);
int __cvmx_helper_rgmii_probe(int interface)
void cvmx_helper_rgmii_internal_loopback(int port)
static int __cvmx_helper_errata_asx_pass1(int interface, int port,
int cpu_clock_hz)
int __cvmx_helper_rgmii_enable(int interface)
cvmx_helper_link_info_t __cvmx_helper_rgmii_link_get(int ipd_port)
int __cvmx_helper_rgmii_link_set(int ipd_port,
cvmx_helper_link_info_t link_info)
int __cvmx_helper_rgmii_configure_loopback(int ipd_port, int enable_internal,
int enable_external)
