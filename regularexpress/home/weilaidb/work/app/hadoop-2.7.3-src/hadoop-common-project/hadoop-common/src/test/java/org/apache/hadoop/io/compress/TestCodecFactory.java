package org.apache.hadoop.io.compress;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.*;
import junit.framework.TestCase;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.conf.Configuration;
public class TestCodecFactory extends TestCase
