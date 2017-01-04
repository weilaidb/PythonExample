package com.sleepycat.je.serializecompatibility;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InvalidClassException;
import java.io.ObjectInputStream;
import java.util.Map;
import org.junit.Test;
import com.sleepycat.je.JEVersion;
import com.sleepycat.util.test.TestBase;
public class SerializeReadObjectsTest extends TestBase
