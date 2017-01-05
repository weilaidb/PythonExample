package org.apache.hadoop.fs;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.EnumSet;
import org.apache.commons.lang.RandomStringUtils;
import org.apache.hadoop.fs.Options.CreateOpts;
import org.apache.hadoop.fs.Options.CreateOpts.BlockSize;
import org.apache.hadoop.io.IOUtils;
import org.junit.Assert;
public final class FileContextTestHelper
