package org.apache.hadoop.fs.azure;
import static org.junit.Assert.assertEquals;
import java.io.File;
import org.apache.commons.io.FileUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.Shell;
import org.junit.Assert;
import org.junit.Test;
public class TestShellDecryptionKeyProvider
