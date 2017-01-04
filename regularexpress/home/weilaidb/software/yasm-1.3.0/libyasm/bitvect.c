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
#define blockdef(name,size)         unsigned char name[size]
#define blocktypedef(name,size)     typedef unsigned char name[size]
#define bits_(BitVector) *(BitVector-3)
#define size_(BitVector) *(BitVector-2)
#define mask_(BitVector) *(BitVector-1)
#define  ERRCODE_TYPE  "sizeof(word) > sizeof(size_t)"
#define  ERRCODE_BITS  "bits(word) != sizeof(word)*8"
#define  ERRCODE_WORD  "bits(word) < 16"
#define  ERRCODE_LONG  "bits(word) > bits(long)"
#define  ERRCODE_POWR  "bits(word) != 2^x"
#define  ERRCODE_LOGA  "bits(word) != 2^ld(bits(word))"
#define  ERRCODE_NULL  "unable to allocate memory"
#define  ERRCODE_INDX  "index out of range"
#define  ERRCODE_ORDR  "minimum > maximum index"
#define  ERRCODE_SIZE  "bit vector size mismatch"
#define  ERRCODE_PARS  "input string syntax error"
#define  ERRCODE_OVFL  "numeric overflow error"
#define  ERRCODE_SAME  "result vector(s) must be distinct"
#define  ERRCODE_EXPO  "exponent must be positive"
#define  ERRCODE_ZERO  "division by zero error"
#define  ERRCODE_OOPS  "unexpected internal error - please contact author"
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
#define BIT_VECTOR_ZERO_WORDS(target,count) \
while (count-- > 0) *target++ = 0;
#define BIT_VECTOR_FILL_WORDS(target,fill,count) \
while (count-- > 0) *target++ = fill;
#define BIT_VECTOR_FLIP_WORDS(target,flip,count) \
while (count-- > 0) *target++ ^= flip;
#define BIT_VECTOR_COPY_WORDS(target,source,count) \
while (count-- > 0) *target++ = *source++;
#define BIT_VECTOR_BACK_WORDS(target,source,count) \
#define BIT_VECTOR_CLR_BIT(address,index) \
*(address+(index>>LOGBITS)) &= NOT BITMASKTAB[index AND MODMASK];
#define BIT_VECTOR_SET_BIT(address,index) \
*(address+(index>>LOGBITS)) |= BITMASKTAB[index AND MODMASK];
#define BIT_VECTOR_TST_BIT(address,index) \
((*(address+(index>>LOGBITS)) AND BITMASKTAB[index AND MODMASK]) != 0)
#define BIT_VECTOR_FLP_BIT(address,index,mask) \
(mask = BITMASKTAB[index AND MODMASK]), \
(((*(addr+(index>>LOGBITS)) ^= mask) AND mask) != 0)
#define BIT_VECTOR_DIGITIZE(type,value,digit) \
value = (type) ((digit = value) / 10); \
digit -= value * 10; \
digit += (type) '0';
static N_word power10(N_word x)
static void BIT_VECTOR_zro_words(wordptr addr, N_word count)
static void BIT_VECTOR_cpy_words(wordptr target, wordptr source, N_word count)
static void BIT_VECTOR_mov_words(wordptr target, wordptr source, N_word count)
static void BIT_VECTOR_ins_words(wordptr addr, N_word total, N_word count,
boolean clear)
static void BIT_VECTOR_del_words(wordptr addr, N_word total, N_word count,
boolean clear)
static void BIT_VECTOR_reverse(charptr string, N_word length)
static N_word BIT_VECTOR_int2str(charptr string, N_word value)
static N_word BIT_VECTOR_str2int(charptr string, N_word *value)
const char * BitVector_Error(ErrCode error)
ErrCode BitVector_Boot(void)
void BitVector_Shutdown(void)
N_word BitVector_Size(N_int bits)
N_word BitVector_Mask(N_int bits)
const char * BitVector_Version(void)
N_int BitVector_Word_Bits(void)
N_int BitVector_Long_Bits(void)
void BitVector_Dispose(charptr string)
void BitVector_Destroy(wordptr addr)
void BitVector_Destroy_List(listptr list, N_int count)
wordptr BitVector_Create(N_int bits, boolean clear)
listptr BitVector_Create_List(N_int bits, boolean clear, N_int count)
wordptr BitVector_Resize(wordptr oldaddr, N_int bits)
wordptr BitVector_Shadow(wordptr addr)
wordptr BitVector_Clone(wordptr addr)
wordptr BitVector_Concat(wordptr X, wordptr Y)
void BitVector_Copy(wordptr X, wordptr Y)
void BitVector_Empty(wordptr addr)
void BitVector_Fill(wordptr addr)
void BitVector_Flip(wordptr addr)
void BitVector_Primes(wordptr addr)
void BitVector_Reverse(wordptr X, wordptr Y)
void BitVector_Interval_Empty(wordptr addr, N_int lower, N_int upper)
void BitVector_Interval_Fill(wordptr addr, N_int lower, N_int upper)
void BitVector_Interval_Flip(wordptr addr, N_int lower, N_int upper)
void BitVector_Interval_Reverse(wordptr addr, N_int lower, N_int upper)
boolean BitVector_interval_scan_inc(wordptr addr, N_int start,
N_intptr min, N_intptr max)
boolean BitVector_interval_scan_dec(wordptr addr, N_int start,
N_intptr min, N_intptr max)
void BitVector_Interval_Copy(wordptr X, wordptr Y, N_int Xoffset,
N_int Yoffset, N_int length)
wordptr BitVector_Interval_Substitute(wordptr X, wordptr Y,
N_int Xoffset, N_int Xlength,
N_int Yoffset, N_int Ylength)
boolean BitVector_is_empty(wordptr addr)
boolean BitVector_is_full(wordptr addr)
boolean BitVector_equal(wordptr X, wordptr Y)
Z_int BitVector_Lexicompare(wordptr X, wordptr Y)
Z_int BitVector_Compare(wordptr X, wordptr Y)
charptr BitVector_to_Hex(wordptr addr)
ErrCode BitVector_from_Hex(wordptr addr, charptr string)
ErrCode BitVector_from_Oct(wordptr addr, charptr string)
charptr BitVector_to_Bin(wordptr addr)
ErrCode BitVector_from_Bin(wordptr addr, charptr string)
charptr BitVector_to_Dec(wordptr addr)
struct BitVector_from_Dec_static_data ;
BitVector_from_Dec_static_data *BitVector_from_Dec_static_Boot(N_word bits)
void BitVector_from_Dec_static_Shutdown(BitVector_from_Dec_static_data *data)
ErrCode BitVector_from_Dec_static(BitVector_from_Dec_static_data *data,
wordptr addr, charptr string)
ErrCode BitVector_from_Dec(wordptr addr, charptr string)
charptr BitVector_to_Enum(wordptr addr)
ErrCode BitVector_from_Enum(wordptr addr, charptr string)
void BitVector_Bit_Off(wordptr addr, N_int indx)
void BitVector_Bit_On(wordptr addr, N_int indx)
boolean BitVector_bit_flip(wordptr addr, N_int indx)
boolean BitVector_bit_test(wordptr addr, N_int indx)
void BitVector_Bit_Copy(wordptr addr, N_int indx, boolean bit)
void BitVector_LSB(wordptr addr, boolean bit)
void BitVector_MSB(wordptr addr, boolean bit)
boolean BitVector_lsb_(wordptr addr)
boolean BitVector_msb_(wordptr addr)
boolean BitVector_rotate_left(wordptr addr)
boolean BitVector_rotate_right(wordptr addr)
boolean BitVector_shift_left(wordptr addr, boolean carry_in)
boolean BitVector_shift_right(wordptr addr, boolean carry_in)
void BitVector_Move_Left(wordptr addr, N_int bits)
void BitVector_Move_Right(wordptr addr, N_int bits)
void BitVector_Insert(wordptr addr, N_int offset, N_int count, boolean clear)
void BitVector_Delete(wordptr addr, N_int offset, N_int count, boolean clear)
boolean BitVector_increment(wordptr addr)
boolean BitVector_decrement(wordptr addr)
boolean BitVector_compute(wordptr X, wordptr Y, wordptr Z, boolean minus, boolean *carry)
boolean BitVector_add(wordptr X, wordptr Y, wordptr Z, boolean *carry)
boolean BitVector_sub(wordptr X, wordptr Y, wordptr Z, boolean *carry)
boolean BitVector_inc(wordptr X, wordptr Y)
boolean BitVector_dec(wordptr X, wordptr Y)
void BitVector_Negate(wordptr X, wordptr Y)
void BitVector_Absolute(wordptr X, wordptr Y)
Z_int BitVector_Sign(wordptr addr)
ErrCode BitVector_Mul_Pos(wordptr X, wordptr Y, wordptr Z, boolean strict)
ErrCode BitVector_Multiply(wordptr X, wordptr Y, wordptr Z)
ErrCode BitVector_Div_Pos(wordptr Q, wordptr X, wordptr Y, wordptr R)
ErrCode BitVector_Divide(wordptr Q, wordptr X, wordptr Y, wordptr R)
ErrCode BitVector_GCD(wordptr X, wordptr Y, wordptr Z)
ErrCode BitVector_GCD2(wordptr U, wordptr V, wordptr W, wordptr X, wordptr Y)
ErrCode BitVector_Power(wordptr X, wordptr Y, wordptr Z)
void BitVector_Block_Store(wordptr addr, charptr buffer, N_int length)
charptr BitVector_Block_Read(wordptr addr, N_intptr length)
void BitVector_Word_Store(wordptr addr, N_int offset, N_int value)
N_int BitVector_Word_Read(wordptr addr, N_int offset)
void BitVector_Word_Insert(wordptr addr, N_int offset, N_int count,
boolean clear)
void BitVector_Word_Delete(wordptr addr, N_int offset, N_int count,
boolean clear)
void BitVector_Chunk_Store(wordptr addr, N_int chunksize, N_int offset,
N_long value)
N_long BitVector_Chunk_Read(wordptr addr, N_int chunksize, N_int offset)
void Set_Union(wordptr X, wordptr Y, wordptr Z)
void Set_Intersection(wordptr X, wordptr Y, wordptr Z)
void Set_Difference(wordptr X, wordptr Y, wordptr Z)
void Set_ExclusiveOr(wordptr X, wordptr Y, wordptr Z)
void Set_Complement(wordptr X, wordptr Y)
boolean Set_subset(wordptr X, wordptr Y)
N_int Set_Norm(wordptr addr)
N_int Set_Norm2(wordptr addr)
N_int Set_Norm3(wordptr addr)
Z_long Set_Min(wordptr addr)
Z_long Set_Max(wordptr addr)
void Matrix_Multiplication(wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY,
wordptr Z, N_int rowsZ, N_int colsZ)
void Matrix_Product(wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY,
wordptr Z, N_int rowsZ, N_int colsZ)
void Matrix_Closure(wordptr addr, N_int rows, N_int cols)
void Matrix_Transpose(wordptr X, N_int rowsX, N_int colsX,
wordptr Y, N_int rowsY, N_int colsY)
