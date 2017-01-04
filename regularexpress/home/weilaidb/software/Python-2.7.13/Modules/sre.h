#define SRE_INCLUDED
# define SRE_CODE Py_UCS4
# if SIZEOF_SIZE_T > 4
#  define SRE_MAXREPEAT (~(SRE_CODE)0)
# else
#  define SRE_MAXREPEAT ((SRE_CODE)PY_SSIZE_T_MAX)
# endif
# define SRE_CODE unsigned int
# if SIZEOF_SIZE_T > SIZEOF_INT
#  define SRE_MAXREPEAT (~(SRE_CODE)0)
# else
#  define SRE_MAXREPEAT ((SRE_CODE)PY_SSIZE_T_MAX)
# endif
typedef struct  PatternObject;
#define PatternObject_GetCode(o) (((PatternObject*)(o))->code)
typedef struct  MatchObject;
typedef unsigned int (*SRE_TOLOWER_HOOK)(unsigned int ch);
#define SRE_MARK_SIZE 200
typedef struct SRE_REPEAT_T  SRE_REPEAT;
typedef struct  SRE_STATE;
typedef struct  ScannerObject;
