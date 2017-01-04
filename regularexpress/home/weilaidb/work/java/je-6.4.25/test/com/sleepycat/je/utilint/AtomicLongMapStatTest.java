package com.sleepycat.je.utilint;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.util.TreeMap;
import java.util.SortedMap;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.je.utilint.StatDefinition.StatType;
import com.sleepycat.util.test.TestBase;
public class AtomicLongMapStatTest extends TestBase
