#define __CVMX_HELPER_JTAG_H__
extern void cvmx_helper_qlm_jtag_init(void);
extern uint32_t cvmx_helper_qlm_jtag_shift(int qlm, int bits, uint32_t data);
extern void cvmx_helper_qlm_jtag_shift_zeros(int qlm, int bits);
extern void cvmx_helper_qlm_jtag_update(int qlm);
