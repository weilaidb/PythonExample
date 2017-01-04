void __cvmx_interrupt_gmxx_enable(int interface);
void __cvmx_interrupt_pcsx_intx_en_reg_enable(int index, int block);
void __cvmx_interrupt_pcsxx_int_en_reg_enable(int index);
static int __cvmx_helper_sgmii_hardware_init_one_time(int interface, int index)
static int __cvmx_helper_sgmii_hardware_init_link(int interface, int index)
static int __cvmx_helper_sgmii_hardware_init_link_speed(int interface,
int index,
cvmx_helper_link_info_t
link_info)
static int __cvmx_helper_sgmii_hardware_init(int interface, int num_ports)
int __cvmx_helper_sgmii_probe(int interface)
int __cvmx_helper_sgmii_enable(int interface)
cvmx_helper_link_info_t __cvmx_helper_sgmii_link_get(int ipd_port)
int __cvmx_helper_sgmii_link_set(int ipd_port,
cvmx_helper_link_info_t link_info)
int __cvmx_helper_sgmii_configure_loopback(int ipd_port, int enable_internal,
int enable_external)
