#define YASM_MD5_H
#define YASM_LIB_DECL
typedef struct yasm_md5_context  yasm_md5_context;
YASM_LIB_DECL
void yasm_md5_init(yasm_md5_context *context);
YASM_LIB_DECL
void yasm_md5_update(yasm_md5_context *context, unsigned char const *buf,
unsigned long len);
YASM_LIB_DECL
void yasm_md5_final(unsigned char digest[16], yasm_md5_context *context);
YASM_LIB_DECL
void yasm_md5_transform(unsigned long buf[4], const unsigned char in[64]);
