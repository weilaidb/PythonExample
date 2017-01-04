#define re2c_dfa_h
extern void prtCh(FILE *, unsigned char);
extern void printSpan(FILE *, unsigned int, unsigned int);
struct DFA;
struct State;
typedef enum  ActionType;
typedef struct Action  Action;
void Action_emit(Action*, FILE *, int *);
typedef struct Span  Span;
unsigned int Span_show(Span*, FILE *, unsigned int);
typedef struct Go  Go;
typedef struct State  State;
void Go_genGoto(Go*, FILE *, State*, State*, int*);
void Go_genBase(Go*, FILE *, State*, State*, int*);
void Go_genLinear(Go*, FILE *, State*, State*, int*);
void Go_genBinary(Go*, FILE *, State*, State*, int*);
void Go_genSwitch(Go*, FILE *, State*, State*, int*);
void Go_compact(Go*);
void Go_unmap(Go*, Go*, State*);
State *State_new(void);
void State_delete(State*);
void State_emit(State*, FILE *, int *);
void State_out(FILE *, const State*);
typedef struct DFA  DFA;
DFA *DFA_new(Ins*, unsigned int, unsigned int, unsigned int, Char*);
void DFA_delete(DFA*);
void DFA_addState(DFA*, State**, State*);
State *DFA_findState(DFA*, Ins**, unsigned int);
void DFA_split(DFA*, State*);
void DFA_findSCCs(DFA*);
void DFA_emit(DFA*, FILE *);
void DFA_out(FILE *, const DFA*);
static Action *
Action_new_Match(State *s)
static Action *
Action_new_Enter(State *s, unsigned int l)
static Action *
Action_new_Save(State *s, unsigned int i)
static Action *
Action_new_Move(State *s)
Action *Action_new_Accept(State*, unsigned int, unsigned int*, State**);
static Action *
Action_new_Rule(State *s, RegExp *r)
static int
Action_isRule(Action *a)
static int
Action_isMatch(Action *a)
static int
Action_readAhead(Action *a)
