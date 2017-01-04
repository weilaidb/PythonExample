#define AVFORMAT_AVLANGUAGE_H
enum AVLangCodespace ;
const char *av_convert_lang_to(const char *lang, enum AVLangCodespace target_codespace);
