#define AVCODEC_TEXTUREDSP_H
#define TEXTURE_BLOCK_W 4
#define TEXTURE_BLOCK_H 4
typedef struct TextureDSPContext  TextureDSPContext;
void ff_texturedsp_init(TextureDSPContext *c);
void ff_texturedspenc_init(TextureDSPContext *c);
