#define __CVMX_SYSINFO_H__
#define OCTEON_SERIAL_LEN 20
struct cvmx_sysinfo ;
extern struct cvmx_sysinfo *cvmx_sysinfo_get(void);
extern int cvmx_sysinfo_minimal_initialize(void *phy_mem_desc_ptr,
uint16_t board_type,
uint8_t board_rev_major,
uint8_t board_rev_minor,
uint32_t cpu_clock_hz);
