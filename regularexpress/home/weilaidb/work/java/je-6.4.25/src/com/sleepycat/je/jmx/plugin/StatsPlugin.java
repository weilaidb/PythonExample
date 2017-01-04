package com.sleepycat.je.jmx.plugin;
import java.beans.PropertyChangeEvent;
import java.beans.PropertyChangeListener;
import java.util.ArrayList;
import java.util.Map;
import javax.swing.JPanel;
import javax.swing.SwingWorker;
import com.sun.tools.jconsole.JConsolePlugin;
import com.sun.tools.jconsole.JConsoleContext;
import com.sun.tools.jconsole.JConsoleContext.ConnectionState;
public abstract class StatsPlugin extends JConsolePlugin
implements PropertyChangeListener
