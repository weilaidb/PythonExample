package org.apache.hadoop.fs;
import java.io.IOException;
import java.util.Set;
import org.junit.Assert;
import org.apache.hadoop.util.ShutdownHookManager;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.fs.FileContextTestHelper.*;
public class TestFileContextDeleteOnExit
