#define ALPHA_MASK 0x01
#define DECIMAL_MASK 0x02
#define DIGIT_MASK 0x04
#define LOWER_MASK 0x08
#define LINEBREAK_MASK 0x10
#define SPACE_MASK 0x20
#define TITLE_MASK 0x40
#define UPPER_MASK 0x80
#define NODELTA_MASK 0x100
#define NUMERIC_MASK 0x200
typedef struct  _PyUnicode_TypeRecord;
static const _PyUnicode_TypeRecord *
gettyperecord(Py_UNICODE code)
Py_UNICODE _PyUnicode_ToTitlecase(register Py_UNICODE ch)
int _PyUnicode_IsTitlecase(Py_UNICODE ch)
int _PyUnicode_ToDecimalDigit(Py_UNICODE ch)
int _PyUnicode_IsDecimalDigit(Py_UNICODE ch)
int _PyUnicode_ToDigit(Py_UNICODE ch)
int _PyUnicode_IsDigit(Py_UNICODE ch)
int _PyUnicode_IsNumeric(Py_UNICODE ch)
int _PyUnicode_IsLowercase(Py_UNICODE ch)
int _PyUnicode_IsUppercase(Py_UNICODE ch)
Py_UNICODE _PyUnicode_ToUppercase(Py_UNICODE ch)
Py_UNICODE _PyUnicode_ToLowercase(Py_UNICODE ch)
int _PyUnicode_IsAlpha(Py_UNICODE ch)
int _PyUnicode_IsLowercase(Py_UNICODE ch)
int _PyUnicode_IsUppercase(Py_UNICODE ch)
Py_UNICODE _PyUnicode_ToLowercase(Py_UNICODE ch)
Py_UNICODE _PyUnicode_ToUppercase(Py_UNICODE ch)
int _PyUnicode_IsAlpha(Py_UNICODE ch)
