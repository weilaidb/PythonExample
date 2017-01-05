package org.apache.hadoop.examples.pi;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import org.apache.hadoop.examples.pi.math.Bellard;
import org.apache.hadoop.examples.pi.math.Bellard.Parameter;
import com.google.common.base.Charsets;
public final class Parser
