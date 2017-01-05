package org.apache.hadoop.fs;
import java.io.IOException;
import org.apache.hadoop.util.StringUtils;
import org.apache.log4j.Level;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.fs.FileContextTestHelper.*;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.test.GenericTestUtils;
public abstract class FileContextCreateMkdirBaseTest
