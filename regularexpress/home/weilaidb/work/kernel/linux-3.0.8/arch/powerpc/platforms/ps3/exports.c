#define LV1_CALL(name, in, out, num)                          \
extern s64 _lv1_##name(LV1_##in##_IN_##out##_OUT_ARG_DECL); \
EXPORT_SYMBOL(_lv1_##name);
