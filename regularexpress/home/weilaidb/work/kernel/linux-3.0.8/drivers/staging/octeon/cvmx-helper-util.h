#define __CVMX_HELPER_UTIL_H__
extern const char
*cvmx_helper_interface_mode_to_string(cvmx_helper_interface_mode_t mode);
extern int cvmx_helper_dump_packet(cvmx_wqe_t *work);
extern int cvmx_helper_setup_red_queue(int queue, int pass_thresh,
int drop_thresh);
extern int cvmx_helper_setup_red(int pass_thresh, int drop_thresh);
extern const char *cvmx_helper_get_version(void);
extern int __cvmx_helper_setup_gmx(int interface, int num_ports);
extern int cvmx_helper_get_ipd_port(int interface, int port);
static inline int cvmx_helper_get_first_ipd_port(int interface)
static inline int cvmx_helper_get_last_ipd_port(int interface)
static inline void cvmx_helper_free_packet_data(cvmx_wqe_t *work)
extern int cvmx_helper_get_interface_num(int ipd_port);
extern int cvmx_helper_get_interface_index_num(int ipd_port);
