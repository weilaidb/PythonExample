#define YASM_MD5_H
#define YASM_LIB_DECL
typedef struct yasm_md5_context  yasm_md5_context;
YASM_LIB_DECL
yasm_md5_init;
YASM_LIB_DECL
yasm_md5_update;
YASM_LIB_DECL
yasm_md5_final;
YASM_LIB_DECL
yasm_md5_transform;
