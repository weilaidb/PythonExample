package org.apache.hadoop.fs;
import static org.apache.hadoop.fs.FileContextTestHelper.readFile;
import static org.apache.hadoop.fs.FileContextTestHelper.writeFile;
import static org.junit.Assert.assertTrue;
import java.util.Arrays;
import org.apache.hadoop.util.StringUtils;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public abstract class FileContextUtilBase
