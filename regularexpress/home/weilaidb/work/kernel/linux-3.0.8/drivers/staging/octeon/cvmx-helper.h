#define __CVMX_HELPER_H__
typedef enum  cvmx_helper_interface_mode_t;
typedef union  cvmx_helper_link_info_t;
extern void (*cvmx_override_pko_queue_priority) (int pko_port,
uint64_t priorities[16]);
extern void (*cvmx_override_ipd_port_setup) (int ipd_port);
extern int cvmx_helper_ipd_and_packet_input_enable(void);
extern int cvmx_helper_initialize_packet_io_global(void);
extern int cvmx_helper_initialize_packet_io_local(void);
extern int cvmx_helper_ports_on_interface(int interface);
extern int cvmx_helper_get_number_of_interfaces(void);
extern cvmx_helper_interface_mode_t cvmx_helper_interface_get_mode(int
interface);
extern cvmx_helper_link_info_t cvmx_helper_link_autoconf(int ipd_port);
extern cvmx_helper_link_info_t cvmx_helper_link_get(int ipd_port);
extern int cvmx_helper_link_set(int ipd_port,
cvmx_helper_link_info_t link_info);
extern int cvmx_helper_interface_probe(int interface);
extern int cvmx_helper_configure_loopback(int ipd_port, int enable_internal,
int enable_external);
