#define __CVMX_PIP_H__
#define CVMX_PIP_NUM_INPUT_PORTS                40
#define CVMX_PIP_NUM_WATCHERS                   4
typedef enum  cvmx_pip_l4_err_t;
typedef enum  cvmx_pip_ip_exc_t;
typedef enum  cvmx_pip_rcv_err_t;
typedef union  cvmx_pip_err_t;
typedef struct  cvmx_pip_port_status_t;
typedef union  cvmx_pip_pkt_inst_hdr_t;
static inline void cvmx_pip_config_port(uint64_t port_num,
union cvmx_pip_prt_cfgx port_cfg,
union cvmx_pip_prt_tagx port_tag_cfg)
static inline void cvmx_pip_config_vlan_qos(uint64_t vlan_priority,
uint64_t qos)
static inline void cvmx_pip_config_diffserv_qos(uint64_t diffserv, uint64_t qos)
static inline void cvmx_pip_get_port_status(uint64_t port_num, uint64_t clear,
cvmx_pip_port_status_t *status)
static inline void cvmx_pip_config_crc(uint64_t interface,
uint64_t invert_result, uint64_t reflect,
uint32_t initialization_vector)
static inline void cvmx_pip_tag_mask_clear(uint64_t mask_index)
static inline void cvmx_pip_tag_mask_set(uint64_t mask_index, uint64_t offset,
uint64_t len)
