package org.apache.hadoop.fs;
import java.io.*;
import java.util.ArrayList;
import java.util.regex.Pattern;
import org.junit.Assert;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.util.Shell;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.fs.FileContextTestHelper.*;
public abstract class FileContextURIBase
