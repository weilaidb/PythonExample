#define MAXBITS 15
const char inflate_copyright[] =
" inflate 1.2.8 Copyright 1995-2013 Mark Adler ";
int ZLIB_INTERNAL inflate_table(type, lens, codes, table, bits, work)
codetype type;
unsigned short FAR *lens;
unsigned codes;
code FAR * FAR *table;
unsigned FAR *bits;
unsigned short FAR *work;
