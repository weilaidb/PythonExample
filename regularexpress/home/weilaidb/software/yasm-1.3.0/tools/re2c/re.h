#define re2c_re_h
typedef struct extop  ExtOp;
typedef struct CharPtn  CharPtn;
typedef struct CharSet  CharSet;
typedef struct Range  Range;
Range_init
Range_new
Range_copy
Range_new_copy
Range_out;
typedef enum  RegExpType;
typedef struct RegExp  RegExp;
RegExp_isA
RegExp_split;
RegExp_calcSize;
RegExp_fixedLength;
RegExp_compile;
RegExp_display;
RegExp_new_NullOp
RegExp_new_MatchOp
*RegExp_new_RuleOp;
RegExp_new_AltOp
RegExp_new_CatOp
RegExp_new_CloseOp
RegExp_new_CloseVOp
genCode;
*mkDiff;
*mkDot;
*strToRE;
*strToCaseInsensitiveRE;
*ranToRE;
*invToRE;
*mkAlt;
