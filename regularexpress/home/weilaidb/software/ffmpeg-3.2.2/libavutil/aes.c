const int av_aes_size= sizeof(AVAES);
*av_aes_alloc
static const uint8_t rcon[10] = ;
static uint8_t     sbox[256];
static uint8_t inv_sbox[256];
#if CONFIG_SMALL
static uint32_t enc_multbl[1][256];
static uint32_t dec_multbl[1][256];
static uint32_t enc_multbl[4][256];
static uint32_t dec_multbl[4][256];
#if HAVE_BIGENDIAN
ROT (((x) >> (s)) | ((x) << (32-(s))))
ROT (((x) << (s)) | ((x) >> (32-(s))))
addkey
addkey_s
addkey_d
subshift
mix_core
mix
aes_crypt
aes_encrypt
aes_decrypt
av_aes_crypt
init_multbl2
av_aes_init
