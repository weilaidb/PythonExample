package org.apache.hadoop.fs;
import java.io.FileNotFoundException;
import java.io.IOException;
import junit.framework.TestCase;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.FsPermission;
public abstract class FileSystemContractBaseTest extends TestCase
