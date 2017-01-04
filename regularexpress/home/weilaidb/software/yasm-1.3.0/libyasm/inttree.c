#define VERIFY(condition) \
if (!(condition))
static void Assert(int assertion, const char *error)
static IntervalTreeNode *ITN_create(long low, long high, void *data);
static void LeftRotate(IntervalTree *, IntervalTreeNode *);
static void RightRotate(IntervalTree *, IntervalTreeNode *);
static void TreeInsertHelp(IntervalTree *, IntervalTreeNode *);
static void TreePrintHelper(const IntervalTree *, IntervalTreeNode *);
static void FixUpMaxHigh(IntervalTree *, IntervalTreeNode *);
static void DeleteFixUp(IntervalTree *, IntervalTreeNode *);
static void CheckMaxHighFields(const IntervalTree *, IntervalTreeNode *);
static int CheckMaxHighFieldsHelper(const IntervalTree *, IntervalTreeNode *y,
const int currentHigh, int match);
static void IT_CheckAssumptions(const IntervalTree *);
#define ITMax(a, b) ( (a > b) ? a : b )
IntervalTreeNode *
ITN_create(long low, long high, void *data)
IntervalTree *
IT_create(void)
static void
LeftRotate(IntervalTree *it, IntervalTreeNode *x)
static void
RightRotate(IntervalTree *it, IntervalTreeNode *y)
static void
TreeInsertHelp(IntervalTree *it, IntervalTreeNode *z)
static void
FixUpMaxHigh(IntervalTree *it, IntervalTreeNode *x)
IntervalTreeNode *
IT_insert(IntervalTree *it, long low, long high, void *data)
IntervalTreeNode *
IT_get_successor(const IntervalTree *it, IntervalTreeNode *x)
IntervalTreeNode *
IT_get_predecessor(const IntervalTree *it, IntervalTreeNode *x)
static void
ITN_print(const IntervalTreeNode *itn, IntervalTreeNode *nil,
IntervalTreeNode *root)
static void
TreePrintHelper(const IntervalTree *it, IntervalTreeNode *x)
void
IT_destroy(IntervalTree *it)
void
IT_print(const IntervalTree *it)
static void
DeleteFixUp(IntervalTree *it, IntervalTreeNode *x)
void *
IT_delete_node(IntervalTree *it, IntervalTreeNode *z, long *low, long *high)
static int
Overlap(int a1, int a2, int b1, int b2)
void
IT_enumerate(IntervalTree *it, long low, long high, void *cbd,
void (*callback) (IntervalTreeNode *node, void *cbd))
static int
CheckMaxHighFieldsHelper(const IntervalTree *it, IntervalTreeNode *y,
int currentHigh, int match)
static void
CheckMaxHighFields(const IntervalTree *it, IntervalTreeNode *x)
static void
IT_CheckAssumptions(const IntervalTree *it)
