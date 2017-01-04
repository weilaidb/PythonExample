#  include <stdio.h>
#  ifndef DYNAMIC_CRC_TABLE
#    define DYNAMIC_CRC_TABLE
#  endif
#define local static
#if !defined(NOBYFOUR) && defined(Z_U4)
#  define BYFOUR
local unsigned long crc32_little OF((unsigned long,
const unsigned char FAR *, unsigned));
local unsigned long crc32_big OF((unsigned long,
const unsigned char FAR *, unsigned));
#  define TBLS 8
#  define TBLS 1
local unsigned long gf2_matrix_times OF((unsigned long *mat,
unsigned long vec));
local void gf2_matrix_square OF((unsigned long *square, unsigned long *mat));
local uLong crc32_combine_ OF((uLong crc1, uLong crc2, z_off64_t len2));
local volatile int crc_table_empty = 1;
local z_crc_t FAR crc_table[TBLS][256];
local void make_crc_table OF((void));
local void write_table OF((FILE *, const z_crc_t FAR *));
local void make_crc_table()
local void write_table(out, table)
FILE *out;
const z_crc_t FAR *table;
const z_crc_t FAR * ZEXPORT get_crc_table()
#define DO1 crc = crc_table[0][((int)crc ^ (*buf++)) & 0xff] ^ (crc >> 8)
#define DO8 DO1; DO1; DO1; DO1; DO1; DO1; DO1; DO1
unsigned long ZEXPORT crc32(crc, buf, len)
unsigned long crc;
const unsigned char FAR *buf;
uInt len;
#define DOLIT4 c ^= *buf4++; \
c = crc_table[3][c & 0xff] ^ crc_table[2][(c >> 8) & 0xff] ^ \
crc_table[1][(c >> 16) & 0xff] ^ crc_table[0][c >> 24]
#define DOLIT32 DOLIT4; DOLIT4; DOLIT4; DOLIT4; DOLIT4; DOLIT4; DOLIT4; DOLIT4
local unsigned long crc32_little(crc, buf, len)
unsigned long crc;
const unsigned char FAR *buf;
unsigned len;
#define DOBIG4 c ^= *++buf4; \
c = crc_table[4][c & 0xff] ^ crc_table[5][(c >> 8) & 0xff] ^ \
crc_table[6][(c >> 16) & 0xff] ^ crc_table[7][c >> 24]
#define DOBIG32 DOBIG4; DOBIG4; DOBIG4; DOBIG4; DOBIG4; DOBIG4; DOBIG4; DOBIG4
local unsigned long crc32_big(crc, buf, len)
unsigned long crc;
const unsigned char FAR *buf;
unsigned len;
#define GF2_DIM 32
local unsigned long gf2_matrix_times(mat, vec)
unsigned long *mat;
unsigned long vec;
local void gf2_matrix_square(square, mat)
unsigned long *square;
unsigned long *mat;
local uLong crc32_combine_(crc1, crc2, len2)
uLong crc1;
uLong crc2;
z_off64_t len2;
uLong ZEXPORT crc32_combine(crc1, crc2, len2)
uLong crc1;
uLong crc2;
z_off_t len2;
uLong ZEXPORT crc32_combine64(crc1, crc2, len2)
uLong crc1;
uLong crc2;
z_off64_t len2;
