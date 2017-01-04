const char *cvmx_helper_interface_mode_to_string(cvmx_helper_interface_mode_t
mode)
int cvmx_helper_dump_packet(cvmx_wqe_t *work)
int cvmx_helper_setup_red_queue(int queue, int pass_thresh, int drop_thresh)
int cvmx_helper_setup_red(int pass_thresh, int drop_thresh)
int __cvmx_helper_setup_gmx(int interface, int num_ports)
int cvmx_helper_get_ipd_port(int interface, int port)
int cvmx_helper_get_interface_num(int ipd_port)
int cvmx_helper_get_interface_index_num(int ipd_port)
