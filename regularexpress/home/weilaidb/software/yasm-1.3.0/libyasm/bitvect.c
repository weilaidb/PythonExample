#define and         &&
#define or          ||
#define not         !
#define AND         &
#define OR          |
#define XOR         ^
#define NOT         ~
#define SHL         <<
#define SHR         >>
#define mod         %
blockdef         unsigned char name[size]
blocktypedef     typedef unsigned char name[size]
bits_ *(BitVector-3)
size_ *(BitVector-2)
mask_ *(BitVector-1)
#define  ERRCODE_TYPE
#define  ERRCODE_BITS
#define  ERRCODE_WORD
#define  ERRCODE_LONG
#define  ERRCODE_POWR
#define  ERRCODE_LOGA
#define  ERRCODE_NULL
#define  ERRCODE_INDX
#define  ERRCODE_ORDR
#define  ERRCODE_SIZE
#define  ERRCODE_PARS
#define  ERRCODE_OVFL
#define  ERRCODE_SAME
#define  ERRCODE_EXPO
#define  ERRCODE_ZERO
#define  ERRCODE_OOPS
const N_int BitVector_BYTENORM[256] =
;
#define BIT_VECTOR_HIDDEN_WORDS 3
static N_word BITS;
static N_word MODMASK;
static N_word LOGBITS;
static N_word FACTOR;
static N_word LSB = 1;
static N_word MSB;
static N_word LONGBITS;
static N_word LOG10;
static N_word EXP10;
static wordptr BITMASKTAB;
BIT_VECTOR_ZERO_WORDS \
while (count-- > 0) *target++ = 0;
BIT_VECTOR_FILL_WORDS \
while (count-- > 0) *target++ = fill;
BIT_VECTOR_FLIP_WORDS \
while (count-- > 0) *target++ ^= flip;
BIT_VECTOR_COPY_WORDS \
while (count-- > 0) *target++ = *source++;
BIT_VECTOR_BACK_WORDS \
BIT_VECTOR_CLR_BIT \
*(address+(index>>LOGBITS)) &= NOT BITMASKTAB[index AND MODMASK];
BIT_VECTOR_SET_BIT \
*(address+(index>>LOGBITS)) |= BITMASKTAB[index AND MODMASK];
BIT_VECTOR_TST_BIT \
((*(address+(index>>LOGBITS)) AND BITMASKTAB[index AND MODMASK]) != 0)
BIT_VECTOR_FLP_BIT \
(mask = BITMASKTAB[index AND MODMASK]), \
(((*(addr+(index>>LOGBITS)) ^= mask) AND mask) != 0)
BIT_VECTOR_DIGITIZE \
value = (type) ((digit = value) / 10); \
digit -= value * 10; \
digit += (type) '0';
power10
BIT_VECTOR_zro_words
BIT_VECTOR_cpy_words
BIT_VECTOR_mov_words
BIT_VECTOR_ins_words
BIT_VECTOR_del_words
BIT_VECTOR_reverse
BIT_VECTOR_int2str
BIT_VECTOR_str2int
BitVector_Error
BitVector_Boot
BitVector_Shutdown
BitVector_Size
BitVector_Mask
BitVector_Version
BitVector_Word_Bits
BitVector_Long_Bits
BitVector_Dispose
BitVector_Destroy
BitVector_Destroy_List
BitVector_Create
BitVector_Create_List
BitVector_Resize
BitVector_Shadow
BitVector_Clone
BitVector_Concat
BitVector_Copy
BitVector_Empty
BitVector_Fill
BitVector_Flip
BitVector_Primes
BitVector_Reverse
BitVector_Interval_Empty
BitVector_Interval_Fill
BitVector_Interval_Flip
BitVector_Interval_Reverse
BitVector_interval_scan_inc
BitVector_interval_scan_dec
BitVector_Interval_Copy
BitVector_Interval_Substitute
BitVector_is_empty
BitVector_is_full
BitVector_equal
BitVector_Lexicompare
BitVector_Compare
BitVector_to_Hex
BitVector_from_Hex
BitVector_from_Oct
BitVector_to_Bin
BitVector_from_Bin
BitVector_to_Dec
struct BitVector_from_Dec_static_data ;
*BitVector_from_Dec_static_Boot
BitVector_from_Dec_static_Shutdown
BitVector_from_Dec_static
BitVector_from_Dec
BitVector_to_Enum
BitVector_from_Enum
BitVector_Bit_Off
BitVector_Bit_On
BitVector_bit_flip
BitVector_bit_test
BitVector_Bit_Copy
BitVector_LSB
BitVector_MSB
BitVector_lsb_
BitVector_msb_
BitVector_rotate_left
BitVector_rotate_right
BitVector_shift_left
BitVector_shift_right
BitVector_Move_Left
BitVector_Move_Right
BitVector_Insert
BitVector_Delete
BitVector_increment
BitVector_decrement
BitVector_compute
BitVector_add
BitVector_sub
BitVector_inc
BitVector_dec
BitVector_Negate
BitVector_Absolute
BitVector_Sign
BitVector_Mul_Pos
BitVector_Multiply
BitVector_Div_Pos
BitVector_Divide
BitVector_GCD
BitVector_GCD2
BitVector_Power
BitVector_Block_Store
BitVector_Block_Read
BitVector_Word_Store
BitVector_Word_Read
BitVector_Word_Insert
BitVector_Word_Delete
BitVector_Chunk_Store
BitVector_Chunk_Read
Set_Union
Set_Intersection
Set_Difference
Set_ExclusiveOr
Set_Complement
Set_subset
Set_Norm
Set_Norm2
Set_Norm3
Set_Min
Set_Max
Matrix_Multiplication
Matrix_Product
Matrix_Closure
Matrix_Transpose
