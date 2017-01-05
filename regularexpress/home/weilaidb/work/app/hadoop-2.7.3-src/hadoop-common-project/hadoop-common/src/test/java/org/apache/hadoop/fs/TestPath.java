package org.apache.hadoop.fs;
import org.junit.Test;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.Arrays;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.AvroTestUtil;
import org.apache.hadoop.util.Shell;
import com.google.common.base.Joiner;
import junit.framework.TestCase;
public class TestPath extends TestCase
