package org.apache.hadoop.yarn;
import static org.junit.Assert.assertSame;
import static org.mockito.Mockito.spy;
import static org.mockito.Mockito.verify;
import org.apache.hadoop.util.ExitUtil;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.junit.Test;
public class TestYarnUncaughtExceptionHandler
