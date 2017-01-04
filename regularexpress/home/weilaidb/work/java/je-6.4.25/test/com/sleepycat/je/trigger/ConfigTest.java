package com.sleepycat.je.trigger;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.fail;
import java.util.Arrays;
import org.junit.Test;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.SecondaryConfig;
import com.sleepycat.je.rep.dual.trigger.InvokeTest;
public class ConfigTest extends TestBase
