static BOOL PyHKEY_AsHKEY(PyObject *ob, HKEY *pRes, BOOL bNoneOK);
static PyObject *PyHKEY_FromHKEY(HKEY h);
static BOOL PyHKEY_Close(PyObject *obHandle);
static char errNotAHandle[] = "Object is not a handle";
#define PyErr_SetFromWindowsErrWithFunction(rc, fnname) \
PyErr_SetFromWindowsErr(rc)
PyDoc_STRVAR(module_doc,
"This module provides access to the Windows registry API.\n"
"\n"
"Functions:\n"
"\n"
"CloseKey() - Closes a registry key.\n"
"ConnectRegistry() - Establishes a connection to a predefined registry handle\n"
"                    on another computer.\n"
"CreateKey() - Creates the specified key, or opens it if it already exists.\n"
"DeleteKey() - Deletes the specified key.\n"
"DeleteValue() - Removes a named value from the specified registry key.\n"
"EnumKey() - Enumerates subkeys of the specified open registry key.\n"
"EnumValue() - Enumerates values of the specified open registry key.\n"
"ExpandEnvironmentStrings() - Expand the env strings in a REG_EXPAND_SZ string.\n"
"FlushKey() - Writes all the attributes of the specified key to the registry.\n"
"LoadKey() - Creates a subkey under HKEY_USER or HKEY_LOCAL_MACHINE and stores\n"
"            registration information from a specified file into that subkey.\n"
"OpenKey() - Alias for <om win32api.RegOpenKeyEx>\n"
"OpenKeyEx() - Opens the specified key.\n"
"QueryValue() - Retrieves the value associated with the unnamed value for a\n"
"               specified key in the registry.\n"
"QueryValueEx() - Retrieves the type and data for a specified value name\n"
"                 associated with an open registry key.\n"
"QueryInfoKey() - Returns information about the specified key.\n"
"SaveKey() - Saves the specified key, and all its subkeys a file.\n"
"SetValue() - Associates a value with a specified key.\n"
"SetValueEx() - Stores data in the value field of an open registry key.\n"
"\n"
"Special objects:\n"
"\n"
"HKEYType -- type object for HKEY objects\n"
"error -- exception raised for Win32 errors\n"
"\n"
"Integer constants:\n"
"Many constants are defined - see the documentation for each function\n"
"to see what constants are used, and where.");
PyDoc_STRVAR(CloseKey_doc,
"CloseKey(hkey) - Closes a previously opened registry key.\n"
"\n"
"The hkey argument specifies a previously opened key.\n"
"\n"
"Note that if the key is not closed using this method, it will be\n"
"closed when the hkey object is destroyed by Python.");
PyDoc_STRVAR(ConnectRegistry_doc,
"key = ConnectRegistry(computer_name, key) - "
"Establishes a connection to a predefined registry handle on another computer.\n"
"\n"
"computer_name is the name of the remote computer, of the form \\\\computername.\n"
" If None, the local computer is used.\n"
"key is the predefined handle to connect to.\n"
"\n"
"The return value is the handle of the opened key.\n"
"If the function fails, a WindowsError exception is raised.");
PyDoc_STRVAR(CreateKey_doc,
"key = CreateKey(key, sub_key) - Creates or opens the specified key.\n"
"\n"
"key is an already open key, or one of the predefined HKEY_* constants\n"
"sub_key is a string that names the key this method opens or creates.\n"
" If key is one of the predefined keys, sub_key may be None. In that case,\n"
" the handle returned is the same key handle passed in to the function.\n"
"\n"
"If the key already exists, this function opens the existing key\n"
"\n"
"The return value is the handle of the opened key.\n"
"If the function fails, an exception is raised.");
PyDoc_STRVAR(CreateKeyEx_doc,
"key = CreateKeyEx(key, sub_key, res, sam) - Creates or opens the specified key.\n"
"\n"
"key is an already open key, or one of the predefined HKEY_* constants\n"
"sub_key is a string that names the key this method opens or creates.\n"
"res is a reserved integer, and must be zero.  Default is zero.\n"
"sam is an integer that specifies an access mask that describes the desired\n"
" If key is one of the predefined keys, sub_key may be None. In that case,\n"
" the handle returned is the same key handle passed in to the function.\n"
"\n"
"If the key already exists, this function opens the existing key\n"
"\n"
"The return value is the handle of the opened key.\n"
"If the function fails, an exception is raised.");
PyDoc_STRVAR(DeleteKey_doc,
"DeleteKey(key, sub_key) - Deletes the specified key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that must be a subkey of the key identified by the key parameter.\n"
" This value must not be None, and the key may not have subkeys.\n"
"\n"
"This method can not delete keys with subkeys.\n"
"\n"
"If the method succeeds, the entire key, including all of its values,\n"
"is removed.  If the method fails, a WindowsError exception is raised.");
PyDoc_STRVAR(DeleteKeyEx_doc,
"DeleteKeyEx(key, sub_key, sam, res) - Deletes the specified key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that must be a subkey of the key identified by the key parameter.\n"
"res is a reserved integer, and must be zero.  Default is zero.\n"
"sam is an integer that specifies an access mask that describes the desired\n"
" This value must not be None, and the key may not have subkeys.\n"
"\n"
"This method can not delete keys with subkeys.\n"
"\n"
"If the method succeeds, the entire key, including all of its values,\n"
"is removed.  If the method fails, a WindowsError exception is raised.\n"
"On unsupported Windows versions, NotImplementedError is raised.");
PyDoc_STRVAR(DeleteValue_doc,
"DeleteValue(key, value) - Removes a named value from a registry key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"value is a string that identifies the value to remove.");
PyDoc_STRVAR(EnumKey_doc,
"string = EnumKey(key, index) - Enumerates subkeys of an open registry key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"index is an integer that identifies the index of the key to retrieve.\n"
"\n"
"The function retrieves the name of one subkey each time it is called.\n"
"It is typically called repeatedly until a WindowsError exception is\n"
"raised, indicating no more values are available.");
PyDoc_STRVAR(EnumValue_doc,
"tuple = EnumValue(key, index) - Enumerates values of an open registry key.\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"index is an integer that identifies the index of the value to retrieve.\n"
"\n"
"The function retrieves the name of one subkey each time it is called.\n"
"It is typically called repeatedly, until a WindowsError exception\n"
"is raised, indicating no more values.\n"
"\n"
"The result is a tuple of 3 items:\n"
"value_name is a string that identifies the value.\n"
"value_data is an object that holds the value data, and whose type depends\n"
" on the underlying registry type.\n"
"data_type is an integer that identifies the type of the value data.");
PyDoc_STRVAR(ExpandEnvironmentStrings_doc,
"string = ExpandEnvironmentStrings(string) - Expand environment vars.\n");
PyDoc_STRVAR(FlushKey_doc,
"FlushKey(key) - Writes all the attributes of a key to the registry.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"\n"
"It is not necessary to call RegFlushKey to change a key.\n"
"Registry changes are flushed to disk by the registry using its lazy flusher.\n"
"Registry changes are also flushed to disk at system shutdown.\n"
"Unlike CloseKey(), the FlushKey() method returns only when all the data has\n"
"been written to the registry.\n"
"An application should only call FlushKey() if it requires absolute certainty that registry changes are on disk.\n"
"If you don't know whether a FlushKey() call is required, it probably isn't.");
PyDoc_STRVAR(LoadKey_doc,
"LoadKey(key, sub_key, file_name) - Creates a subkey under the specified key\n"
"and stores registration information from a specified file into that subkey.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that identifies the sub_key to load\n"
"file_name is the name of the file to load registry data from.\n"
" This file must have been created with the SaveKey() function.\n"
" Under the file allocation table (FAT) file system, the filename may not\n"
"have an extension.\n"
"\n"
"A call to LoadKey() fails if the calling process does not have the\n"
"SE_RESTORE_PRIVILEGE privilege.\n"
"\n"
"If key is a handle returned by ConnectRegistry(), then the path specified\n"
"in fileName is relative to the remote computer.\n"
"\n"
"The docs imply key must be in the HKEY_USER or HKEY_LOCAL_MACHINE tree");
PyDoc_STRVAR(OpenKey_doc,
"key = OpenKey(key, sub_key, res = 0, sam = KEY_READ) - Opens the specified key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that identifies the sub_key to open\n"
"res is a reserved integer, and must be zero.  Default is zero.\n"
"sam is an integer that specifies an access mask that describes the desired\n"
" security access for the key.  Default is KEY_READ\n"
"\n"
"The result is a new handle to the specified key\n"
"If the function fails, a WindowsError exception is raised.");
PyDoc_STRVAR(OpenKeyEx_doc, "See OpenKey()");
PyDoc_STRVAR(QueryInfoKey_doc,
"tuple = QueryInfoKey(key) - Returns information about a key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"\n"
"The result is a tuple of 3 items:"
"An integer that identifies the number of sub keys this key has.\n"
"An integer that identifies the number of values this key has.\n"
"A long integer that identifies when the key was last modified (if available)\n"
" as 100's of nanoseconds since Jan 1, 1600.");
PyDoc_STRVAR(QueryValue_doc,
"string = QueryValue(key, sub_key) - retrieves the unnamed value for a key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that holds the name of the subkey with which the value\n"
" is associated.  If this parameter is None or empty, the function retrieves\n"
" the value set by the SetValue() method for the key identified by key."
"\n"
"Values in the registry have name, type, and data components. This method\n"
"retrieves the data for a key's first value that has a NULL name.\n"
"But the underlying API call doesn't return the type, Lame Lame Lame, DONT USE THIS!!!");
PyDoc_STRVAR(QueryValueEx_doc,
"value,type_id = QueryValueEx(key, value_name) - Retrieves the type and data for a specified value name associated with an open registry key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"value_name is a string indicating the value to query");
PyDoc_STRVAR(SaveKey_doc,
"SaveKey(key, file_name) - Saves the specified key, and all its subkeys to the specified file.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"file_name is the name of the file to save registry data to.\n"
" This file cannot already exist. If this filename includes an extension,\n"
" it cannot be used on file allocation table (FAT) file systems by the\n"
" LoadKey(), ReplaceKey() or RestoreKey() methods.\n"
"\n"
"If key represents a key on a remote computer, the path described by\n"
"file_name is relative to the remote computer.\n"
"The caller of this method must possess the SeBackupPrivilege security privilege.\n"
"This function passes NULL for security_attributes to the API.");
PyDoc_STRVAR(SetValue_doc,
"SetValue(key, sub_key, type, value) - Associates a value with a specified key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"sub_key is a string that names the subkey with which the value is associated.\n"
"type is an integer that specifies the type of the data.  Currently this\n"
" must be REG_SZ, meaning only strings are supported.\n"
"value is a string that specifies the new value.\n"
"\n"
"If the key specified by the sub_key parameter does not exist, the SetValue\n"
"function creates it.\n"
"\n"
"Value lengths are limited by available memory. Long values (more than\n"
"2048 bytes) should be stored as files with the filenames stored in \n"
"the configuration registry.  This helps the registry perform efficiently.\n"
"\n"
"The key identified by the key parameter must have been opened with\n"
"KEY_SET_VALUE access.");
PyDoc_STRVAR(SetValueEx_doc,
"SetValueEx(key, value_name, reserved, type, value) - Stores data in the value field of an open registry key.\n"
"\n"
"key is an already open key, or any one of the predefined HKEY_* constants.\n"
"value_name is a string containing the name of the value to set, or None\n"
"type is an integer that specifies the type of the data.  This should be one of:\n"
"  REG_BINARY -- Binary data in any form.\n"
"  REG_DWORD -- A 32-bit number.\n"
"  REG_DWORD_LITTLE_ENDIAN -- A 32-bit number in little-endian format.\n"
"  REG_DWORD_BIG_ENDIAN -- A 32-bit number in big-endian format.\n"
"  REG_EXPAND_SZ -- A null-terminated string that contains unexpanded references\n"
"                   to environment variables (for example, %PATH%).\n"
"  REG_LINK -- A Unicode symbolic link.\n"
"  REG_MULTI_SZ -- A sequence of null-terminated strings, terminated by\n"
"                  two null characters.  Note that Python handles this\n"
"                  termination automatically.\n"
"  REG_NONE -- No defined value type.\n"
"  REG_RESOURCE_LIST -- A device-driver resource list.\n"
"  REG_SZ -- A null-terminated string.\n"
"reserved can be anything - zero is always passed to the API.\n"
"value is a string that specifies the new value.\n"
"\n"
"This method can also set additional value and type information for the\n"
"specified key.  The key identified by the key parameter must have been\n"
"opened with KEY_SET_VALUE access.\n"
"\n"
"To open the key, use the CreateKeyEx() or OpenKeyEx() methods.\n"
"\n"
"Value lengths are limited by available memory. Long values (more than\n"
"2048 bytes) should be stored as files with the filenames stored in \n"
"the configuration registry.  This helps the registry perform efficiently.");
PyDoc_STRVAR(DisableReflectionKey_doc,
"Disables registry reflection for 32-bit processes running on a 64-bit\n"
"Operating System.  Will generally raise NotImplemented if executed on\n"
"a 32-bit Operating System.\n"
"If the key is not on the reflection list, the function succeeds but has no effect.\n"
"Disabling reflection for a key does not affect reflection of any subkeys.");
PyDoc_STRVAR(EnableReflectionKey_doc,
"Restores registry reflection for the specified disabled key.\n"
"Will generally raise NotImplemented if executed on a 32-bit Operating System.\n"
"Restoring reflection for a key does not affect reflection of any subkeys.");
PyDoc_STRVAR(QueryReflectionKey_doc,
"bool = QueryReflectionKey(hkey) - Determines the reflection state for the specified key.\n"
"Will generally raise NotImplemented if executed on a 32-bit Operating System.\n");
PyDoc_STRVAR(PyHKEY_doc,
"PyHKEY Object - A Python object, representing a win32 registry key.\n"
"\n"
"This object wraps a Windows HKEY object, automatically closing it when\n"
"the object is destroyed.  To guarantee cleanup, you can call either\n"
"the Close() method on the PyHKEY, or the CloseKey() method.\n"
"\n"
"All functions which accept a handle object also accept an integer - \n"
"however, use of the handle object is encouraged.\n"
"\n"
"Functions:\n"
"Close() - Closes the underlying handle.\n"
"Detach() - Returns the integer Win32 handle, detaching it from the object\n"
"\n"
"Properties:\n"
"handle - The integer Win32 handle.\n"
"\n"
"Operations:\n"
"__nonzero__ - Handles with an open object return true, otherwise false.\n"
"__int__ - Converting a handle to an integer returns the Win32 handle.\n"
"__cmp__ - Handle objects are compared using the handle value.");
PyDoc_STRVAR(PyHKEY_Close_doc,
"key.Close() - Closes the underlying Windows handle.\n"
"\n"
"If the handle is already closed, no error is raised.");
PyDoc_STRVAR(PyHKEY_Detach_doc,
"int = key.Detach() - Detaches the Windows handle from the handle object.\n"
"\n"
"The result is the value of the handle before it is detached.  If the\n"
"handle is already detached, this will return zero.\n"
"\n"
"After calling this function, the handle is effectively invalidated,\n"
"but the handle is not closed.  You would call this function when you\n"
"need the underlying win32 handle to exist beyond the lifetime of the\n"
"handle object.\n"
"On 64 bit windows, the result of this function is a long integer");
typedef struct  PyHKEYObject;
#define PyHKEY_Check(op) ((op)->ob_type == &PyHKEY_Type)
static char *failMsg = "bad operand type";
static PyObject *
PyHKEY_unaryFailureFunc(PyObject *ob)
static PyObject *
PyHKEY_binaryFailureFunc(PyObject *ob1, PyObject *ob2)
static PyObject *
PyHKEY_ternaryFailureFunc(PyObject *ob1, PyObject *ob2, PyObject *ob3)
static void
PyHKEY_deallocFunc(PyObject *ob)
static int
PyHKEY_nonzeroFunc(PyObject *ob)
static PyObject *
PyHKEY_intFunc(PyObject *ob)
static int
PyHKEY_printFunc(PyObject *ob, FILE *fp, int flags)
static PyObject *
PyHKEY_strFunc(PyObject *ob)
static int
PyHKEY_compareFunc(PyObject *ob1, PyObject *ob2)
static long
PyHKEY_hashFunc(PyObject *ob)
static PyNumberMethods PyHKEY_NumberMethods =
;
static PyObject *PyHKEY_CloseMethod(PyObject *self, PyObject *args);
static PyObject *PyHKEY_DetachMethod(PyObject *self, PyObject *args);
static PyObject *PyHKEY_Enter(PyObject *self);
static PyObject *PyHKEY_Exit(PyObject *self, PyObject *args);
static struct PyMethodDef PyHKEY_methods[] = ;
static PyMemberDef PyHKEY_memberlist[] = ;
PyTypeObject PyHKEY_Type =
;
static PyObject *
PyHKEY_CloseMethod(PyObject *self, PyObject *args)
static PyObject *
PyHKEY_DetachMethod(PyObject *self, PyObject *args)
static PyObject *
PyHKEY_Enter(PyObject *self)
static PyObject *
PyHKEY_Exit(PyObject *self, PyObject *args)
PyObject *
PyHKEY_New(HKEY hInit)
BOOL
PyHKEY_Close(PyObject *ob_handle)
BOOL
PyHKEY_AsHKEY(PyObject *ob, HKEY *pHANDLE, BOOL bNoneOK)
PyObject *
PyHKEY_FromHKEY(HKEY h)
BOOL
PyWinObject_CloseHKEY(PyObject *obHandle)
static void
fixupMultiSZ(char **str, char *data, int len)
static int
countStrings(char *data, int len)
static BOOL
Py2Reg(PyObject *value, DWORD typ, BYTE **retDataBuf, DWORD *retDataSize)
static PyObject *
Reg2Py(char *retDataBuf, DWORD retDataSize, DWORD typ)
static PyObject *
PyCloseKey(PyObject *self, PyObject *args)
static PyObject *
PyConnectRegistry(PyObject *self, PyObject *args)
static PyObject *
PyCreateKey(PyObject *self, PyObject *args)
static PyObject *
PyCreateKeyEx(PyObject *self, PyObject *args)
static PyObject *
PyDeleteKey(PyObject *self, PyObject *args)
static PyObject *
PyDeleteKeyEx(PyObject *self, PyObject *args)
static PyObject *
PyDeleteValue(PyObject *self, PyObject *args)
static PyObject *
PyEnumKey(PyObject *self, PyObject *args)
static PyObject *
PyEnumValue(PyObject *self, PyObject *args)
static PyObject *
PyExpandEnvironmentStrings(PyObject *self, PyObject *args)
static PyObject *
PyFlushKey(PyObject *self, PyObject *args)
static PyObject *
PyLoadKey(PyObject *self, PyObject *args)
static PyObject *
PyOpenKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryInfoKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryValue(PyObject *self, PyObject *args)
static PyObject *
PyQueryValueEx(PyObject *self, PyObject *args)
static PyObject *
PySaveKey(PyObject *self, PyObject *args)
static PyObject *
PySetValue(PyObject *self, PyObject *args)
static PyObject *
PySetValueEx(PyObject *self, PyObject *args)
static PyObject *
PyDisableReflectionKey(PyObject *self, PyObject *args)
static PyObject *
PyEnableReflectionKey(PyObject *self, PyObject *args)
static PyObject *
PyQueryReflectionKey(PyObject *self, PyObject *args)
static struct PyMethodDef winreg_methods[] = ;
static void
insint(PyObject * d, char * name, long value)
#define ADD_INT(val) insint(d, #val, val)
static void
inskey(PyObject * d, char * name, HKEY key)
#define ADD_KEY(val) inskey(d, #val, val)
PyMODINIT_FUNC init_winreg(void)
