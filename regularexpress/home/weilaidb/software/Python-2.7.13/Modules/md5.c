#undef BYTE_ORDER
#  define BYTE_ORDER (ARCH_IS_BIG_ENDIAN ? 1 : -1)
#  define BYTE_ORDER 0
#define T_MASK ((md5_word_t)~0)
#define T1 (T_MASK ^ 0x28955b87)
#define T2 (T_MASK ^ 0x173848a9)
#define T3    0x242070db
#define T4 (T_MASK ^ 0x3e423111)
#define T5 (T_MASK ^ 0x0a83f050)
#define T6    0x4787c62a
#define T7 (T_MASK ^ 0x57cfb9ec)
#define T8 (T_MASK ^ 0x02b96afe)
#define T9    0x698098d8
#define T10 (T_MASK ^ 0x74bb0850)
#define T11 (T_MASK ^ 0x0000a44e)
#define T12 (T_MASK ^ 0x76a32841)
#define T13    0x6b901122
#define T14 (T_MASK ^ 0x02678e6c)
#define T15 (T_MASK ^ 0x5986bc71)
#define T16    0x49b40821
#define T17 (T_MASK ^ 0x09e1da9d)
#define T18 (T_MASK ^ 0x3fbf4cbf)
#define T19    0x265e5a51
#define T20 (T_MASK ^ 0x16493855)
#define T21 (T_MASK ^ 0x29d0efa2)
#define T22    0x02441453
#define T23 (T_MASK ^ 0x275e197e)
#define T24 (T_MASK ^ 0x182c0437)
#define T25    0x21e1cde6
#define T26 (T_MASK ^ 0x3cc8f829)
#define T27 (T_MASK ^ 0x0b2af278)
#define T28    0x455a14ed
#define T29 (T_MASK ^ 0x561c16fa)
#define T30 (T_MASK ^ 0x03105c07)
#define T31    0x676f02d9
#define T32 (T_MASK ^ 0x72d5b375)
#define T33 (T_MASK ^ 0x0005c6bd)
#define T34 (T_MASK ^ 0x788e097e)
#define T35    0x6d9d6122
#define T36 (T_MASK ^ 0x021ac7f3)
#define T37 (T_MASK ^ 0x5b4115bb)
#define T38    0x4bdecfa9
#define T39 (T_MASK ^ 0x0944b49f)
#define T40 (T_MASK ^ 0x4140438f)
#define T41    0x289b7ec6
#define T42 (T_MASK ^ 0x155ed805)
#define T43 (T_MASK ^ 0x2b10cf7a)
#define T44    0x04881d05
#define T45 (T_MASK ^ 0x262b2fc6)
#define T46 (T_MASK ^ 0x1924661a)
#define T47    0x1fa27cf8
#define T48 (T_MASK ^ 0x3b53a99a)
#define T49 (T_MASK ^ 0x0bd6ddbb)
#define T50    0x432aff97
#define T51 (T_MASK ^ 0x546bdc58)
#define T52 (T_MASK ^ 0x036c5fc6)
#define T53    0x655b59c3
#define T54 (T_MASK ^ 0x70f3336d)
#define T55 (T_MASK ^ 0x00100b82)
#define T56 (T_MASK ^ 0x7a7ba22e)
#define T57    0x6fa87e4f
#define T58 (T_MASK ^ 0x01d3191f)
#define T59 (T_MASK ^ 0x5cfebceb)
#define T60    0x4e0811a1
#define T61 (T_MASK ^ 0x08ac817d)
#define T62 (T_MASK ^ 0x42c50dca)
#define T63    0x2ad7d2bb
#define T64 (T_MASK ^ 0x14792c6e)
static void
md5_process(md5_state_t *pms, const md5_byte_t *data)
void
md5_init(md5_state_t *pms)
void
md5_append(md5_state_t *pms, const md5_byte_t *data, unsigned int nbytes)
void
md5_finish(md5_state_t *pms, md5_byte_t digest[16])
