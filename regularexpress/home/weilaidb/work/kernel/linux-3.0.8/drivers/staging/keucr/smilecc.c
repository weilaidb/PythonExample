static BYTE ecctable[256] = ;
static void   trans_result(BYTE,   BYTE,   BYTE *, BYTE *);
#define BIT7        0x80
#define BIT6        0x40
#define BIT5        0x20
#define BIT4        0x10
#define BIT3        0x08
#define BIT2        0x04
#define BIT1        0x02
#define BIT0        0x01
#define BIT1BIT0    0x03
#define BIT23       0x00800000L
#define MASK_CPS    0x3f
#define CORRECTABLE 0x00555554L
static void trans_result(BYTE reg2, BYTE reg3, BYTE *ecc1, BYTE *ecc2)
void calculate_ecc(BYTE *table, BYTE *data, BYTE *ecc1, BYTE *ecc2, BYTE *ecc3)
BYTE correct_data(BYTE *data, BYTE *eccdata, BYTE ecc1, BYTE ecc2, BYTE ecc3)
int _Correct_D_SwECC(BYTE *buf, BYTE *redundant_ecc, BYTE *calculate_ecc)
void _Calculate_D_SwECC(BYTE *buf, BYTE *ecc)
