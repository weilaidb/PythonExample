package org.apache.hadoop.util;
import static org.junit.Assert.*;
import static org.junit.Assume.*;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collection;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ChecksumException;
import org.junit.Before;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.ExpectedException;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
@RunWith(Parameterized.class)
public class TestNativeCrc32
