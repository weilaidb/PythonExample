package com.sleepycat.je.latch;
import static com.sleepycat.je.EnvironmentFailureException.unexpectedState;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.DatabaseUtil;
import com.sleepycat.je.utilint.LoggerUtils;
public class LatchSupport
