package com.sleepycat.bind.serial;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.ObjectStreamClass;
import java.io.ObjectStreamConstants;
import java.io.OutputStream;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class SerialOutput extends ObjectOutputStream
