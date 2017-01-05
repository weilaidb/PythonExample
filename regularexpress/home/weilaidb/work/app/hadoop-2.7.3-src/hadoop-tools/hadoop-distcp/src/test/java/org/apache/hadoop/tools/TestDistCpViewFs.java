package org.apache.hadoop.tools;
import org.apache.commons.logging.Log;
import org.apache.hadoop.fs.viewfs.*;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.tools.util.TestDistCpUtils;
import org.apache.hadoop.fs.FsConstants;
import org.junit.Assert;
import org.junit.BeforeClass;
import org.junit.Test;
import java.io.IOException;
import java.io.OutputStream;
import java.net.URI;
import java.net.URISyntaxException;
public class TestDistCpViewFs
