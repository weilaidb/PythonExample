void (*cvmx_override_pko_queue_priority) (int pko_port,
uint64_t priorities[16]);
void (*cvmx_override_ipd_port_setup) (int ipd_port);
static int interface_port_count[4] = ;
static cvmx_helper_link_info_t
port_link_info[CVMX_PIP_NUM_INPUT_PORTS];
int cvmx_helper_get_number_of_interfaces(void)
int cvmx_helper_ports_on_interface(int interface)
cvmx_helper_interface_mode_t cvmx_helper_interface_get_mode(int interface)
static int __cvmx_helper_port_setup_ipd(int ipd_port)
int cvmx_helper_interface_probe(int interface)
static int __cvmx_helper_interface_setup_ipd(int interface)
static int __cvmx_helper_global_setup_ipd(void)
static int __cvmx_helper_interface_setup_pko(int interface)
static int __cvmx_helper_global_setup_pko(void)
static int __cvmx_helper_global_setup_backpressure(void)
static int __cvmx_helper_packet_hardware_enable(int interface)
int __cvmx_helper_errata_fix_ipd_ptr_alignment(void)
int cvmx_helper_ipd_and_packet_input_enable(void)
int cvmx_helper_initialize_packet_io_global(void)
int cvmx_helper_initialize_packet_io_local(void)
cvmx_helper_link_info_t cvmx_helper_link_autoconf(int ipd_port)
cvmx_helper_link_info_t cvmx_helper_link_get(int ipd_port)
int cvmx_helper_link_set(int ipd_port, cvmx_helper_link_info_t link_info)
int cvmx_helper_configure_loopback(int ipd_port, int enable_internal,
int enable_external)
