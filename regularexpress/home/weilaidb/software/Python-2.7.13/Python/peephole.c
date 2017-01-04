#define GETARG(arr, i) ((int)((arr[i+2]<<8) + arr[i+1]))
#define UNCONDITIONAL_JUMP(op)  (op==JUMP_ABSOLUTE || op==JUMP_FORWARD)
#define CONDITIONAL_JUMP(op) (op==POP_JUMP_IF_FALSE || op==POP_JUMP_IF_TRUE \
|| op==JUMP_IF_FALSE_OR_POP || op==JUMP_IF_TRUE_OR_POP)
#define ABSOLUTE_JUMP(op) (op==JUMP_ABSOLUTE || op==CONTINUE_LOOP \
|| op==POP_JUMP_IF_FALSE || op==POP_JUMP_IF_TRUE \
|| op==JUMP_IF_FALSE_OR_POP || op==JUMP_IF_TRUE_OR_POP)
#define JUMPS_ON_TRUE(op) (op==POP_JUMP_IF_TRUE || op==JUMP_IF_TRUE_OR_POP)
#define GETJUMPTGT(arr, i) (GETARG(arr,i) + (ABSOLUTE_JUMP(arr[i]) ? 0 : i+3))
#define SETARG(arr, i, val) arr[i+2] = val>>8; arr[i+1] = val & 255
#define CODESIZE(op)  (HAS_ARG(op) ? 3 : 1)
#define ISBASICBLOCK(blocks, start, bytes) \
(blocks[start]==blocks[start+bytes-1])
static int
tuple_of_constants(unsigned char *codestr, Py_ssize_t n, PyObject *consts)
static int
fold_binops_on_constants(unsigned char *codestr, PyObject *consts)
static int
fold_unaryops_on_constants(unsigned char *codestr, PyObject *consts)
static unsigned int *
markblocks(unsigned char *code, Py_ssize_t len)
PyObject *
PyCode_Optimize(PyObject *code, PyObject* consts, PyObject *names,
PyObject *lineno_obj)
