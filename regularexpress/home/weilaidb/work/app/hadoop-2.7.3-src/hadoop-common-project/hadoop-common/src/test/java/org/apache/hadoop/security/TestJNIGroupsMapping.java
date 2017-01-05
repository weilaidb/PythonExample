package org.apache.hadoop.security;
import static org.junit.Assume.assumeTrue;
import static org.junit.Assert.*;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.security.GroupMappingServiceProvider;
import org.apache.hadoop.security.JniBasedUnixGroupsMapping;
import org.apache.hadoop.security.ShellBasedUnixGroupsMapping;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.NativeCodeLoader;
import org.junit.Before;
import org.junit.Test;
public class TestJNIGroupsMapping
