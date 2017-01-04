#define AVCODEC_DIRAC_DWT_H
typedef int DWTELEM;
typedef short IDWTELEM;
#define MAX_DWT_SUPPORT 8
#define MAX_DECOMPOSITIONS 8
typedef struct DWTCompose  DWTCompose;
typedef struct DWTPlane  DWTPlane;
struct DWTContext;
typedef void (*vertical_compose_2tap)(uint8_t *b0, uint8_t *b1, int width);
typedef void (*vertical_compose_3tap)(uint8_t *b0, uint8_t *b1, uint8_t *b2, int width);
typedef void (*vertical_compose_5tap)(uint8_t *b0, uint8_t *b1, uint8_t *b2, uint8_t *b3, uint8_t *b4, int width);
typedef void (*vertical_compose_9tap)(uint8_t *dst, uint8_t *b[8], int width);
typedef struct DWTContext  DWTContext;
enum dwt_type ;
int ff_spatial_idwt_init(DWTContext *d, DWTPlane *p, enum dwt_type type,
int decomposition_count, int bit_depth);
void ff_spatial_idwt_init_x86(DWTContext *d, enum dwt_type type);
void ff_spatial_idwt_slice2(DWTContext *d, int y);
#define COMPOSE_53iL0(b0, b1, b2)\
(b1 - ((b0 + b2 + 2) >> 2))
#define COMPOSE_DIRAC53iH0(b0, b1, b2)\
(b1 + ((b0 + b2 + 1) >> 1))
#define COMPOSE_DD97iH0(b0, b1, b2, b3, b4)\
(b2 + ((-b0 + 9*b1 + 9*b3 - b4 + 8) >> 4))
#define COMPOSE_DD137iL0(b0, b1, b2, b3, b4)\
(b2 - ((-b0 + 9*b1 + 9*b3 - b4 + 16) >> 5))
#define COMPOSE_HAARiL0(b0, b1)\
(b0 - ((b1 + 1) >> 1))
#define COMPOSE_HAARiH0(b0, b1)\
(b0 + b1)
#define COMPOSE_FIDELITYiL0(b0, b1, b2, b3, b4, b5, b6, b7, b8)\
(b4 - ((-8*(b0+b8) + 21*(b1+b7) - 46*(b2+b6) + 161*(b3+b5) + 128) >> 8))
#define COMPOSE_FIDELITYiH0(b0, b1, b2, b3, b4, b5, b6, b7, b8)\
(b4 + ((-2*(b0+b8) + 10*(b1+b7) - 25*(b2+b6) + 81*(b3+b5) + 128) >> 8))
#define COMPOSE_DAUB97iL1(b0, b1, b2)\
(b1 - ((1817*(b0 + b2) + 2048) >> 12))
#define COMPOSE_DAUB97iH1(b0, b1, b2)\
(b1 - (( 113*(b0 + b2) + 64) >> 7))
#define COMPOSE_DAUB97iL0(b0, b1, b2)\
(b1 + (( 217*(b0 + b2) + 2048) >> 12))
#define COMPOSE_DAUB97iH0(b0, b1, b2)\
(b1 + ((6497*(b0 + b2) + 2048) >> 12))
