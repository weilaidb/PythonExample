package com.sleepycat.bind.serial;
import java.io.IOException;
import java.io.InputStream;
import java.io.ObjectInputStream;
import java.io.ObjectStreamClass;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.util.ClassResolver;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class SerialInput extends ClassResolver.Stream
