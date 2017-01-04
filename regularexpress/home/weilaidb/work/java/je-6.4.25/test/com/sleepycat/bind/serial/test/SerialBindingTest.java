package com.sleepycat.bind.serial.test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.Serializable;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.bind.EntityBinding;
import com.sleepycat.bind.serial.ClassCatalog;
import com.sleepycat.bind.serial.SerialBinding;
import com.sleepycat.bind.serial.SerialSerialBinding;
import com.sleepycat.bind.serial.TupleSerialMarshalledBinding;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.util.FastOutputStream;
import com.sleepycat.util.test.TestBase;
public class SerialBindingTest extends TestBase
