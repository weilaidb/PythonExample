#define AVCODEC_AC3_PARSER_H
int avpriv_ac3_parse_header(GetBitContext *gbc, AC3HeaderInfo **hdr);
