package org.apache.hadoop.maven.plugin.protoc;
import org.apache.hadoop.maven.plugin.util.Exec;
import org.apache.hadoop.maven.plugin.util.FileSetUtils;
import org.apache.maven.model.FileSet;
import org.apache.maven.plugin.AbstractMojo;
import org.apache.maven.plugin.MojoExecutionException;
import org.apache.maven.plugins.annotations.LifecyclePhase;
import org.apache.maven.plugins.annotations.Mojo;
import org.apache.maven.plugins.annotations.Parameter;
import org.apache.maven.project.MavenProject;
import java.io.File;
import java.util.ArrayList;
import java.util.List;
@Mojo(name="protoc", defaultPhase = LifecyclePhase.GENERATE_SOURCES)
public class ProtocMojo extends AbstractMojo
