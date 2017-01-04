#define __CVMX_FAU_H__
#define CVMX_FAU_LOAD_IO_ADDRESS    cvmx_build_io_address(0x1e, 0)
#define CVMX_FAU_BITS_SCRADDR       63, 56
#define CVMX_FAU_BITS_LEN           55, 48
#define CVMX_FAU_BITS_INEVAL        35, 14
#define CVMX_FAU_BITS_TAGWAIT       13, 13
#define CVMX_FAU_BITS_NOADD         13, 13
#define CVMX_FAU_BITS_SIZE          12, 11
#define CVMX_FAU_BITS_REGISTER      10, 0
typedef enum  cvmx_fau_op_size_t;
typedef struct  cvmx_fau_tagwait64_t;
typedef struct  cvmx_fau_tagwait32_t;
typedef struct  cvmx_fau_tagwait16_t;
typedef struct  cvmx_fau_tagwait8_t;
typedef union  cvmx_fau_async_tagwait_result_t;
static inline uint64_t __cvmx_fau_store_address(uint64_t noadd, uint64_t reg)
static inline uint64_t __cvmx_fau_atomic_address(uint64_t tagwait, uint64_t reg,
int64_t value)
static inline int64_t cvmx_fau_fetch_and_add64(cvmx_fau_reg_64_t reg,
int64_t value)
static inline int32_t cvmx_fau_fetch_and_add32(cvmx_fau_reg_32_t reg,
int32_t value)
static inline int16_t cvmx_fau_fetch_and_add16(cvmx_fau_reg_16_t reg,
int16_t value)
static inline int8_t cvmx_fau_fetch_and_add8(cvmx_fau_reg_8_t reg, int8_t value)
static inline cvmx_fau_tagwait64_t
cvmx_fau_tagwait_fetch_and_add64(cvmx_fau_reg_64_t reg, int64_t value)
static inline cvmx_fau_tagwait32_t
cvmx_fau_tagwait_fetch_and_add32(cvmx_fau_reg_32_t reg, int32_t value)
static inline cvmx_fau_tagwait16_t
cvmx_fau_tagwait_fetch_and_add16(cvmx_fau_reg_16_t reg, int16_t value)
static inline cvmx_fau_tagwait8_t
cvmx_fau_tagwait_fetch_and_add8(cvmx_fau_reg_8_t reg, int8_t value)
static inline uint64_t __cvmx_fau_iobdma_data(uint64_t scraddr, int64_t value,
uint64_t tagwait,
cvmx_fau_op_size_t size,
uint64_t reg)
static inline void cvmx_fau_async_fetch_and_add64(uint64_t scraddr,
cvmx_fau_reg_64_t reg,
int64_t value)
static inline void cvmx_fau_async_fetch_and_add32(uint64_t scraddr,
cvmx_fau_reg_32_t reg,
int32_t value)
static inline void cvmx_fau_async_fetch_and_add16(uint64_t scraddr,
cvmx_fau_reg_16_t reg,
int16_t value)
static inline void cvmx_fau_async_fetch_and_add8(uint64_t scraddr,
cvmx_fau_reg_8_t reg,
int8_t value)
static inline void cvmx_fau_async_tagwait_fetch_and_add64(uint64_t scraddr,
cvmx_fau_reg_64_t reg,
int64_t value)
static inline void cvmx_fau_async_tagwait_fetch_and_add32(uint64_t scraddr,
cvmx_fau_reg_32_t reg,
int32_t value)
static inline void cvmx_fau_async_tagwait_fetch_and_add16(uint64_t scraddr,
cvmx_fau_reg_16_t reg,
int16_t value)
static inline void cvmx_fau_async_tagwait_fetch_and_add8(uint64_t scraddr,
cvmx_fau_reg_8_t reg,
int8_t value)
static inline void cvmx_fau_atomic_add64(cvmx_fau_reg_64_t reg, int64_t value)
static inline void cvmx_fau_atomic_add32(cvmx_fau_reg_32_t reg, int32_t value)
static inline void cvmx_fau_atomic_add16(cvmx_fau_reg_16_t reg, int16_t value)
static inline void cvmx_fau_atomic_add8(cvmx_fau_reg_8_t reg, int8_t value)
static inline void cvmx_fau_atomic_write64(cvmx_fau_reg_64_t reg, int64_t value)
static inline void cvmx_fau_atomic_write32(cvmx_fau_reg_32_t reg, int32_t value)
static inline void cvmx_fau_atomic_write16(cvmx_fau_reg_16_t reg, int16_t value)
static inline void cvmx_fau_atomic_write8(cvmx_fau_reg_8_t reg, int8_t value)
