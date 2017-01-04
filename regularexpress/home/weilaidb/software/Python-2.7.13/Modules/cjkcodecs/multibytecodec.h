#define _PYTHON_MULTIBYTECODEC_H_
typedef uint32_t ucs4_t;
typedef unsigned int ucs4_t;
typedef uint16_t ucs2_t, DBCHAR;
typedef unsigned short ucs2_t, DBCHAR;
typedef union  MultibyteCodec_State;
typedef int (*mbcodec_init)(const void *config);
typedef Py_ssize_t (*mbencode_func)(MultibyteCodec_State *state,
const void *config,
const Py_UNICODE **inbuf, Py_ssize_t inleft,
unsigned char **outbuf, Py_ssize_t outleft,
int flags);
typedef int (*mbencodeinit_func)(MultibyteCodec_State *state,
const void *config);
typedef Py_ssize_t (*mbencodereset_func)(MultibyteCodec_State *state,
const void *config,
unsigned char **outbuf, Py_ssize_t outleft);
typedef Py_ssize_t (*mbdecode_func)(MultibyteCodec_State *state,
const void *config,
const unsigned char **inbuf, Py_ssize_t inleft,
Py_UNICODE **outbuf, Py_ssize_t outleft);
typedef int (*mbdecodeinit_func)(MultibyteCodec_State *state,
const void *config);
typedef Py_ssize_t (*mbdecodereset_func)(MultibyteCodec_State *state,
const void *config);
typedef struct  MultibyteCodec;
typedef struct  MultibyteCodecObject;
#define MultibyteCodec_Check(op) ((op)->ob_type == &MultibyteCodec_Type)
#define _MultibyteStatefulCodec_HEAD            \
PyObject_HEAD                               \
MultibyteCodec *codec;                      \
MultibyteCodec_State state;                 \
PyObject *errors;
typedef struct  MultibyteStatefulCodecContext;
#define MAXENCPENDING   2
#define _MultibyteStatefulEncoder_HEAD          \
_MultibyteStatefulCodec_HEAD                \
Py_UNICODE pending[MAXENCPENDING];          \
Py_ssize_t pendingsize;
typedef struct  MultibyteStatefulEncoderContext;
#define MAXDECPENDING   8
#define _MultibyteStatefulDecoder_HEAD          \
_MultibyteStatefulCodec_HEAD                \
unsigned char pending[MAXDECPENDING];       \
Py_ssize_t pendingsize;
typedef struct  MultibyteStatefulDecoderContext;
typedef struct  MultibyteIncrementalEncoderObject;
typedef struct  MultibyteIncrementalDecoderObject;
typedef struct  MultibyteStreamReaderObject;
typedef struct  MultibyteStreamWriterObject;
#define MBERR_TOOSMALL          (-1)
#define MBERR_TOOFEW            (-2)
#define MBERR_INTERNAL          (-3)
#define ERROR_STRICT            (PyObject *)(1)
#define ERROR_IGNORE            (PyObject *)(2)
#define ERROR_REPLACE           (PyObject *)(3)
#define ERROR_ISCUSTOM(p)       ((p) < ERROR_STRICT || ERROR_REPLACE < (p))
#define ERROR_DECREF(p) do  while (0);
#define MBENC_FLUSH             0x0001
#define MBENC_MAX               MBENC_FLUSH
#define PyMultibyteCodec_CAPSULE_NAME "multibytecodec.__map_*"
