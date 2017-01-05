package org.apache.hadoop.util;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.jar.JarOutputStream;
import java.util.zip.ZipEntry;
import org.apache.hadoop.fs.Path;
import org.junit.Assert;
import org.junit.Test;
public class TestMRCJCRunJar
