package org.apache.hadoop.fs;
import static org.junit.Assert.*;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.apache.hadoop.fs.shell.CommandFormat;
import org.apache.hadoop.fs.shell.CommandFormat.NotEnoughArgumentsException;
import org.apache.hadoop.fs.shell.CommandFormat.TooManyArgumentsException;
import org.apache.hadoop.fs.shell.CommandFormat.UnknownOptionException;
import org.junit.Before;
import org.junit.Test;
public class TestCommandFormat
