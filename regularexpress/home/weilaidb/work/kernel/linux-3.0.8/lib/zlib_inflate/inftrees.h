#define INFTREES_H
typedef struct  code;
#define ENOUGH 2048
#define MAXD 592
typedef enum  codetype;
extern int zlib_inflate_table (codetype type, unsigned short *lens,
unsigned codes, code **table,
unsigned *bits, unsigned short *work);
