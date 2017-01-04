#define __UCC_H__
#define STATISTICS
#define UCC_MAX_NUM	8
enum ucc_speed_type ;
int ucc_set_type(unsigned int ucc_num, enum ucc_speed_type speed);
int ucc_set_qe_mux_mii_mng(unsigned int ucc_num);
int ucc_set_qe_mux_rxtx(unsigned int ucc_num, enum qe_clock clock,
enum comm_dir mode);
int ucc_mux_set_grant_tsa_bkpt(unsigned int ucc_num, int set, u32 mask);
static inline int ucc_set_qe_mux_grant(unsigned int ucc_num, int set)
static inline int ucc_set_qe_mux_tsa(unsigned int ucc_num, int set)
static inline int ucc_set_qe_mux_bkpt(unsigned int ucc_num, int set)
