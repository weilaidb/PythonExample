package com.sleepycat.bind.serial.test;
import java.io.ObjectStreamClass;
import java.util.HashMap;
import java.util.Map;
import com.sleepycat.bind.serial.ClassCatalog;
import com.sleepycat.bind.tuple.IntegerBinding;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
public class TestClassCatalog implements ClassCatalog
