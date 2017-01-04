void __cvmx_interrupt_gmxx_enable(int interface);
void __cvmx_interrupt_pcsx_intx_en_reg_enable(int index, int block);
void __cvmx_interrupt_pcsxx_int_en_reg_enable(int index);
int __cvmx_helper_xaui_probe(int interface)
int __cvmx_helper_xaui_enable(int interface)
cvmx_helper_link_info_t __cvmx_helper_xaui_link_get(int ipd_port)
int __cvmx_helper_xaui_link_set(int ipd_port, cvmx_helper_link_info_t link_info)
extern int __cvmx_helper_xaui_configure_loopback(int ipd_port,
int enable_internal,
int enable_external)
