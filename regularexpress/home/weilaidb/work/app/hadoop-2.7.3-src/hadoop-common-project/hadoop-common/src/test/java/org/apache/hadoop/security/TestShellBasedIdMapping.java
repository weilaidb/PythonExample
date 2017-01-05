package org.apache.hadoop.security;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assume.assumeTrue;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.security.ShellBasedIdMapping.PassThroughMap;
import org.apache.hadoop.security.ShellBasedIdMapping.StaticMapping;
import org.junit.Test;
import com.google.common.collect.BiMap;
import com.google.common.collect.HashBiMap;
public class TestShellBasedIdMapping
