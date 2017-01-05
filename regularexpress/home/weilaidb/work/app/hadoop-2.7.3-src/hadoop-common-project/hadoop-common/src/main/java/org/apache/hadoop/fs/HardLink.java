package org.apache.hadoop.fs;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.StringReader;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.Shell;
import org.apache.hadoop.util.Shell.ExitCodeException;
import org.apache.hadoop.util.Shell.ShellCommandExecutor;
import com.google.common.annotations.VisibleForTesting;
import static java.nio.file.Files.createLink;
public class HardLink
