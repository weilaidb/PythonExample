extern TestSuite g_suites[];
int RunAllSuites(void)
int RunSuite(const char * suite)
int RunTest(const char * suite, const char *test)
char* CuStrAlloc(int size)
char* CuStrCopy(const char* old)
void CuStringInit(CuString* str)
CuString* CuStringNew(void)
void CuStringDelete(CuString *str)
int CuStringResize(CuString* str, int newSize)
int CuStringAppend(CuString* str, const char* text, int dump)
int CuStringAppendChar(CuString* str, char ch, int dump)
int CuStringAppendFormat(CuString* str, int dump, const char* format, ...)
int CuStringInsert(CuString* str, const char* text, int pos, int dump)
void CuTestInit(CuTest* t, const char* name, TestFunction function, TestSetupFunction setup, TestTeardownFunction teardown)
CuTest* CuTestNew(const char* name, TestFunction function, TestSetupFunction setup, TestTeardownFunction teardown)
void CuTestDelete(CuTest *t)
void CuTestRun(CuTest* tc)
static void CuFailInternal(CuTest* tc, const char* file, int line, CuString* string)
void CuFail_Line(CuTest* tc, const char* file, int line, const char* message2, const char* message)
void CuAssert_Line(CuTest* tc, const char* file, int line, const char* message, int condition)
void CuAssertStrEquals_LineMsg(CuTest* tc, const char* file, int line, const char* message,
const char* expected, const char* actual)
void CuAssertIntEquals_LineMsg(CuTest* tc, const char* file, int line, const char* message,
int expected, int actual)
void CuAssertDblEquals_LineMsg(CuTest* tc, const char* file, int line, const char* message,
double expected, double actual, double delta)
void CuAssertPtrEquals_LineMsg(CuTest* tc, const char* file, int line, const char* message,
void* expected, void* actual)
void CuSuiteInit(CuSuite* testSuite, const char *name,
SuiteSetupFunction setup, SuiteTeardownFunction teardown)
CuSuite* CuSuiteNew(const char *name,
SuiteSetupFunction setup, SuiteTeardownFunction teardown)
void CuSuiteDelete(CuSuite *testSuite)
void CuSuiteAdd(CuSuite* testSuite, CuTest *testCase)
void CuSuiteAddSuite(CuSuite* testSuite, CuSuite* testSuite2)
void CuSuiteRun(CuSuite* testSuite)
void CuSuiteSummary(CuSuite* testSuite, CuString* summary)
void CuSuiteDetails(CuSuite* testSuite, CuString* details)
