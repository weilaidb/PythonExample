#define Py_PARSER_H
#define MAXSTACK 1500
typedef struct  stackentry;
typedef struct  stack;
typedef struct  parser_state;
parser_state *PyParser_New(grammar *g, int start);
void PyParser_Delete(parser_state *ps);
int PyParser_AddToken(parser_state *ps, int type, char *str, int lineno, int col_offset,
int *expected_ret);
void PyGrammar_AddAccelerators(grammar *g);
