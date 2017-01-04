package com.sleepycat.je.utilint;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import static org.junit.Assume.assumeThat;
import static org.hamcrest.core.IsNull.nullValue;
import java.io.File;
import java.io.IOException;
import java.util.logging.Logger;
import org.junit.Test;
import com.sleepycat.je.utilint.LoggerUtils;
public class FileStoreInfoTest
