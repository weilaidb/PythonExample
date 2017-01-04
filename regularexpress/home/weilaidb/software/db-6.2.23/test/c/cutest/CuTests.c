extern int TestCallbackSetterAndGetterSuiteSetup(CuSuite *suite);
extern int TestCallbackSetterAndGetterSuiteTeardown(CuSuite *suite);
extern int TestCallbackSetterAndGetterTestSetup(CuTest *ct);
extern int TestCallbackSetterAndGetterTestTeardown(CuTest *ct);
extern int TestEnvCallbacks(CuTest *ct);
extern int TestDbCallbacks(CuTest *ct);
extern int TestChannelSuiteSetup(CuSuite *suite);
extern int TestChannelSuiteTeardown(CuSuite *suite);
extern int TestChannelTestSetup(CuTest *test);
extern int TestChannelTestTeardown(CuTest *test);
extern int TestChannelFeature(CuTest *ct);
extern int TestDbHotBackupSuiteSetup(CuSuite *suite);
extern int TestDbHotBackupSuiteTeardown(CuSuite *suite);
extern int TestDbHotBackupTestSetup(CuTest *ct);
extern int TestDbHotBackupTestTeardown(CuTest *ct);
extern int TestBackupSimpleEnvNoCallback(CuTest *ct);
extern int TestBackupSimpleEnvWithCallback(CuTest *ct);
extern int TestBackupSimpleEnvWithConfig(CuTest *ct);
extern int TestBackupPartitionDB(CuTest *ct);
extern int TestBackupMultiDataDir(CuTest *ct);
extern int TestBackupSetLogDir(CuTest *ct);
extern int TestBackupQueueDB(CuTest *ct);
extern int TestBackupHeapDB(CuTest *ct);
extern int TestDbTuner(CuTest *ct);
extern int TestNoEncryptedDb(CuTest *ct);
extern int TestEncryptedDbFlag(CuTest *ct);
extern int TestEncryptedDb(CuTest *ct);
extern int TestEncryptedDbFlagAndDb(CuTest *ct);
extern int TestEnvWithNoEncryption(CuTest *ct);
extern int TestEnvWithEncryptedDbFlag(CuTest *ct);
extern int TestEnvWithEncryptedDb(CuTest *ct);
extern int TestEnvWithEncryptedDbFlagAndDb(CuTest *ct);
extern int TestEncyptedEnv(CuTest *ct);
extern int TestEncyptedEnvWithEncyptedDbFlag(CuTest *ct);
extern int TestEncyptedEnvWithEncyptedDb(CuTest *ct);
extern int TestEncyptedEnvWithEncryptedDbFlagAndDb(CuTest *ct);
extern int TestEnvConfigSuiteSetup(CuSuite *ct);
extern int TestEnvConfigSuiteTeardown(CuSuite *ct);
extern int TestEnvConfigTestSetup(CuTest *ct);
extern int TestEnvConfigTestTeardown(CuTest *ct);
extern int TestSetTxMax(CuTest *ct);
extern int TestSetLogMax(CuTest *ct);
extern int TestSetLogBufferSize(CuTest *ct);
extern int TestSetLogRegionSize(CuTest *ct);
extern int TestGetLockConflicts(CuTest *ct);
extern int TestSetLockDetect(CuTest *ct);
extern int TestLockMaxLocks(CuTest *ct);
extern int TestLockMaxLockers(CuTest *ct);
extern int TestSetLockMaxObjects(CuTest *ct);
extern int TestSetLockTimeout(CuTest *ct);
extern int TestSetTransactionTimeout(CuTest *ct);
extern int TestSetCachesize(CuTest *ct);
extern int TestSetThreadCount(CuTest *ct);
extern int TestKeyExistErrorReturn(CuTest *ct);
extern int TestMutexAlignment(CuTest *ct);
extern int TestPartialSuiteSetup(CuSuite *ct);
extern int TestPartialSuiteTeardown(CuSuite *ct);
extern int TestPartialTestSetup(CuTest *ct);
extern int TestPartialTestTeardown(CuTest *ct);
extern int TestDbPartialGet(CuTest *ct);
extern int TestDbPartialPGet(CuTest *ct);
extern int TestCursorPartialGet(CuTest *ct);
extern int TestCursorPartialPGet(CuTest *ct);
extern int TestPartitionSuiteSetup(CuSuite *suite);
extern int TestPartitionSuiteTeardown(CuSuite *suite);
extern int TestPartitionTestSetup(CuTest *ct);
extern int TestPartitionTestTeardown(CuTest *ct);
extern int TestPartOneKeyNoData(CuTest *ct);
extern int TestPartTwoKeyNoData(CuTest *ct);
extern int TestPartDuplicatedKey(CuTest *ct);
extern int TestPartUnsortedKey(CuTest *ct);
extern int TestPartNumber(CuTest *ct);
extern int TestPartKeyCallBothSet(CuTest *ct);
extern int TestPartKeyCallNeitherSet(CuTest *ct);
extern int TestPreOpenSetterAndGetterSuiteSetup(CuSuite *suite);
extern int TestPreOpenSetterAndGetterSuiteTeardown(CuSuite *suite);
extern int TestPreOpenSetterAndGetterTestSetup(CuTest *ct);
extern int TestPreOpenSetterAndGetterTestTeardown(CuTest *ct);
extern int TestEnvPreOpenSetterAndGetter(CuTest *ct);
extern int TestDbPreOpenSetterAndGetter(CuTest *ct);
extern int TestMpoolFilePreOpenSetterAndGetter(CuTest *ct);
extern int TestSequencePreOpenSetterAndGetter(CuTest *ct);
extern int TestQueue(CuTest *ct);
int RunCallbackSetterAndGetterTests(CuString *output)
int RunChannelTests(CuString *output)
int RunDbHotBackupTests(CuString *output)
int RunDbTunerTests(CuString *output)
int RunEncryptionTests(CuString *output)
int RunEnvConfigTests(CuString *output)
int RunEnvMethodTests(CuString *output)
int RunKeyExistErrorReturnTests(CuString *output)
int RunMutexAlignmentTests(CuString *output)
int RunPartialTests(CuString *output)
int RunPartitionTests(CuString *output)
int RunPreOpenSetterAndGetterTests(CuString *output)
int RunQueueTests(CuString *output)
TestSuite g_suites[] = ;
