#define YASM_BITVECT_H
#define YASM_LIB_DECL
typedef  unsigned   char    N_char;
typedef  unsigned   char    N_byte;
typedef  unsigned   short   N_short;
typedef  unsigned   short   N_shortword;
typedef  unsigned   int     N_int;
typedef  unsigned   int     N_word;
typedef  unsigned   long    N_long;
typedef  unsigned   long    N_longword;
typedef  signed     char    Z_char;
typedef  signed     char    Z_byte;
typedef  signed     short   Z_short;
typedef  signed     short   Z_shortword;
typedef  signed     int     Z_int;
typedef  signed     int     Z_word;
typedef  signed     long    Z_long;
typedef  signed     long    Z_longword;
typedef  void               *voidptr;
typedef  N_char             *charptr;
typedef  N_byte             *byteptr;
typedef  N_short            *shortptr;
typedef  N_shortword        *shortwordptr;
typedef  N_int              *intptr;
typedef  N_word             *wordptr;
typedef  N_long             *longptr;
typedef  N_longword         *longwordptr;
typedef  N_char             *N_charptr;
typedef  N_byte             *N_byteptr;
typedef  N_short            *N_shortptr;
typedef  N_shortword        *N_shortwordptr;
typedef  N_int              *N_intptr;
typedef  N_word             *N_wordptr;
typedef  N_long             *N_longptr;
typedef  N_longword         *N_longwordptr;
typedef  Z_char             *Z_charptr;
typedef  Z_byte             *Z_byteptr;
typedef  Z_short            *Z_shortptr;
typedef  Z_shortword        *Z_shortwordptr;
typedef  Z_int              *Z_intptr;
typedef  Z_word             *Z_wordptr;
typedef  Z_long             *Z_longptr;
typedef  Z_longword         *Z_longwordptr;
#define FALSE       (0!=0)
#define TRUE        (0==0)
typedef enum ErrCode
ErrCode;
typedef wordptr *listptr;
YASM_LIB_DECL
const char * BitVector_Error      (ErrCode error);
YASM_LIB_DECL
ErrCode BitVector_Boot       (void);
YASM_LIB_DECL
void    BitVector_Shutdown   (void);
YASM_LIB_DECL
N_word  BitVector_Size       (N_int bits);
YASM_LIB_DECL
N_word  BitVector_Mask       (N_int bits);
YASM_LIB_DECL
const char * BitVector_Version    (void);
YASM_LIB_DECL
N_int   BitVector_Word_Bits  (void);
YASM_LIB_DECL
N_int   BitVector_Long_Bits  (void);
YASM_LIB_DECL wordptr BitVector_Create     (N_int bits, boolean clear);
YASM_LIB_DECL
listptr BitVector_Create_List(N_int bits, boolean clear, N_int count);
YASM_LIB_DECL
wordptr BitVector_Resize     (wordptr oldaddr, N_int bits);
YASM_LIB_DECL
wordptr BitVector_Shadow     (wordptr addr);
YASM_LIB_DECL
wordptr BitVector_Clone      (wordptr addr);
YASM_LIB_DECL
wordptr BitVector_Concat     (wordptr X, wordptr Y);
YASM_LIB_DECL
void    BitVector_Dispose            ( charptr string);
YASM_LIB_DECL
void    BitVector_Destroy            ( wordptr addr);
YASM_LIB_DECL
void    BitVector_Destroy_List       (listptr list, N_int count);
YASM_LIB_DECL
void    BitVector_Copy       (wordptr X, wordptr Y);
YASM_LIB_DECL
void    BitVector_Empty      (wordptr addr);
YASM_LIB_DECL
void    BitVector_Fill       (wordptr addr);
YASM_LIB_DECL
void    BitVector_Flip       (wordptr addr);
YASM_LIB_DECL
void    BitVector_Primes     (wordptr addr);
YASM_LIB_DECL
void    BitVector_Reverse    (wordptr X, wordptr Y);
YASM_LIB_DECL
void    BitVector_Interval_Empty     ( wordptr addr, N_int lower, N_int upper);
YASM_LIB_DECL
void    BitVector_Interval_Fill      ( wordptr addr, N_int lower, N_int upper);
YASM_LIB_DECL
void    BitVector_Interval_Flip      ( wordptr addr, N_int lower, N_int upper);
YASM_LIB_DECL
void    BitVector_Interval_Reverse   ( wordptr addr, N_int lower, N_int upper);
YASM_LIB_DECL
boolean BitVector_interval_scan_inc  (wordptr addr, N_int start,
N_intptr min, N_intptr max);
YASM_LIB_DECL
boolean BitVector_interval_scan_dec  (wordptr addr, N_int start,
N_intptr min, N_intptr max);
YASM_LIB_DECL
void    BitVector_Interval_Copy      ( wordptr X, wordptr Y, N_int Xoffset,
N_int Yoffset, N_int length);
YASM_LIB_DECL
wordptr BitVector_Interval_Substitute( wordptr X, wordptr Y,
N_int Xoffset, N_int Xlength,
N_int Yoffset, N_int Ylength);
YASM_LIB_DECL
boolean BitVector_is_empty   (wordptr addr);
YASM_LIB_DECL
boolean BitVector_is_full    (wordptr addr);
YASM_LIB_DECL
boolean BitVector_equal      (wordptr X, wordptr Y);
YASM_LIB_DECL
Z_int   BitVector_Lexicompare(wordptr X, wordptr Y);
YASM_LIB_DECL
Z_int   BitVector_Compare    (wordptr X, wordptr Y);
YASM_LIB_DECL charptr BitVector_to_Hex     (wordptr addr);
YASM_LIB_DECL
ErrCode BitVector_from_Hex   (wordptr addr, charptr string);
YASM_LIB_DECL
ErrCode BitVector_from_Oct( wordptr addr, charptr string);
YASM_LIB_DECL charptr BitVector_to_Bin     (wordptr addr);
YASM_LIB_DECL
ErrCode BitVector_from_Bin   ( wordptr addr, charptr string);
YASM_LIB_DECL charptr BitVector_to_Dec     (wordptr addr);
YASM_LIB_DECL
ErrCode BitVector_from_Dec   ( wordptr addr, charptr string);
typedef struct BitVector_from_Dec_static_data BitVector_from_Dec_static_data;
YASM_LIB_DECL
BitVector_from_Dec_static_data *BitVector_from_Dec_static_Boot(N_word bits);
YASM_LIB_DECL
void BitVector_from_Dec_static_Shutdown( BitVector_from_Dec_static_data *data);
YASM_LIB_DECL
ErrCode BitVector_from_Dec_static(BitVector_from_Dec_static_data *data, wordptr addr, charptr string);
YASM_LIB_DECL charptr BitVector_to_Enum    (wordptr addr);
YASM_LIB_DECL
ErrCode BitVector_from_Enum  ( wordptr addr, charptr string);
YASM_LIB_DECL
void    BitVector_Bit_Off    ( wordptr addr, N_int indx);
YASM_LIB_DECL
void    BitVector_Bit_On     ( wordptr addr, N_int indx);
YASM_LIB_DECL
boolean BitVector_bit_flip   ( wordptr addr, N_int indx);
YASM_LIB_DECL
boolean BitVector_bit_test   (wordptr addr, N_int indx);
YASM_LIB_DECL
void    BitVector_Bit_Copy   ( wordptr addr, N_int indx, boolean bit);
YASM_LIB_DECL
void    BitVector_LSB                ( wordptr addr, boolean bit);
YASM_LIB_DECL
void    BitVector_MSB                ( wordptr addr, boolean bit);
YASM_LIB_DECL
boolean BitVector_lsb_               (wordptr addr);
YASM_LIB_DECL
boolean BitVector_msb_               (wordptr addr);
YASM_LIB_DECL
boolean BitVector_rotate_left        (wordptr addr);
YASM_LIB_DECL
boolean BitVector_rotate_right       (wordptr addr);
YASM_LIB_DECL
boolean BitVector_shift_left         (wordptr addr, boolean carry_in);
YASM_LIB_DECL
boolean BitVector_shift_right        (wordptr addr, boolean carry_in);
YASM_LIB_DECL
void    BitVector_Move_Left          (wordptr addr, N_int bits);
YASM_LIB_DECL
void    BitVector_Move_Right         (wordptr addr, N_int bits);
YASM_LIB_DECL
void    BitVector_Insert     (wordptr addr, N_int offset, N_int count,
boolean clear);
YASM_LIB_DECL
void    BitVector_Delete     (wordptr addr, N_int offset, N_int count,
boolean clear);
YASM_LIB_DECL
boolean BitVector_increment  (wordptr addr);
YASM_LIB_DECL
boolean BitVector_decrement  (wordptr addr);
YASM_LIB_DECL
boolean BitVector_compute    (wordptr X, wordptr Y, wordptr Z, boolean minus,
boolean *carry);
YASM_LIB_DECL
boolean BitVector_add        (wordptr X, wordptr Y, wordptr Z, boolean *carry);
YASM_LIB_DECL
boolean BitVector_sub        (wordptr X, wordptr Y, wordptr Z, boolean *carry);
YASM_LIB_DECL
boolean BitVector_inc        (wordptr X, wordptr Y);
YASM_LIB_DECL
boolean BitVector_dec        (wordptr X, wordptr Y);
YASM_LIB_DECL
void    BitVector_Negate     (wordptr X, wordptr Y);
YASM_LIB_DECL
void    BitVector_Absolute   (wordptr X, wordptr Y);
YASM_LIB_DECL
Z_int   BitVector_Sign       (wordptr addr);
YASM_LIB_DECL
ErrCode BitVector_Mul_Pos    (wordptr X, wordptr Y, wordptr Z, boolean strict);
YASM_LIB_DECL
ErrCode BitVector_Multiply   (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
ErrCode BitVector_Div_Pos    (wordptr Q, wordptr X, wordptr Y, wordptr R);
YASM_LIB_DECL
ErrCode BitVector_Divide     (wordptr Q, wordptr X, wordptr Y, wordptr R);
YASM_LIB_DECL
ErrCode BitVector_GCD        (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
ErrCode BitVector_GCD2       (wordptr U, wordptr V, wordptr W,
wordptr X, wordptr Y);
YASM_LIB_DECL
ErrCode BitVector_Power      (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
void    BitVector_Block_Store(wordptr addr, charptr buffer, N_int length);
YASM_LIB_DECL
charptr BitVector_Block_Read (wordptr addr, N_intptr length);
YASM_LIB_DECL
void    BitVector_Word_Store (wordptr addr, N_int offset, N_int value);
YASM_LIB_DECL
N_int   BitVector_Word_Read  (wordptr addr, N_int offset);
YASM_LIB_DECL
void    BitVector_Word_Insert(wordptr addr, N_int offset, N_int count,
boolean clear);
YASM_LIB_DECL
void    BitVector_Word_Delete(wordptr addr, N_int offset, N_int count,
boolean clear);
YASM_LIB_DECL
void    BitVector_Chunk_Store(wordptr addr, N_int chunksize,
N_int offset, N_long value);
YASM_LIB_DECL
N_long  BitVector_Chunk_Read (wordptr addr, N_int chunksize,
N_int offset);
YASM_LIB_DECL
void    Set_Union            (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
void    Set_Intersection     (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
void    Set_Difference       (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
void    Set_ExclusiveOr      (wordptr X, wordptr Y, wordptr Z);
YASM_LIB_DECL
void    Set_Complement       (wordptr X, wordptr Y);
YASM_LIB_DECL
boolean Set_subset           (wordptr X, wordptr Y);
YASM_LIB_DECL
N_int   Set_Norm             (wordptr addr);
YASM_LIB_DECL
N_int   Set_Norm2            (wordptr addr);
YASM_LIB_DECL
N_int   Set_Norm3            (wordptr addr);
YASM_LIB_DECL
Z_long  Set_Min              (wordptr addr);
YASM_LIB_DECL
Z_long  Set_Max              (wordptr addr);
YASM_LIB_DECL
void    Matrix_Multiplication(wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY,
wordptr Z, N_int rowsZ, N_int colsZ);
YASM_LIB_DECL
void    Matrix_Product       (wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY,
wordptr Z, N_int rowsZ, N_int colsZ);
YASM_LIB_DECL
void    Matrix_Closure       (wordptr addr, N_int rows, N_int cols);
YASM_LIB_DECL
void    Matrix_Transpose     (wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY);
