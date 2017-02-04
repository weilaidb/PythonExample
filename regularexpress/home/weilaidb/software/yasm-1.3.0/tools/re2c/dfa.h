#define re2c_dfa_h
prtCh;
printSpan;
struct DFA;
struct State;
typedef enum  ActionType;
typedef struct Action  Action;
Action_emit;
typedef struct Span  Span;
Span_show;
typedef struct Go  Go;
typedef struct State  State;
Go_genGoto;
Go_genBase;
Go_genLinear;
Go_genBinary;
Go_genSwitch;
Go_compact;
Go_unmap;
*State_new;
State_delete;
State_emit;
State_out;
typedef struct DFA  DFA;
*DFA_new;
DFA_delete;
DFA_addState;
*DFA_findState;
DFA_split;
DFA_findSCCs;
DFA_emit;
DFA_out;
Action_new_Match
Action_new_Enter
Action_new_Save
Action_new_Move
*Action_new_Accept;
Action_new_Rule
Action_isRule
Action_isMatch
Action_readAhead
