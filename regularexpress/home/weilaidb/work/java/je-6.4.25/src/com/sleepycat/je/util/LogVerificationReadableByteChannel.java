package com.sleepycat.je.util;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.nio.channels.ReadableByteChannel;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.utilint.LogVerifier;
public class LogVerificationReadableByteChannel
implements ReadableByteChannel
