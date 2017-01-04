#define AVFORMAT_AVLANGUAGE_H
enum AVLangCodespace ;
const char *ff_convert_lang_to(const char *lang, enum AVLangCodespace target_codespace);
#if LIBAVFORMAT_VERSION_MAJOR < 58
attribute_deprecated
const char *av_convert_lang_to(const char *lang, enum AVLangCodespace target_codespace);
