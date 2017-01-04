#define __RIJNDAEL_API_FST_H
#define     DIR_ENCRYPT           0
#define     DIR_DECRYPT           1
#define     MODE_ECB              1
#define     MODE_CBC              2
#define     MODE_CFB1             3
#undef	    TRUE
#define     TRUE                  1
#undef	    FALSE
#define     FALSE                 0
#define     BITSPERBLOCK        128
#define     BAD_KEY_DIR          -1
#define     BAD_KEY_MAT          -2
#define     BAD_KEY_INSTANCE     -3
#define     BAD_CIPHER_MODE      -4
#define     BAD_CIPHER_STATE     -5
#define     BAD_BLOCK_LENGTH     -6
#define     BAD_CIPHER_INSTANCE  -7
#define     BAD_DATA             -8
#define     BAD_OTHER            -9
#define     MAX_KEY_SIZE         64
#define     MAX_IV_SIZE          16
typedef struct  keyInstance;
typedef struct  cipherInstance;
