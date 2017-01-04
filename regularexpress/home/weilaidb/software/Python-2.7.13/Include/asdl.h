#define Py_ASDL_H
typedef PyObject * identifier;
typedef PyObject * string;
typedef PyObject * object;
typedef enum  bool;
typedef struct  asdl_seq;
typedef struct  asdl_int_seq;
asdl_seq *asdl_seq_new(int size, PyArena *arena);
asdl_int_seq *asdl_int_seq_new(int size, PyArena *arena);
#define asdl_seq_GET(S, I) (S)->elements[(I)]
#define asdl_seq_LEN(S) ((S) == NULL ? 0 : (S)->size)
#define asdl_seq_SET(S, I, V)
#define asdl_seq_SET(S, I, V) (S)->elements[I] = (V)
