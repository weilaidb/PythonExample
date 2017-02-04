T 64 - a, 64 - b, 64 - c, 64 - d, 64 - e, 64 - f, 64 - g, 64 - h
static const uint8_t IP_shuffle[] = ;
#undef T
#if CONFIG_SMALL || defined(GENTABLES)
T 32 - a, 32 - b, 32 - c, 32 - d
static const uint8_t P_shuffle[] = ;
#undef T
T 64 - a, 64 - b, 64 - c, 64 - d, 64 - e, 64 - f, 64 - g
static const uint8_t PC1_shuffle[] = ;
#undef T
T 56 - a, 56 - b, 56 - c, 56 - d, 56 - e, 56 - f
static const uint8_t PC2_shuffle[] = ;
#undef T
#if CONFIG_SMALL
static const uint8_t S_boxes[8][32] = ;
static const uint32_t S_boxes_P_shuffle[8][64] = ;
shuffle
shuffle_inv
f_func
key_shift_left
gen_roundkeys
des_encdec
*av_des_alloc
av_des_init
av_des_crypt_mac
av_des_crypt
av_des_mac
