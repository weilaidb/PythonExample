package org.apache.hadoop.fs.slive;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.OutputStream;
import java.util.List;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.slive.DataWriter.GenerateOutput;
import org.apache.hadoop.fs.slive.OperationOutput.OutputType;
class AppendOp extends Operation
