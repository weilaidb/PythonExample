typedef enum  ASSFieldType;
typedef struct  ASSFields;
typedef struct  ASSSection;
static const ASSSection ass_sections[] = ;
typedef int (*ASSConvertFunc)(void *dest, const char *buf, int len);
static int convert_str(void *dest, const char *buf, int len)
static int convert_int(void *dest, const char *buf, int len)
static int convert_flt(void *dest, const char *buf, int len)
static int convert_color(void *dest, const char *buf, int len)
static int convert_timestamp(void *dest, const char *buf, int len)
static int convert_alignment(void *dest, const char *buf, int len)
static const ASSConvertFunc convert_func[] = ;
struct ASSSplitContext ;
static uint8_t *realloc_section_array(ASSSplitContext *ctx)
static inline int is_eol(char buf)
static inline const char *skip_space(const char *buf)
static int *get_default_field_orders(const ASSSection *section)
static const char *ass_split_section(ASSSplitContext *ctx, const char *buf)
static int ass_split(ASSSplitContext *ctx, const char *buf)
ASSSplitContext *ff_ass_split(const char *buf)
static void free_section(ASSSplitContext *ctx, const ASSSection *section)
ASSDialog *ff_ass_split_dialog(ASSSplitContext *ctx, const char *buf,
int cache, int *number)
void ff_ass_split_free(ASSSplitContext *ctx)
int ff_ass_split_override_codes(const ASSCodesCallbacks *callbacks, void *priv,
const char *buf)
]%n", sep, &len) > 0 ||
sscanf(buf, "\\alpha&H%2X&%1[\\}]%n", &alpha, sep, &len) > 1 ||
sscanf(buf, "\\%1[1234]a%1[\\}]%n", c_num, sep, &len) > 1 ||
sscanf(buf, "\\%1[1234]a&H%2X&%1[\\}]%n", c_num, &alpha, sep, &len) > 2)  else if (sscanf(buf, "\\fn%1[\\}]%n", sep, &len) > 0 ||
sscanf(buf, "\\fn%127[^\\}]%1[\\}]%n", tmp, sep, &len) > 1)  else if (sscanf(buf, "\\fs%1[\\}]%n", sep, &len) > 0 ||
sscanf(buf, "\\fs%u%1[\\}]%n", &size, sep, &len) > 1)  else if (sscanf(buf, "\\a%1[\\}]%n", sep, &len) > 0 ||
sscanf(buf, "\\a%2u%1[\\}]%n", &an, sep, &len) > 1 ||
sscanf(buf, "\\an%1[\\}]%n", sep, &len) > 0 ||
sscanf(buf, "\\an%1u%1[\\}]%n", &an, sep, &len) > 1)  else if (sscanf(buf, "\\r%1[\\}]%n", sep, &len) > 0 ||
sscanf(buf, "\\r%127[^\\}]%1[\\}]%n", tmp, sep, &len) > 1)  else if (sscanf(buf, "\\move(%d,%d,%d,%d)%1[\\}]%n", &x1, &y1, &x2, &y2, sep, &len) > 4 ||
sscanf(buf, "\\move(%d,%d,%d,%d,%d,%d)%1[\\}]%n", &x1, &y1, &x2, &y2, &t1, &t2, sep, &len) > 6)  else if (sscanf(buf, "\\pos(%d,%d)%1[\\}]%n", &x1, &y1, sep, &len) > 2)  else if (sscanf(buf, "\\org(%d,%d)%1[\\}]%n", &x1, &y1, sep, &len) > 2)  else ") + 2;
}
buf += len - 1;
}
if (*buf++ != '}')
return AVERROR_INVALIDDATA;
} else
}
if (text && callbacks->text)
callbacks->text(priv, text, text_len);
if (callbacks->end)
callbacks->end(priv);
return 0;
}
ASSStyle *ff_ass_style_get(ASSSplitContext *ctx, const char *style)
