#define WINUTILS_PROCESS_STUB_CLASS "org/apache/hadoop/yarn/server/nodemanager/WindowsSecureContainerExecutor$Native$WinutilsProcessStub"
void winutils_process_stub_init(JNIEnv *env);
void winutils_process_stub_deinit(JNIEnv *env);
jobject winutils_process_stub_create(JNIEnv *env,
jlong hProcess, jlong hThread, jlong hStdIn, jlong hStdOut, jlong hStdErr);
