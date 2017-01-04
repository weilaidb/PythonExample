package com.sleepycat.je.util;
import java.io.IOException;
import java.io.InputStream;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.LogVerifier;
public class LogVerificationInputStream extends InputStream
