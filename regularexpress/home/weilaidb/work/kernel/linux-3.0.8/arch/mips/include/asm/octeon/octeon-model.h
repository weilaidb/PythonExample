#define __OCTEON_MODEL_H__
#define OM_IGNORE_REVISION        0x01000000
#define OM_CHECK_SUBMODEL         0x02000000
#define OM_MATCH_PREVIOUS_MODELS  0x04000000
#define OM_IGNORE_MINOR_REVISION  0x08000000
#define OM_FLAG_MASK              0xff000000
#define OM_MATCH_5XXX_FAMILY_MODELS     0x20000000
#define OM_MATCH_6XXX_FAMILY_MODELS     0x40000000
#define OCTEON_CN63XX_PASS1_0   0x000d9000
#define OCTEON_CN63XX_PASS1_1   0x000d9001
#define OCTEON_CN63XX_PASS1_2   0x000d9002
#define OCTEON_CN63XX_PASS2_0   0x000d9008
#define OCTEON_CN63XX           (OCTEON_CN63XX_PASS2_0 | OM_IGNORE_REVISION)
#define OCTEON_CN63XX_PASS1_X   (OCTEON_CN63XX_PASS1_0 | OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN63XX_PASS2_X   (OCTEON_CN63XX_PASS2_0 | OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN58XX_PASS1_0   0x000d0300
#define OCTEON_CN58XX_PASS1_1   0x000d0301
#define OCTEON_CN58XX_PASS1_2   0x000d0303
#define OCTEON_CN58XX_PASS2_0   0x000d0308
#define OCTEON_CN58XX_PASS2_1   0x000d0309
#define OCTEON_CN58XX_PASS2_2   0x000d030a
#define OCTEON_CN58XX_PASS2_3   0x000d030b
#define OCTEON_CN58XX           (OCTEON_CN58XX_PASS1_0 | OM_IGNORE_REVISION)
#define OCTEON_CN58XX_PASS1_X   (OCTEON_CN58XX_PASS1_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN58XX_PASS2_X   (OCTEON_CN58XX_PASS2_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN58XX_PASS1     OCTEON_CN58XX_PASS1_X
#define OCTEON_CN58XX_PASS2     OCTEON_CN58XX_PASS2_X
#define OCTEON_CN56XX_PASS1_0   0x000d0400
#define OCTEON_CN56XX_PASS1_1   0x000d0401
#define OCTEON_CN56XX_PASS2_0   0x000d0408
#define OCTEON_CN56XX_PASS2_1   0x000d0409
#define OCTEON_CN56XX           (OCTEON_CN56XX_PASS2_0 | OM_IGNORE_REVISION)
#define OCTEON_CN56XX_PASS1_X   (OCTEON_CN56XX_PASS1_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN56XX_PASS2_X   (OCTEON_CN56XX_PASS2_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN56XX_PASS1     OCTEON_CN56XX_PASS1_X
#define OCTEON_CN56XX_PASS2     OCTEON_CN56XX_PASS2_X
#define OCTEON_CN57XX           OCTEON_CN56XX
#define OCTEON_CN57XX_PASS1     OCTEON_CN56XX_PASS1
#define OCTEON_CN57XX_PASS2     OCTEON_CN56XX_PASS2
#define OCTEON_CN55XX           OCTEON_CN56XX
#define OCTEON_CN55XX_PASS1     OCTEON_CN56XX_PASS1
#define OCTEON_CN55XX_PASS2     OCTEON_CN56XX_PASS2
#define OCTEON_CN54XX           OCTEON_CN56XX
#define OCTEON_CN54XX_PASS1     OCTEON_CN56XX_PASS1
#define OCTEON_CN54XX_PASS2     OCTEON_CN56XX_PASS2
#define OCTEON_CN50XX_PASS1_0   0x000d0600
#define OCTEON_CN50XX           (OCTEON_CN50XX_PASS1_0 | OM_IGNORE_REVISION)
#define OCTEON_CN50XX_PASS1_X   (OCTEON_CN50XX_PASS1_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN50XX_PASS1     OCTEON_CN50XX_PASS1_X
#define OCTEON_CN52XX_PASS1_0   0x000d0700
#define OCTEON_CN52XX_PASS2_0   0x000d0708
#define OCTEON_CN52XX           (OCTEON_CN52XX_PASS2_0 | OM_IGNORE_REVISION)
#define OCTEON_CN52XX_PASS1_X   (OCTEON_CN52XX_PASS1_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN52XX_PASS2_X   (OCTEON_CN52XX_PASS2_0 \
| OM_IGNORE_MINOR_REVISION)
#define OCTEON_CN52XX_PASS1     OCTEON_CN52XX_PASS1_X
#define OCTEON_CN52XX_PASS2     OCTEON_CN52XX_PASS2_X
#define OCTEON_CN38XX_PASS1     0x000d0000
#define OCTEON_CN38XX_PASS2     0x000d0001
#define OCTEON_CN38XX_PASS3     0x000d0003
#define OCTEON_CN38XX           (OCTEON_CN38XX_PASS3 | OM_IGNORE_REVISION)
#define OCTEON_CN36XX           OCTEON_CN38XX
#define OCTEON_CN36XX_PASS2     OCTEON_CN38XX_PASS2
#define OCTEON_CN36XX_PASS3     OCTEON_CN38XX_PASS3
#define OCTEON_CN31XX_PASS1     0x000d0100
#define OCTEON_CN31XX_PASS1_1   0x000d0102
#define OCTEON_CN31XX           (OCTEON_CN31XX_PASS1 | OM_IGNORE_REVISION)
#define OCTEON_CN30XX_PASS1     0x000d0200
#define OCTEON_CN30XX_PASS1_1   0x000d0202
#define OCTEON_CN30XX           (OCTEON_CN30XX_PASS1 | OM_IGNORE_REVISION)
#define OCTEON_CN3005_PASS1     (0x000d0210 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3005_PASS1_0   (0x000d0210 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3005_PASS1_1   (0x000d0212 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3005           (OCTEON_CN3005_PASS1 | OM_IGNORE_REVISION \
| OM_CHECK_SUBMODEL)
#define OCTEON_CN3010_PASS1     (0x000d0200 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3010_PASS1_0   (0x000d0200 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3010_PASS1_1   (0x000d0202 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3010           (OCTEON_CN3010_PASS1 | OM_IGNORE_REVISION \
| OM_CHECK_SUBMODEL)
#define OCTEON_CN3020_PASS1     (0x000d0110 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3020_PASS1_0   (0x000d0110 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3020_PASS1_1   (0x000d0112 | OM_CHECK_SUBMODEL)
#define OCTEON_CN3020           (OCTEON_CN3020_PASS1 | OM_IGNORE_REVISION \
| OM_CHECK_SUBMODEL)
#define OCTEON_CN3XXX           (OCTEON_CN58XX_PASS1_0 \
| OM_MATCH_PREVIOUS_MODELS \
| OM_IGNORE_REVISION)
#define OCTEON_CN5XXX           (OCTEON_CN58XX_PASS1_0 | OM_MATCH_5XXX_FAMILY_MODELS)
#define OCTEON_CN6XXX           (OCTEON_CN63XX_PASS1_0 | OM_MATCH_6XXX_FAMILY_MODELS)
#define OCTEON_38XX_FAMILY_MASK      0x00ffff00
#define OCTEON_38XX_FAMILY_REV_MASK  0x00ffff0f
#define OCTEON_38XX_MODEL_MASK       0x00ffff10
#define OCTEON_38XX_MODEL_REV_MASK   (OCTEON_38XX_FAMILY_REV_MASK \
| OCTEON_38XX_MODEL_MASK)
#define OCTEON_58XX_FAMILY_MASK      OCTEON_38XX_FAMILY_MASK
#define OCTEON_58XX_FAMILY_REV_MASK  0x00ffff3f
#define OCTEON_58XX_MODEL_MASK       0x00ffffc0
#define OCTEON_58XX_MODEL_REV_MASK   (OCTEON_58XX_FAMILY_REV_MASK \
| OCTEON_58XX_MODEL_MASK)
#define OCTEON_58XX_MODEL_MINOR_REV_MASK (OCTEON_58XX_MODEL_REV_MASK \
& 0x00fffff8)
#define OCTEON_5XXX_MODEL_MASK       0x00ff0fc0
#define __OCTEON_MATCH_MASK__(x, y, z) (((x) & (z)) == ((y) & (z)))
static inline int __OCTEON_IS_MODEL_COMPILE__(uint32_t arg_model,
uint32_t chip_model)
static inline uint32_t cvmx_get_proc_id(void) __attribute__ ((pure));
static inline uint64_t cvmx_read_csr(uint64_t csr_addr);
static inline int __octeon_is_model_runtime__(uint32_t model)
#define OCTEON_IS_MODEL(x) __octeon_is_model_runtime__(x)
#define OCTEON_IS_COMMON_BINARY() 1
#undef OCTEON_MODEL
const char *octeon_model_get_string(uint32_t chip_id);
const char *octeon_model_get_string_buffer(uint32_t chip_id, char *buffer);
