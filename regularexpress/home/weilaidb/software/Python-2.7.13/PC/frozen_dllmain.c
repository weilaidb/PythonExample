static char *possibleModules[] = ;
BOOL CallModuleDllMain(char *modName, DWORD dwReason);
void PyWinFreeze_ExeInit(void)
void PyWinFreeze_ExeTerm(void)
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
BOOL CallModuleDllMain(char *modName, DWORD dwReason)
