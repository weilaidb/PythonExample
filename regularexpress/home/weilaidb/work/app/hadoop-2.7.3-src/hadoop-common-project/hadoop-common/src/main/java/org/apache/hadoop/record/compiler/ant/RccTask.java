package org.apache.hadoop.record.compiler.ant;
import java.io.File;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.record.compiler.generated.Rcc;
import org.apache.tools.ant.BuildException;
import org.apache.tools.ant.DirectoryScanner;
import org.apache.tools.ant.Project;
import org.apache.tools.ant.Task;
import org.apache.tools.ant.types.FileSet;
@Deprecated
@InterfaceAudience.Public
@InterfaceStability.Stable
public class RccTask extends Task
