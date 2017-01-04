#define CU_TEST_H
#define CUTEST_VERSION  "CuTest 1.6"
char* CuStrAlloc(int size);
char* CuStrCopy(const char* old);
#define CU_ALLOC(TYPE)		((TYPE*) malloc(sizeof(TYPE)))
#define HUGE_STRING_LEN	8192
#define STRING_MAX		256
#define STRING_INC		256
#define CU_FAIL_HEADER "INTERNAL TEST HARNESS FAILURE"
typedef struct
CuString;
void CuStringInit(CuString* str);
CuString* CuStringNew(void);
void CuStringRead(CuString* str, const char* path);
int CuStringAppend(CuString* str, const char* text, int dump);
int CuStringAppendChar(CuString* str, char ch, int dump);
int CuStringAppendFormat(CuString* str, int dump, const char* format, ...);
int CuStringInsert(CuString* str, const char* text, int pos, int dump);
int CuStringResize(CuString* str, int newSize);
void CuStringDelete(CuString* str);
typedef struct CuSuite CuSuite;
typedef struct CuTest CuTest;
typedef int (*TestFunction)(CuTest *);
typedef int (*TestSetupFunction)(CuTest *);
typedef int (*TestTeardownFunction)(CuTest *);
typedef int (*SuiteSetupFunction)(CuSuite *);
typedef int (*SuiteTeardownFunction)(CuSuite *);
struct CuTest
;
void CuTestInit(CuTest* t, const char* name, TestFunction function,
TestSetupFunction setup, TestTeardownFunction teardown);
CuTest* CuTestNew(const char* name, TestFunction function,
TestSetupFunction setup, TestTeardownFunction teardown);
void CuTestRun(CuTest* tc);
void CuTestDelete(CuTest *t);
int TestEnvConfigTestSetup(CuTest *);
int TestEnvConfigTestTeardown(CuTest *);
void CuFail_Line(CuTest* tc, const char* file, int line, const char* message2, const char* message);
void CuAssert_Line(CuTest* tc, const char* file, int line, const char* message, int condition);
void CuAssertStrEquals_LineMsg(CuTest* tc,
const char* file, int line, const char* message,
const char* expected, const char* actual);
void CuAssertIntEquals_LineMsg(CuTest* tc,
const char* file, int line, const char* message,
int expected, int actual);
void CuAssertDblEquals_LineMsg(CuTest* tc,
const char* file, int line, const char* message,
double expected, double actual, double delta);
void CuAssertPtrEquals_LineMsg(CuTest* tc,
const char* file, int line, const char* message,
void* expected, void* actual);
#define CuFail(tc, ms)                        CuFail_Line(  (tc), __FILE__, __LINE__, NULL, (ms))
#define CuAssert(tc, ms, cond)                CuAssert_Line((tc), __FILE__, __LINE__, (ms), (cond))
#define CuAssertTrue(tc, cond)                CuAssert_Line((tc), __FILE__, __LINE__, "assert failed", (cond))
#define CuAssertStrEquals(tc,ex,ac)           CuAssertStrEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
#define CuAssertStrEquals_Msg(tc,ms,ex,ac)    CuAssertStrEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
#define CuAssertIntEquals(tc,ex,ac)           CuAssertIntEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
#define CuAssertIntEquals_Msg(tc,ms,ex,ac)    CuAssertIntEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
#define CuAssertDblEquals(tc,ex,ac,dl)        CuAssertDblEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac),(dl))
#define CuAssertDblEquals_Msg(tc,ms,ex,ac,dl) CuAssertDblEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac),(dl))
#define CuAssertPtrEquals(tc,ex,ac)           CuAssertPtrEquals_LineMsg((tc),__FILE__,__LINE__,NULL,(ex),(ac))
#define CuAssertPtrEquals_Msg(tc,ms,ex,ac)    CuAssertPtrEquals_LineMsg((tc),__FILE__,__LINE__,(ms),(ex),(ac))
#define CuAssertPtrNotNull(tc,p)        CuAssert_Line((tc),__FILE__,__LINE__,"null pointer unexpected",(p != NULL))
#define CuAssertPtrNotNullMsg(tc,msg,p) CuAssert_Line((tc),__FILE__,__LINE__,(msg),(p != NULL))
#define MAX_TEST_CASES	1024
#define SUITE_ADD_TEST(SUITE,TEST,SETUP_FN, TEARDOWN_FN)	\
CuSuiteAdd(SUITE, CuTestNew(#TEST, TEST, SETUP_FN, TEARDOWN_FN))
typedef struct  TestSuite;
struct CuSuite
;
void CuSuiteInit(CuSuite* testSuite, const char *name,
SuiteSetupFunction setup, SuiteTeardownFunction teardown);
CuSuite* CuSuiteNew(const char *name,
SuiteSetupFunction setup, SuiteTeardownFunction teardown);
void CuSuiteDelete(CuSuite *testSuite);
void CuSuiteAdd(CuSuite* testSuite, CuTest *testCase);
void CuSuiteAddSuite(CuSuite* testSuite, CuSuite* testSuite2);
void CuSuiteRun(CuSuite* testSuite);
void CuSuiteSummary(CuSuite* testSuite, CuString* summary);
void CuSuiteDetails(CuSuite* testSuite, CuString* details);
int RunAllSuites();
int RunSuite(const char *suite);
int RunTest(const char *suite, const char *test);
