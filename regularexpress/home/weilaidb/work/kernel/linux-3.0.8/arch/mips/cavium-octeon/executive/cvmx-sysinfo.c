static struct  state = ;
uint64_t linux_mem32_min;
uint64_t linux_mem32_max;
uint64_t linux_mem32_wired;
uint64_t linux_mem32_offset;
struct cvmx_sysinfo *cvmx_sysinfo_get(void)
EXPORT_SYMBOL(cvmx_sysinfo_get);
int cvmx_sysinfo_minimal_initialize(void *phy_mem_desc_ptr,
uint16_t board_type,
uint8_t board_rev_major,
uint8_t board_rev_minor,
uint32_t cpu_clock_hz)
