package com.sleepycat.bind.serial;
import java.io.IOException;
import com.sleepycat.bind.EntryBinding;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.util.FastInputStream;
import com.sleepycat.util.FastOutputStream;
import com.sleepycat.util.RuntimeExceptionWrapper;
public class SerialBinding<E> extends SerialBase implements EntryBinding<E>
