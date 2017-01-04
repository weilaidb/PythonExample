#define AVCODEC_ASS_SPLIT_H
typedef struct  ASSScriptInfo;
typedef struct  ASSStyle;
typedef struct  ASSDialog;
typedef struct  ASS;
typedef struct ASSSplitContext ASSSplitContext;
ASSSplitContext *ff_ass_split(const char *buf);
ASSDialog *ff_ass_split_dialog(ASSSplitContext *ctx, const char *buf,
int cache, int *number);
void ff_ass_split_free(ASSSplitContext *ctx);
typedef struct  ASSCodesCallbacks;
int ff_ass_split_override_codes(const ASSCodesCallbacks *callbacks, void *priv,
const char *buf);
ASSStyle *ff_ass_style_get(ASSSplitContext *ctx, const char *style);
